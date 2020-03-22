#include <stdio.h>

// Punto 3 "Venta de computadoras Bell"
// Edison Santiago Pulido

int main() {

    // Declaracion de variables
    int opcionEquipo;
    int opcionRAM;
    int valorBase;
    int valorRAM;
    int total;

    //Primer menu de seleccion
    printf("Empresa de computadores Bell\n\n");
    printf("Selecciona un modelo basico de PC:\n");
    printf("1    Portatil (precio base de $500)\n");
    printf("2    Computador de mesa (precio base de $680)\n");
    printf("3    Mini PC (precio base de $400)\n");
    scanf("%i",&opcionEquipo);

    //Analizar si el usuario ingreso una opcion no valida
    if(opcionEquipo!=1 && opcionEquipo!=2 && opcionEquipo!=3){
        printf("La opcion ingresada no es valida. Finalizando programa\n");
        return 1;
    }

    //Segundo menu de seleccion
    switch(opcionEquipo){
        case 1:
            valorBase = 500;
            printf("\nElige una cantidad de RAM para el Portatil (4GB - 16GB)\n");
            scanf("%i",&opcionRAM);
            if(opcionRAM<4 || opcionRAM>16){
                printf("Cantidad de memoria RAM no esta en el rango. Finalizando programa\n");
                return 1;
            }
            break;
        case 2:
            valorBase = 680;
            printf("\nElige una cantidad de RAM para el Computador de Mesa (8GB - 64GB)\n");
            scanf("%i",&opcionRAM);
            if(opcionRAM<8 || opcionRAM>64){
                printf("Cantidad de memoria RAM no esta en el rango. Finalizando programa\n");
                return 1;
            }
            break;
        case 3:
            valorBase = 400;
            printf("\nElige una cantidad de RAM para el Mini PC (4GB - 32GB)\n");
            scanf("%i",&opcionRAM);
            if(opcionRAM<4 || opcionRAM>32){
                printf("Cantidad de memoria RAM no esta en el rango. Finalizando programa\n");
                return 1;
            }
            break;
        default:
            break;
    }
    valorRAM = 40 * opcionRAM;

    //Informe de precio segun las opciones seleccionadas
    total = valorBase + valorRAM;
    printf("\nEl equipo seleccionado tiene un valor base de $%i, ademas de un costo de $%i por añadir %iGB de RAM.\n",valorBase,valorRAM, opcionRAM);
    printf("En total, el equipo tiene un costo de %i",total);

    return 0;
}
