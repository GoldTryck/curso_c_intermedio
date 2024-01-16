#include <stdio.h>

typedef struct cajaFruta{
    char* fruta;
    int cantidad;
    float precio;
}cajaFruta;

typedef struct FrutaMixta{
    cajaFruta caja1;
    cajaFruta caja2;
    cajaFruta caja3;
    float precio; 
}FrutaMixta;

int main(){

    cajaFruta caja_1;
    caja_1.fruta = "platanos";
    caja_1.cantidad = 10;
    caja_1.precio = 15.00;

    cajaFruta caja_2 = {"fresas", 100, 5.00};
    cajaFruta caja_3 = {"uvas", 50, 3.50};
    cajaFruta caja_4 = {"manzanas", 20, 10.00};

    printf("La caja 1 contiene: %d %s con un precio de $%.2f c/u.\n", caja_1.cantidad, caja_1.fruta, caja_1.precio);

    FrutaMixta cajaMixta_1 = {
                                caja_1,
                                caja_2,
                                caja_3,
                                (caja_1.precio * caja_1.cantidad) + (caja_2.precio * caja_2.cantidad) + (caja_3.precio * caja_3.cantidad)
                            };

    printf("La caja mixta contiene: %s, %s y %s\n", cajaMixta_1.caja1.fruta, cajaMixta_1.caja2.fruta, cajaMixta_1.caja3.fruta);
    printf("La caja mixta tiene un precio de: $%.2f\n", cajaMixta_1.precio);
}