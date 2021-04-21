#include<stdio.h>
int main (){
    char idioma;
    printf("Elija su idioma//Choose your languaje\n");
    printf("Escoja:\n's' para Espagnol\n'e' for English\n");
    int z=0;
    int opcion, o1, o2;
    
    while(z==0){
        scanf("%c",&idioma);
        if (idioma=='s'||idioma=='S'){
            break;
        }
        else if (idioma=='e'||idioma=='E'){
            break;
        }
        else{
            printf("El dato introducido es incorrecto\nEscoja:\n'a'para Espagnol\n'b'for English\n");
            scanf("%c",&idioma);
        }
        }
    
    if (idioma=='s'||idioma=='S'){
        printf("1.¿Que tienes en la nevera?\n2.Por categorias\n3.Ver todas las recetas\n4.Festividades\n5.Crea tu menu\n6.SALIR\n");
        printf("Marque el numero de la opcion deseada:\n");
        scanf("%d",&opcion);
        
        if(opcion==1){
            printf("QUE TIENES EN LA NEVERA?\n");
            printf("1.Huevos\n2.Pasta\n3.Arroz\n4.Patata\n5.Legumbres\n");
            printf("Introduzca el numero del alimento deseado:\n");
            scanf("%d",&o1);
            if (o1==1){
                printf("Recetas con huevo:\n\nHuevos rellenos\nQuich de atun\nHuevos al plato\nSarten de batatas con huevos\nHuevos al horno\n");
            }else if(o1==2){
                printf("Recetas con pasta:\n\nEnsalada de pasta\nPasta al pesto\nAguacates rellenos de pasta y atun\nMac&cheese\nRamen casero\n");
            }else if(o1==3){
                printf("Recetas con arroz:\n\nRisoto milanesa\nArroz al curry\nArroz tres delicias\nEnsalada de arroz\nPaella al gusto\n");
            }else if(o1==4){
                printf("Recetas con patata:\n\nBolas de patata y atun\nEnsaladilla rusa\nEnsalada campera\nMilhoja de patata con tomate\nSopa de patata\nTortitas de patata\n");
            }else if(o1==5){
                printf("Recetas con Legumbres:\n\nEnsalada de judias blancas\nPotaje\nGarbanzos al horno\nNachos con frijoles\nHamburguesa de lentejas\n");
                
            }
            
		}
        
        else if(opcion==4){
        	printf("FESTIVIDADES\n");
        	printf(" 1.Navidad.\n 2.San Valentin.\n 3.Cumpleanyos.\n 4.Semana Santa.\n");
        	printf("Introduzca el numero de la festividad deseada:\n");
        	scanf("%d",&o1);
        	
                if (o1==1){
                    printf("*¡¡Feliz Navidad!!*\n Mas tiempo con tu familia, menos pensando el menu\n\n");
                    printf(" 1.Menu estandar\n 2.Menu premium\n 3.Menu kids\n");
                    printf("Introduzca el numero del menu deseado:\n");
                    scanf("%d",&o2);
                    if (o2==1){
                        printf("Menu estandar:\n\n");
                        printf("*ENTRANTES:*\n Embutido Variado\n Humus de garbanzo. Acompanyado de nachos, zanahoria, o puerros\n Croquetas de jamon\n\n*PRIMER PLATO:*\n Crema de calabaza con queso roquefort\n Sopa de marisco\n Tempura de verduras\n\n*SEGUNDO PLATO:*\n Solomillo Wellington\n Berenjenas rellenas\n Lubina a la sal\n\n*POSTRES:*\n Tarta de queso/zanahoria\n Brownie\n Hojaldre de chocolate\n");
                    }else if (o2==2){
                        printf("Menu premium:\n\n");
                        printf("*ENTRANTES:*\n Sticktartar\n Coquinas en salsa marinera\n Jamon 5jotas\n Salmon gravelax\n\n*PRIMER PLATO:*\n Risoto con trufas\n Bisque de langostinos\n Crema de carabineros\n\n*SEGUNDO PLATO:*\n Cordero asado a las finas hierbas\n Merluza en salsa verde\n Lasanya de verduras\n\n*POSTRES:*\n Mousse de crema de orujo\n Trufas con helado flambeado\n Filloas\n\n");
                    }else if (o2==3){
                        printf("Menu kids:\n\n");
                        printf("*PLATO PRINCIPAL:*\n Macarrones gratinados\n Corquetas y empanadillas\n Escalopines con patatas\n Arroz a la cubana\n\n*POSTRES:*\n Bola de helado\n Flan de queso\n Mousse de chocolate\n Macedonia\n");
                        
                    }
                }
		else if (o1==2){
			printf("¡¡Feliz San Valentin a los enamorados del buen comer!!\n");
			printf("1.Menu comida\n 2.Menu cena\n");
			printf("Introduzca el numero del menu deseado:\n");
			scanf("%d",&o2);
			if (o2==1){
				printf("Menu comida:\n\n");
				printf("ENTRANTES:\n Mousse de esparragos\n Crema de mejillones con manzana y cilantro\n\n PLATO PRINCIPAL:\n Zamburiñas picantitas con salsa de tomate y jengibre\n Pollo en reduccion de balsámico y verduras\n\n POSTRES:\n Sabayon con frutos rojos\n Tarta de crepes con fresas y nata \n");
			}else if (o2==2){
				printf("Menu cena:\n\n");
				printf("ENTRANTES:\n Ensalada de fresas, espinacas y queso de cabra con vinagreta de fresa\n Crujiente de queso y membrillo\n\n PLATO PRINCIPAL:\n Salmon al vapor con salsa de mostaza a la antigua y sidra\n Solomillo de cerdo en salsa de cerveza y miel con cebolla y castañas\n\n POSTRES:\n Coulant de chocolate\n Pannacotta de Nutella y vainilla\n\n");
			}
    }
                if (o1==3){
		        printf("Feliz cumpleanyos!!\nA soplar las velas.\n");
		        printf(" 1.Amante del chocolate\n 2.Algo mas ligth\n 3.Prefiero salado\n");
		        printf("Introduzca el número del menú deseado:\n");
		        scanf("%d",&o2);
			        if (o2==1){
			            printf("Amante del chocolate:\n\n");
			            printf(" Tarta de tres chocolates\n Tarta de galletas con crema de chocolate\n Brownie de chocolate con nueces\n");
			        }else if (o2==2){
			            printf("Algo mas ligth:\n\n");
			            printf(" Pastel de zanahoria con nueces\n Pastelitos de queso\n Tarta de manzana\n Tarta de queso\n");
			        }else if(o2==3){
			            printf("Prefiero salado:\n\n");
			            printf(" Flamenquines enrrollados al horno\n Croissants de queso y jamon\n Finggers de queso\n Mini hamburguesas con queso\n");    
			        }
		   		}
    
		        if (o1==4){
		            printf("Vacaciones bien merecidas!\nEn esta seccionn encontraras los platos tipicos de esta festividad.\n");
		            printf(" 1.Entrantes\n 2.Primeros\n 3.Segundos\n 4.Postres\n");
		            scanf("%d",&o2);
		            if (o2==1){
		                printf("Para empuzar con buen pie tenemos:\n\n");
		                printf(" Atascaburras\n Bunyuelos de bacalao\n Tortilla de camarones\n Porrusalda\n");
		            }else if (o2==2){
		                printf("Continuamos con los primeros:\n\n");
		                printf(" Potaje de vigilia\n Garbanzos con espinacas\n Patatas viudas\n Sopa de ajo\n");
		            }else if(o2==3){
		                printf("Segundos platos:\n\n");
		                printf(" Cordero asado\n Hornazo\n Pava con pelotas\n Merluza a la cazuela\n");
		            }else if(o2==4){
		                printf("Postres:\n\n");
		                printf(" Torrijas\n Leche frita\n Arroz con leche\n Bunyuelos de viento\n");
		            }
				}
   			}
	}
	else if (idioma=='e'||idioma=='E') {
        printf("1.What do you have in your fridge?\n2.Categories\n3.All recipes\n4.Festivities\n5.Desing your menu\n6.EXIT\n");
    }
    return 0;
}
