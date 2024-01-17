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
        int numero;
        fpos_t pos_inicial;
        fpos_t pos_final;

        // fseek(archivo, 4L, SEEK_CUR);
        // fseek(archivo, -8L, SEEK_END);
        fgetpos(archivo, &pos_inicial);
        fread(&numero, sizeof(int), 1, archivo);
        printf("posicion inicial: %d \tvalor leido: %d\n", pos_inicial, numero);
        fgetpos(archivo, &pos_final);
        printf("posicion final: %d\n", pos_final);
        // fsetpos(archivo, &pos_inicial);
        // fgetpos(archivo, &pos_final);
        // printf("La nueva posicion es: %d\n", pos_final);
        fclose(archivo);
        printf("El archivo se cerro correctamente\n");
        return 0;
    }
}