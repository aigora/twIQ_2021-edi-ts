#include<stdio.h>
int main (){
    char idioma;
    int opcion,o1,o2;
    printf("Elija su idioma//Choose your languaje\n");
    printf("Escoja:\n 'S' para Espagnol\n 'E' for English\n");
    int z=0;
    
    while(z==0){
        scanf("%c",&idioma);
        if (idioma=='S'||idioma=='s'){
            break;
        }
        else if (idioma=='E'||idioma=='e'){
            break;
        }
        else{
            printf("El dato introducido es incorrecto\nEscoja:\n'S'para Espagnol\n'E'for English\n");
            scanf("%c",&idioma);
        }
        }
    
    if (idioma=='S'||idioma=='s'){
        printf("1. ¿Qué tienes en la nevera?\n");
        printf("2. Por categorías\n");
        printf("3. Ver todas las recetas\n");
        printf("4. Festividades\n");
        printf("5. Crea tu menú\n");
        printf("6. SALIR\n");
        printf("Marque el número de la opción deseada:\n");
        scanf("%d",&opcion);
        if(opcion==4){
        printf(" 1.Navidad.\n 2.San Valentín.\n 3.Cumpleaños.\n 4.Semana Santa.\n");
        printf("Introduzca el número de la festividad deseada:\n");
        scanf("%d",&o1);
                if (o1==1){
                    printf("*¡¡Feliz Navidad!!*\n Más tiempo con tu familia, menos pensando el menú\n\n");
                    printf(" 1.Menú estándar\n 2.Menú premium\n 3.Menú kids\n");
                    printf("Introduzca el número del menú deseado:\n");
                    scanf("%d",&o2);
                    if (o2==1){
                        printf("Menú estándar:\n\n");
                        printf(" *ENTRANTES:*\n Embutido Variado\n Humus de garbanzo. Acompañado de nachos, zanahoria, o puerros\n Croquetas de jamón\n\n *PRIMER PLATO:*\n Crema de calabaza con queso roquefort\n Sopa de marisco\n Tempura de verduras\n\n *SEGUNDO PLATO:*\n Solomillo Wellington\n Berenjenas rellenas\n Lubina a la sal\n\n *POSTRES:*\n Tarta de queso/zanahoria\n Brownie\n Hojaldre de chocolate\n");
                    }else if (o2==2){
                        printf("Menú premium:\n\n");
                        printf(" *ENTRANTES:*\n Sticktartar\n Coquinas en salsa marinera\n Jamón 5jotas\n Salmón gravelax\n\n *PRIMER PLATO:*\n Risoto con trufas\n Bisqué de langostinos\n Crema de carabineros\n\n *SEGUNDO PLATO:*\n Cordero asado a las finas hierbas\n Merluza en salsa verde\n Lasaña de verduras\n\n *POSTRES:*\n Mousse de crema de orujo\n Trufas con helado flambeado\n Filloas\n\n");
                    }else if(o2==3){
                        printf("Menú kids:\n\n");
                        printf(" *PLATO PRINCIPAL:*\n Macarrones gratinados\n Corquetas y empanadillas\n Escalopines con patatas\n Arroz a la cubana\n\n *POSTRES:*\n Bola de helado\n Flan de queso\n Mousse de chocolate\n Macedonia\n");
                        
                    }
                }
        }
    }else if (idioma=='E'||idioma=='e') {
        printf("What do you have in your fridge?\n");
        printf("Categories\n");
        printf("All recipes\n");
        printf("Festivities\n");
        printf("Desing your menu\n");
        printf("EXIT\n");
    }
    return 0;
}
