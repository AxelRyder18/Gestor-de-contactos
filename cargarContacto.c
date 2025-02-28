void cargarContactos(Contacto **lista, int *contador, const char *filename)
{
    FILE *archivo = fopen(filename, "r");
    if (!archivo)
    {
        printf("No se encontró el archivo '%s'.\n", filename);
        return;
    }

    char nombre[50], telefono[20], correo[50];
    int cargados = 0;
    while (fscanf(archivo, "%s %s %s", nombre, telefono, correo) == 3)
    {
        agregarContacto(lista, nombre, telefono, correo);
        cargados++;
    }
    fclose(archivo);
    *contador += cargados;
    printf("%d contactos cargados desde '%s'.\n", cargados, filename);
}
