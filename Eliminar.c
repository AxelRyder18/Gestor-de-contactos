#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void eliminarContacto(Contacto** lista, const char* nombre) {
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