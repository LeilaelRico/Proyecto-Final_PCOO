/*
ITESM Querétaro
Programación Orientada a Objetos
Proyecto Final PCOO
Cristian Leilael Rico Espinosa A01707023
04/12/2020
*/

#include<cstdlib> // Librería para utilizar la función rand y generar números aleatorios.
#include "creUsuario.h" // Incluyo solamente la clase de Usuario por el tipo de relación que ya existe entre las otras clases.


void menu(){

    // Muestra las opciones del sistema
    cout<< "\n*******************************************************";
    cout<< "\nSeleccione las opciones por el orden dado.\n";
    cout<< "1. Ingresar su nombre.\n";
    cout<< "2. Ingresar su apellido.\n";
    cout<< "3. Mostrar informaci\242n del proveedor\n";
    cout<< "4. Seleccione su forma de pago.\n";
    cout<< "5. Obtenga su n\xA3mero.\n";
    cout<< "6. Mostrar sus datos.\n";
    cout<< "7. Salir.\n";
    cout<< "*******************************************************";
}

void fmpg (){ // Se crea otro pequeño menú que se utilizará dentro de una de las opciones.
    cout<< "1. Debito.\n";
    cout<< "2. Tarjeta de credito.\n";
}

void mnpro(){
    cout<< "1. Telcel.\n";
    cout<< "2. Movistar.\n";

}

int main (){

    Usuario user; // Se crea una variable llamada user del tipo de la clase "Usuario".

    string usernom;
    string userap; // Se crean variables que recibirán datos del usuario. Estas después serán utilizadas en las funciones de los setters correspondientes.
    int userpro, userpaq, userpag, usernum;


    int opcion=0; // Esta variable será utilizada para elegir una opción del menú principal.
    int opcionpro=0; // Variable utilizada posteriormente para un menú.

    while(opcion < 7 && opcion > -1){ // Se hace uso de una función while para que el menú y las opciones se ciclen hasta que el usuario desee salir.

        menu();

          cout<< "\nPorfavor, ingrese una opci\242n: ";
          cin>>opcion;

          switch(opcion){

          case 1:

            cout<<"Ingrese su nombre: ";
            cin>>usernom;
            user.set_nombre(usernom);
            // La variable usernom recibe los datos del usuario y set_nombre se encarga de asignar a la variable al objeto "nombre" de la clase usuario.
            cout<<"Nombre: "<<user.get_nombre()<<endl;
            break;

          case 2:

            cout<<"Ingrese su apellido: ";
            cin>>userap;
            user.set_apellido(userap);
            // Similar al caso anterior, el set_apellido asigna el "apellido" al objeto del mismo nombre dentro de la clase usuario.
            cout<<"Apellido: "<<user.get_apellido()<<endl;
            break;

          case 3:

              // Se mandan a llamar a los proveedores creados.

              user.agregaPaqueteT("Telcel","20","1 dia"," 200 Mb",0); // Se crean varios objetos de la clases hijas de "Proveedor": Telcel y Movistar, cada uno con sus valores privados.
              user.agregaPaqueteT("Telcel","80","13 dias"," 1 Gb",1);
              user.agregaPaqueteT("Telcel","100","15 dias"," Ilimitado",2);
              user.agregaPaqueteM("Movistar","30","3 dias"," 300 Mb",0);
              user.agregaPaqueteM("Movistar","50","7 dias"," 600 Mb",1);
              user.agregaPaqueteM("Movistar","100","15 dias"," 1.5 Gb",2);

              mnpro();
              cout<<"Elija un proveedor: "; // Para mostrar los paquetes de alguno e los proveedores, se utiliza un menú que ayudará a separar a los mismos por proveedores.
              cin>> opcionpro;
              if(opcionpro>2){
                 cout<<"Opcion incorrecta, intente nuevamente."<<endl; // Se crea este estatuto para evitar que se ingrese un número diferente a los pedidos.
                    break;
                }
              else{
              if(opcionpro=1){
                    cout<<user.mostrarPaqueteT(); // Se utiliza la función anteriormente definida en la clase Usuario para mostrar los paquetes de Telcel.
                    cout<<"\nElija uno de los paquetes antes mostrados: ";
                    cin>>userpaq;
                    user.set_paquete(userpaq); // Se asigna un paquete al objeto con el mismo nombre de la clase usuario.
                    break; // Se usa para salir de estas opciones y que no se pasa al segundo estatuto.
              }
                if(opcionpro=2){
                        cout<<user.mostrarPaqueteM(); // Se utiliza la función anteriormente definida en la clase Usuario para mostrar los paquetes de Movistar.
                        cout<<"\nElija uno de los paquetes antes mostrados: ";
                        cin>>userpaq;
                        user.set_paquete(userpaq); // Se asigna un paquete al objeto con el mismo nombre de la clase usuario.
                        break;}
              }
            break;

          case 4:
            fmpg(); // Se manda a llamar al pequeño menú anteriormente creado.
            cout<<"Elija una de las opciones: ";
            cin>>userpag;
            user.set_pago(userpag); // Se asigna un tipo de pago al objeto con el mismo nombre de la clase usuario.
            break;

          case 5:
            usernum=4489999999+rand()%4499999999; // Se crea un número aleatorio entre esas dos cantidades y se guarda en una variable.
            cout<<"Este es su n\xA3mero:\n"<<usernum;
            user.set_numero(usernum); // Se asigna un número de teléfono al objeto con el mismo nombre de la clase usuario.
            break;

          case 6:
              // Muestra en una sola lista los datos creados para user.
            cout<<"Nombre: "<<user.get_nombre()<<"\nApellido: "<<user.get_apellido()<<"\nPaquete: "<<user.get_paquete()<<"\nTipo de Pago: "<<user.get_pago()<<"\nSu numero: "<<user.get_numero()<<endl;
            break;

          }
          }

}
