#include <stdio.h>

#include <string.h>

#define MAX_CONTACTOS 100


// Función para buscar un contacto por nombre

void buscarContacto(struct Contacto contactos[], int totalContactos) {

char nombreBusqueda[50]; 

int encontrado = 0; 



printf("Ingrese el nombre del contacto a buscar: "); 

scanf(" %[^\n]", nombreBusqueda); // Leer la entrada con espacios 



for (int i = 0; i < totalContactos; i++) { 

    if (strcmp(contactos[i].nombre, nombreBusqueda) == 0) { 

        printf("\nContacto encontrado:\n"); 

        printf("Nombre: %s\n", contactos[i].nombre); 

        printf("Teléfono: %s\n", contactos[i].telefono); 

        printf("Email: %s\n", contactos[i].email); 

        encontrado = 1; 

        break; 

    } 

} 



if (!encontrado) { 

    printf("\nContacto no encontrado.\n"); 

}

}

// Función de prueba para demostrar la búsqueda

int main() {

struct Contacto contactos[MAX_CONTACTOS] = { 

    {"Juan Perez", "123456789", "juan@example.com"}, 

    {"Maria Lopez", "987654321", "maria@example.com"}, 

    {"Carlos Diaz", "555444333", "carlos@example.com"} 

}; 



int totalContactos = 3; 



buscarContacto(contactos, totalContactos); 



return 0;

}