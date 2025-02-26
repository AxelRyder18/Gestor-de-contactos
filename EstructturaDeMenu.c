#include <stdio.h>

int main()
{
    int opcion;
    printf("Menu de opciones\n");
    printf("1. Opcion 1\n");
    printf("2. Opcion 2\n");
    printf("3. Opcion 3\n");
    printf("4. Salir\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);
    switch (opcion)
    {
    case 1:
        printf("1. Buscar un contacto\n");
        break;
    case 2:
        printf("2. Modificar un contacto\n");
        break;
    case 3:
        printf("3. Eliminar u contacto\n");
        break;
    case 4:
        printf("Ha seleccionado la opcion 4\n");
        break;
    default:
        printf("Opcion no valida\n");
        break;
    }
    return 0;
}