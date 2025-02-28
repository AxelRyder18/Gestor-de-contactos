# Documentación del Proyecto: Gestor de Contactos

## Descripción de la práctica
El objetivo de esta práctica es desarrollar un gestor de contactos en lenguaje C, que permita al usuario realizar las siguientes acciones:

1. Agregar nuevos contactos (nombre y correo electrónico).
2. Mostrar la lista de contactos.
3. Buscar un contacto por nombre.
4. Eliminar un contacto.
5. Guardar los contactos en un archivo de texto.
6. Cargar los contactos desde un archivo de texto.

Para esta práctica, trabajamos en equipo utilizando **GitHub** para el control de versiones y **Microsoft Planner** para la organización y asignación de tareas.

## Herramientas utilizadas
- **Lenguaje de programación**: C
- **Control de versiones**: GitHub
- **Gestión de tareas**: Microsoft Planner
- **Editor de código**: Visual Studio Code

## Asignación de tareas
- **Estructura del programa** → Juan Luis
- **Agregar contactos** → Nicole
- **Mostrar contactos** → Alondra
- **Buscar contactos** → Ismael Aguilar
- **Eliminar contactos** → Claudia Nicole
- **Guardar y cargar contactos** → Juan y Axel

## Código fuente y explicación
El código está escrito en C y hace uso de estructuras de datos y funciones para gestionar una lista de contactos.

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
```
Estas librerías son esenciales para el manejo de entrada y salida (`stdio.h`), manipulación de cadenas (`string.h`) y gestión de memoria dinámica (`stdlib.h`).

```c
#define MAX_CONTACTOS 100
```
Se define una constante para el número máximo de contactos que puede manejar el sistema.

```c
typedef struct Contacto {
    char nombre[50];
    char telefono[20];
    char correo[50];
    struct Contacto *siguiente;
} Contacto;
```
Se define la estructura **Contacto**, que almacena la información del contacto y un puntero a otro contacto para la lista enlazada.

### Funciones

#### Agregar contacto

```c
void agregarContacto(Contacto **lista, const char *nombre, const char *telefono, const char *correo) {
    Contacto *nuevo = (Contacto *)malloc(sizeof(Contacto));
    if (nuevo) {
        strncpy(nuevo->nombre, nombre, 50);
        strncpy(nuevo->telefono, telefono, 20);
        strncpy(nuevo->correo, correo, 50);
        nuevo->siguiente = *lista;
        *lista = nuevo;
    }
}
```
Esta función reserva memoria para un nuevo contacto, copia sus datos y lo enlaza a la lista existente.

#### Eliminar contacto

```c
void eliminarContacto(Contacto **lista, const char *nombre) {
    Contacto *actual = *lista, *anterior = NULL;
    while (actual && strcmp(actual->nombre, nombre) != 0) {
        anterior = actual;
        actual = actual->siguiente;
    }
    if (actual) {
        if (anterior) {
            anterior->siguiente = actual->siguiente;
        } else {
            *lista = actual->siguiente;
        }
        free(actual);
    }
}
```
Esta función recorre la lista para encontrar el contacto a eliminar y ajusta los punteros de la lista antes de liberar la memoria del contacto eliminado.
