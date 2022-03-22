# .gitignore
_¿Que es .gitignore? ¿Cuando se debe hacer? ¿Como se configura el archivo .gitignore?, Ejercicio 2) 2) A)_

## ¿Que es .gitignore?

.gitignore es un archivo que el usuario es capaz de crear, cuya funcion es darnos la capacidad de elegir que archivos Git ignorara completamente al momento de realizar una operacion.

### ¿En que ocasiones se debe usar?

La respuesta a esta pregunta depende de cada desarrollador y de cada proyecto.  Un ejemplo de utilizacion de .gitignore es un archivo de texto personal del desarrollador, anotaciones, diagramas, instaladores de software, demos, etc.
Un uso mayoritario de .gitignore es de archivos que no pertenecen al codigo del proyecto, asi como tambien archivos que crean los sistemas operativos por defecto.

### ¿Como se usa y configura el archivo .gitignore? 

Para empezar, debemos crear el archivo .gitignore en la carpeta raiz de nuestro proyecto (Al tener el "." al inicio, este archivo sera oculto para Linux y Mac, mas no para Windows). 

Dentro del archivo, deberemos colocar texto plano que indique todas las carpetas o archivos que queremos que git ignore. La notacion es bastante simple, por ejemplo:

```
ignorar/
``` 

Este comando le indicara a Git que evite el versionado de todo el contenido de la carpeta "ignorar".

Con la siguiente linea:
```
*.txt
```
Le estamos diciendo a Git que ignore todos los documentos acabados en .txt .

Si queremos que ignore un solo archivo en especifico, simplemente escribimos su nombre, por ejemplo:
``` 
proyecto.c
``` 
Evitara solamente el archivo llamado "proyecto.c".

Por ultimo, si queremos usar comentarios dentro del archivo .gitignore, debemos escribir el comentario luego del simbolo #, por ejemplo:

```
ejemplo/  # Ignoramos la carpeta "Ejemplo"

```
En este caso, vamos a ignorar el archivo tp1_1, que es un binario ejecutable.


# Direcciones

_Ejercicio 2, Nota: Si resolvio correctamente los puntos II y III, notara que el resultado es el mismo, ¿a que se debe? ¿Que obtiene en el punto IV? ¿Es igual que los anteriores? ¿Por que?_

## Respuesta:

### ¿Porque son iguales?

Cada variable declarada, incluidos los punteros, ocupan un espacio en la memoria. Nosotros somos capaces de acceder y mostrar ese espacio mediante el uso de el operador unario de direccion "&" (Ampersand) y, para mostrarlo, usamos el modificador %p.

Al mismo tiempo, debemos recordar la funcion principal de una variable puntero, la cual es almacenar una direccion de memoria de un dato o de una variable que contenga un dato.
Por ende, si nosotros declaramos un puntero que apunte hacia una direccion de memoria de una variable y procedemos a mostrar el puntero en pantalla, nos mostrara la direccion de memoria de la variable a la cual apunta el puntero.

De la misma forma, si nosotros mostramos la direccion de memoria de la variable directamente usando el operador unario de direccion, se mostrara esa misma direccion.

### ¿Que obtenemos en el punto IV?

Al usar el operador unario de direccion en el puntero, nos devolvera la direccion de memoria en la que se almacena dicho puntero.

#### ¿Es igual que los anteriores?
No, puesto que un puntero es una variable y por ocupa una direccion de memoria unica y que no puede ser identica a la de otra variable.

## Fuentes:

- [FreeCodeCamp](https://www.freecodecamp.org/espanol/news/gitignore-explicado-que-es-y-como-agregar-a-tu-repositorio/)
- [DesarrolloWeb](https://desarrolloweb.com/articulos/archivo-gitignore.html/)

