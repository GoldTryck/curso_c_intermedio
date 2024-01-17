#include <stdio.h>

int main()
{
    FILE *archivo;
    char *nombre_archivo = "archivo_texto.txt";
    archivo = fopen(nombre_archivo, "r+");

    if (archivo == NULL)
    {
        printf("Error al abrir el archivo\n");
        return -1;
    }
    else
    {
        fputc('N', archivo);

        char caracter = fgetc(archivo);
        printf("Cracter leido: %c", caracter);

        fclose(archivo);
        printf("El archivo se cerro correctamente\n");
        return 0;
    }
}