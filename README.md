# Examen-programaci-n
https://github.com/jaimesernag/Examen-programaci-n.git
TIPO TEST:
1.Todas las anteriores 2. Un archivo que ayuda a gestionar y automatizar la compilación de proyectos de programación 3.Variables que almacenan la dirección de otra variable.
PREGUNTA 3: 
¿Cómo la programación orientada a objetos difiere de la programación procedimental?
En la programación procedimental, el código se organiza en torno a procedimientos o funciones que realizan operaciones específicas. Los datos son manipulados principalmente a través de estructuras de datos, y la ejecución sigue un flujo lineal de instrucciones.Por otro lado, la programación orientada a objetos organiza el código en torno a objetos, que son instancias de clases. Cada objeto tiene datos y funciones asociadas.
¿Cómo C++ brinda soporte para ambos paradigmas?
C++ da soporte para ambos paradigmas, puedes escribir código procedimental en C++ de la manera clásica, utilizando funciones y estructuras de datos. Al mismo tiempo, C++ es un lenguaje orientado a objetos, lo que significa que puedes usar clases y objetos para organizar tu código de manera más modular y reutilizable.
¿Qué es la propagación de una excepción?
La propagación de una excepción se refiere al proceso en el que una excepción lanzada en un bloque de código se transfiere al siguiente nivel superior de la pila de llamadas hasta que se encuentra un bloque catch que pueda manejar esa excepción.
¿Qué ocurre si una excepción lanzada no es capturada por ningún bloque catch?
Si una excepción lanzada no es capturada por ningún bloque catch en el camino hacia arriba, el programa terminará abruptamente. Esto se debe a que no se ha proporcionado un manejo para esa excepción en ningún lugar de la pila de llamadas, y C++ no proporciona un mecanismo de recuperación predeterminado para excepciones no capturadas.
¿Qué se entiende por "Adquisición de Recursos" en el contexto de C++?
En C++, la "Adquisición de Recursos" se refiere al proceso de obtener y reservar recursos, como memoria o archivos, durante la ejecución de un programa. ¿Por qué es importante y cómo se relaciona con la gestión de excepciones?
Es importante porque los recursos son limitados, y si no se gestionan adecuadamente, pueden surgir problemas como fugas de memoria o conflictos en el acceso a archivos. Aquí es donde entra en juego la gestión de excepciones.Cuando adquieres un recurso en C++, como memoria dinámica con new o abres un archivo, hay que asegurarse de liberar ese recurso correctamente, incluso si ocurre una excepción. La gestión de excepciones y la liberación adecuada de recursos están estrechamente relacionadas.


