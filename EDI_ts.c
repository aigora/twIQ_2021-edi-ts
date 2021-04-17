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
        printf("Marque el numero de la opcion deseada:\n");
        scanf("%d",&opcion);
        if(opcion==4){
        printf(" 1.Navidad.\n 2.San Valentin.\n 3.Cumpleannyos.\n 4.Semana Santa.\n");
        printf("Introduzca el numero de la festividad deseada:\n");
        scanf("%d",&o1);
                if (o1==1){
                    printf("*¡¡Feliz Navidad!!*\n Mas tiempo con tu familia, menos pensando el menu\n\n");
                    printf(" 1.Menu estandar\n 2.Menu premium\n 3.Menu kids\n");
                    printf("Introduzca el numero del menu deseado:\n");
                    scanf("%d",&o2);
                    if (o2==1){
                        printf("Menu estandar:\n\n");
                        printf(" *ENTRANTES:*\n Embutido Variado\n Humus de garbanzo. Acompañado de nachos, zanahoria, o puerros\n Croquetas de jamon\n\n *PRIMER PLATO:*\n Crema de calabaza con queso roquefort\n Sopa de marisco\n Tempura de verduras\n\n *SEGUNDO PLATO:*\n Solomillo Wellington\n Berenjenas rellenas\n Lubina a la sal\n\n *POSTRES:*\n Tarta de queso/zanahoria\n Brownie\n Hojaldre de chocolate\n");
                    }else if (o2==2){
                        printf("Menu premium:\n\n");
                        printf(" *ENTRANTES:*\n Sticktartar\n Coquinas en salsa marinera\n Jamon 5jotas\n Salmon gravelax\n\n *PRIMER PLATO:*\n Risoto con trufas\n Bisque de langostinos\n Crema de carabineros\n\n *SEGUNDO PLATO:*\n Cordero asado a las finas hierbas\n Merluza en salsa verde\n Lasaña de verduras\n\n *POSTRES:*\n Mousse de crema de orujo\n Trufas con helado flambeado\n Filloas\n\n");
                    }else if(o2==3){
                        printf("Menu kids:\n\n");
                        printf(" *PLATO PRINCIPAL:*\n Macarrones gratinados\n Corquetas y empanadillas\n Escalopines con patatas\n Arroz a la cubana\n\n *POSTRES:*\n Bola de helado\n Flan de queso\n Mousse de chocolate\n Macedonia\n");
                        
                    }
                }
        }
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
