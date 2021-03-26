#include<stdio.h>
int main (){
    char idioma;
    printf("Elija su idioma//Choose your languaje\n");
    printf("Escoja:\n'a' para Espagnol\n 'b' for English\n");
    int z=0;
    
    while(z==0){
        scanf("%c",&idioma);
        if (idioma=='a'){
            break;
        }
        else if (idioma=='b'){
            break;
        }
        else{
            printf("El dato introducido es incorrecto\nEscoja:\n'a'para Espagnol\n'b'for English\n");
            scanf("%c",&idioma);
        }
        }
    
    if (idioma=='a'){
        printf("¿Qué tienes en la nevera?\n");
        printf("Por categorías\n");
        printf("Ver todas las recetas\n");
        printf("Festividades\n");
        printf("Crea tu menú\n");
        printf("SALIR\n");
    }else if (idioma=='b') {
        printf("What do you have in your fridge?\n");
        printf("Categories\n");
        printf("All recipes\n");
        printf("Festivities\n");
        printf("Desing your menu\n");
        printf("EXIT\n");
    }
    return 0;
}
