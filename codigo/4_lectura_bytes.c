#include <stdio.h>
#define SIZE 40

int main()
{
    FILE *archivo;
    char *nombre_archivo = "archivo_binario.dat";
    archivo = fopen(nombre_archivo, "r");

    if (archivo == NULL)
    {
        printf("Error al abrir el archivo\n");
        return -1;
    }
    else
    {
        int serie_leida[10];
        fread(serie_leida, sizeof(int), 10, archivo);
        for (int i = 0; i < 10; i++)
        {
            printf("%d\n", serie_leida[i]);
        }
        fclose(archivo);
        printf("El archivo se cerro correctamente\n");
        return 0;
    }
}