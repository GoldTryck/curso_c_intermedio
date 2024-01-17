#include <stdio.h>
#define SIZE 40

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
        char cadena[SIZE];
        // char caracter = fgetc(archivo);
        // fgets(cadena, SIZE, archivo);
        char texto[SIZE];
        int numero;
        fscanf(archivo, "%d %s", &numero, texto);
        printf("El numero leido es: %d\n", numero);
        printf("El texto leido es: %s\n", texto);
        fclose(archivo);
        printf("El archivo se cerro correctamente\n");
        return 0;
    }
}