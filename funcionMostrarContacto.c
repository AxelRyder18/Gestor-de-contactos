void mostrarContactos(Contacto *lista)
{
    if (!lista)
    {
        printf("No hay contactos para mostrar.\n");
        return;
    }
    printf("Lista de contactos:\n");
    int i = 1;
    Contacto *actual = lista;
    while (actual)
    {
        printf("%d. Nombre: %s\n   Teléfono: %s\n   Correo: %s\n",
               i, actual->nombre, actual->telefono, actual->correo);
        actual = actual->siguiente;
        i++;
    }
}
