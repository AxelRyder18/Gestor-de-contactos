#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void agregarContacto(Contacto** lista, const char* nombre, const char* telefono, const char* email) {
    Contacto* nuevo = (Contacto*)malloc(sizeof(Contacto));
    if (nuevo) {
        strncpy(nuevo->nombre, nombre, 50);
        strncpy(nuevo->telefono, telefono, 15);
        strncpy(nuevo->email, email, 50);
        nuevo->siguiente = *lista;
        *lista = nuevo;
    }
}
