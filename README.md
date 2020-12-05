# Programación Orientada a Objetos

# Contexto
El programa busca automatizar el proceso de obtención de un número de teléfono, el usuario proporciona su nombre y apellido, elige un plan con alguna telefonía, su método de pago y obtiene su número de teléfono.

# Funcionalidad

El programa permite la creación de un solo perfil para un usuario, se recomienda que se haga por siguiendo punto por punto.
El usuario puede:
1. Añadir un nombre.
2. Añadir un apellido.
3. Elegir un proveedor.
4. Elegir una forma de pago.
5. Obtener su número de teléfono.
6. Ver toda la información registrada.

# Consideraciones

El código está programado para ejecutarse en la consola, está hecho de manera standard con c++.

# Correcciones

1. Se editó el UML para que demostrara de manera correcta la forma en la que las clases fueron planteadas y la relación que existe entre cada una de ellas.
2. Se añadió al código un proceso de composición para cumplir con lo que se pidió.

# Casos de Prueba.

Caso 1:
Seleccionar 1 y escribir Leilael.
Seleccionar 2 y escribir Medina.
Seleccionar 3, seleccionar 2 y posteriormente 2.
Seleccionar 4, elegir 1.
Seleccionar 5.
Seleccionar 6 mostrará:
Nombre: Leilael
Apellido: Medina
Paquete: 2
Tipo de Pago: 1
Su numero: *Número aleatorio*

Caso 2:
Seleccionar 1 y escribir Omhariany.
Seleccionar 2 y escribir Reyes.
Seleccionar 3, seleccionar 1 y posteriormente 3.
Seleccionar 4, elegir 1.
Seleccionar 5.
Seleccionar 6 mostrará:
Nombre: Omhariany
Apellido: Reyes
Paquete: 3
Tipo de Pago: 1
Su numero: *Número aleatorio*

Caso 3:
Pulsar 9 hará que el proceso termine y el programa se cierre.

Caso 4:
Seleccionar 1 y escribir Mariana.
Seleccionar 2 y escribir Guzman.
Seleccionar 3 y posteriormente ingresar 7 hará que el programa regrese al menú principal mostrando un mensaje que lo invita a intentarlo de nuevo.

Seleccionar 3, seleccionar 1 y posteriormente 3.

Seleccionar 4 e ingresar 8 hará que el programa regrese al menú principal mostrando un mensaje que lo invita a intentarlo de nuevo.

Seleccionar 4, elegir 1.

Seleccionar 5.
Seleccionar 6 mostrará:
Nombre: Mariana
Apellido: Guzman
Paquete: 3
Tipo de Pago: 1
Su numero: *Número aleatorio*
