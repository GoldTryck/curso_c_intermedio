#include <stdio.h>
#define SIZE 40

int main()
{
    FILE *archivo;
    char *nombre_archivo = "archivo_binario.dat";
    archivo = fopen(nombre_archivo, "w");

    if (archivo == NULL)
    {
        printf("Error al abrir el archivo\n");
        return -1;
    }
    else
    {
        int serie[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
        fwrite(serie, sizeof(int), 10, archivo);
        fclose(archivo);
        printf("El archivo se cerro correctamente\n");
        return 0;
    }
}