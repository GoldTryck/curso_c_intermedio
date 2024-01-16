#include <stdio.h>

typedef union caja
{
    char* fruta;
    char* verdura;
} caja;

int main(){

    caja caja_1;
    caja_1.fruta = "platanos";

    printf("La caja contiene: %s\n", caja_1.fruta);

    caja_1.verdura = "zanahorias";

    printf("La caja tambien contiene: %s\n", caja_1.verdura);


    printf("Por lo tanto la caja contiene %s y %s\n", caja_1.fruta, caja_1.verdura);

    printf("Direccion de memoria del miembro fruta: %p\n", &caja_1.fruta);
    printf("Direccion de memoria del miembro verdura: %p\n", &caja_1.verdura);
    return 0;
}