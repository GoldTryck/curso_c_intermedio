#include <stdio.h>

int main(){

    char carta = 'Z';

    printf("El contenido de la carta es: %c\n", carta);
    printf("La direccion de memoria es: %p\n", &carta);

    char buzon[] = "hola";

    printf("El contenido del buzon es: %s\n", buzon);
    printf("La direccion de memoria de el primer elemento del buzon es: %p\n", buzon);
    printf("La primera carta en el buzon contiene: %c\n", *buzon); // equivale a: buzon[0]



    for(char* p = buzon; p < buzon + sizeof(buzon); p++ ){
        
        int indice = p - &buzon[0]; //&buzon[0] == buzon
        printf("Elemento %d del buzon = %d\tDireccion de memoria: %p\n", indice, *p, p); //*p == p[indice]

    }

    for(int i = 0; i < sizeof(buzon); i++){
        printf("buzon[%d] = %c\t Su direccion de memoria es: %p\n", i, *(buzon + i), &buzon[i]);
    }
    return 0;
}