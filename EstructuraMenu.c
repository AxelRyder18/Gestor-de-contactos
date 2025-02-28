#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Contacto
{
    char nombre[50];
    char telefono[20];
    char correo[50];
    struct Contacto *siguiente;
} Contacto;

// Prototipos de funciones para la lista enlazada
void agregarContacto(Contacto **lista, const char *nombre, const char *telefono, const char *correo);
void eliminarContacto(Contacto **lista, const char *nombre);
void mostrarContactos(Contacto *lista);
void buscarContacto(Contacto *lista);
void cargarContactos(Contacto **lista, int *contador, const char *filename);

int main()
{
    Contacto *lista = NULL; // Cabeza de la lista enlazada
    int totalContactos = 0; // Contador de contactos en la lista
    int opcion;

    do
    {
        // Desplegar menú
        printf("\nMenu de opciones\n");
        printf("1. Agregar contacto\n");
        printf("2. Mostrar contactos\n");
        printf("3. Eliminar contacto\n");
        printf("4. Cargar contactos desde archivo\n");
        printf("5. Buscar contacto\n");
        printf("0. Salir\n");
        printf("Seleccione una opcion: ");

        scanf("%d", &opcion);
        getchar(); // Limpiar salto de línea

        switch (opcion)
        {
        case 1:
        {
            char nombre[50], telefono[20], correo[50];
            printf("Ingrese el nombre del contacto: ");
            scanf(" %49[^\n]", nombre);
            printf("Ingrese el teléfono del contacto: ");
            scanf(" %49[^\n]", telefono);
            printf("Ingrese el correo del contacto: ");
            scanf(" %49[^\n]", correo);

            agregarContacto(&lista, nombre, telefono, correo);
            totalContactos++;
            printf("Contacto agregado correctamente.\n");
            break;
        }
        case 2:
            mostrarContactos(lista);
            break;
        case 3:
        {
            char nombreEliminar[50];
            printf("Ingrese el nombre del contacto a eliminar: ");
            scanf(" %49[^\n]", nombreEliminar);
            eliminarContacto(&lista, nombreEliminar);
            totalContactos--;
            break;
        }
        case 4:
            cargarContactos(&lista, &totalContactos, "contactos.txt");
            break;
        case 5:
            buscarContacto(lista);
            break;
        case 0:
            printf("Saliendo...\n");
            break;
        default:
            printf("Opcion no valida.\n");
            break;
        }
    } while (opcion != 0);

    return 0;
}