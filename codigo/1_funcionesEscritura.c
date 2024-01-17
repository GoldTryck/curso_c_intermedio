#include <stdio.h>
#define SIZE 40

int main()
{
    FILE *archivo;
    char *nombre_archivo = "archivo_texto.txt";
    archivo = fopen(nombre_archivo, "w+");

    if (archivo == NULL)
    {
        printf("Error al abrir el archivo\n");
        return -1;
    }
    else
    {
        int edad = 30;

        // fputc('A',archivo);
        // fputs("Hola clase", archivo);
        fprintf(archivo, "Hola mi edad es %d anios", edad);
        fclose(archivo);
        printf("El archivo se cerro correctamente\n");
        return 0;
    }
}