#include<stdio.h>

void imprimirBanner();
void printBanner();

int main (){
    char idioma, lista[100000];
    printf("Elija su idioma//Choose your languaje\n");
    printf("Escoja:\n's' para Espagnol\n'e' for English\n");
    int z=0;
    int opcion, o1, o2;
    FILE * frecet;
    
    
    
    while(z==0){
        scanf("%c",&idioma);
        if (idioma=='s'||idioma=='S'){
            break;
        }
        else if (idioma=='e'||idioma=='E'){
            break;
        }
        else{
            printf("El dato introducido es incorrecto\nEscoja:\n's'para Espagnol\n'e'for English\n");
            scanf("%c",&idioma);
        }
    }
    
	imprimirBanner();
	   
    if (idioma=='s'||idioma=='S'){
        printf(" 1.Que tienes en la nevera?\n 2.Por categorias\n 3.Ver todas las recetas\n 4.Festividades\n 5.Crea tu menu\n 6.SALIR\n");
        printf("Marque el numero de la opcion deseada:\n");
        scanf("%d",&opcion);
        
        if(opcion==1){
            printf("***QUE TIENES EN LA NEVERA?***\n");
            printf(" 1.Huevos\n 2.Pasta\n 3.Arroz\n 4.Patata\n 5.Legumbres\n");
            printf("Introduzca el numero del alimento deseado:\n");
            scanf("%d",&o1);
            if (o1==1){
            
                frecet=fopen("recetas_huevo.txt","r");
                if (frecet==NULL) {
                    printf("Error, el fichero no se ha encontrado.\n");
                    return 0;
                }
                while (fscanf(frecet,"%s", lista) != EOF){
                    printf("%s\t",lista);
                }
                return 0;
                
            }else if(o1==2){
				frecet=fopen("recetas_pasta.txt","r");
				if (frecet==NULL) {
				    printf("Error, el fichero no se ha encontrado.\n");
				    return 0;
				}
				while (fscanf(frecet,"%s", lista) != EOF){
				    printf("%s\t",lista);
				}
				return 0;
                    
            }else if(o1==3){

                frecet=fopen("recetas_arroz.txt","r");
                if (frecet==NULL) {
                    printf("Error, el fichero no se ha encontrado.\n");
                    return 0;
                }
                while (fscanf(frecet,"%s", lista) != EOF){
                    printf("%s\t",lista);
                }
                return 0;
                         
            }else if(o1==4){
               
                frecet=fopen("recetas_patata.txt","r");
                if (frecet==NULL) {
                    printf("Error, el fichero no se ha encontrado.\n");
                    return 0;
                }
                while (fscanf(frecet,"%s", lista) != EOF){
                    printf("%s\t",lista);
                }
                return 0;
                
            }else if(o1==5){
             
                frecet=fopen("recetas_legumbre.txt","r");
                if (frecet==NULL) {
                    printf("Error, el fichero no se ha encontrado.\n");
                    return 0;
                }
                while (fscanf(frecet,"%s", lista) != EOF){
                    printf("%s\t",lista);
                }
                return 0;
            }
            
            
        }else if(opcion==2){
            printf("***POR CATEGORIAS***\n");
            printf(" 1.Comida asiatica\n 2.Comida fit\n 3.Tradicional espagnol\n 4.Para mamis\n 5.Al horno\n 6.Platos frios\n");
            printf("Introduzca el numero de la categoria deseada:\n");
            scanf("%d",&o1);
            if (o1==1){
              
                frecet=fopen("recetas_asiaticas.txt","r");
                if (frecet==NULL) {
                    printf("Error, el fichero no se ha encontrado.\n");
                    return 0;
                }
                while (fscanf(frecet,"%s", lista) != EOF){
                    printf("%s\t",lista);
                }
                return 0;
                
                
            }else if(o1==2){
              
                frecet=fopen("recetas_fit.txt","r");
                if (frecet==NULL) {
                    printf("Error, el fichero no se ha encontrado.\n");
                    return 0;
                }
                while (fscanf(frecet,"%s", lista) != EOF){
                    printf("%s\t",lista);
                }
                return 0;
                
            }else if(o1==3){
               
                frecet=fopen("recetas_espanyol.txt","r");
                if (frecet==NULL) {
                    printf("Error, el fichero no se ha encontrado.\n");
                    return 0;
                }
                while (fscanf(frecet,"%s", lista) != EOF){
                    printf("%s\t",lista);
                }
                return 0;
                
            }else if(o1==4){
                
                frecet=fopen("recetas_mamis.txt","r");
                if (frecet==NULL) {
                    printf("Error, el fichero no se ha encontrado.\n");
                    return 0;
                }
                while (fscanf(frecet,"%s", lista) != EOF){
                    printf("%s\t",lista);
                }
                return 0;
                
            }else if(o1==5){
               
                frecet=fopen("recetas_horno.txt","r");
                if (frecet==NULL) {
                    printf("Error, el fichero no se ha encontrado.\n");
                    return 0;
                }
                while (fscanf(frecet,"%s", lista) != EOF){
                    printf("%s\t",lista);
                }
                return 0;
                
            }else if(o1==6){
                
                frecet=fopen("recetas_frios.txt","r");
                if (frecet==NULL) {
                    printf("Error, el fichero no se ha encontrado.\n");
                    return 0;
                }
                while (fscanf(frecet,"%s", lista) != EOF){
                    printf("%s\t",lista);
                }
                return 0;
                
            }
        }else if(opcion==3){
            frecet=fopen("recetas.txt","r");
            if (frecet==NULL) {
                printf("Error, el fichero no se ha encontrado.\n");
                return 0;
            }
            while (fscanf(frecet,"%s", lista) != EOF){
                printf("%s\t",lista);
            }
            return 0;
            
        
        }else if(opcion==4){
            printf("***FESTIVIDADES***\n");
            printf(" 1.Navidad.\n 2.San Valentin.\n 3.Cumpleanyos.\n 4.Semana Santa.\n");
            printf("Introduzca el numero de la festividad deseada:\n");
            scanf("%d",&o1);
            
                if (o1==1){
                    printf("*Feliz Navidad!!*\n Mas tiempo con tu familia, menos pensando el menu\n\n");
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
                    printf("Feliz San Valentin a los enamorados del buen comer!!\n");
                    printf(" 1.Menu comida\n 2.Menu cena\n");
                    printf("Introduzca el numero del menu deseado:\n");
                    scanf("%d",&o2);
                        if (o2==1){
                            printf("Menu comida:\n\n");
                            printf(" ENTRANTES:\n Mousse de esparragos\n Crema de mejillones con manzana y cilantro\n\n PLATO PRINCIPAL:\n Zamburiñas picantitas con salsa de tomate y jengibre\n Pollo en reduccion de balsámico y verduras\n\n POSTRES:\n Sabayon con frutos rojos\n Tarta de crepes con fresas y nata \n");
                        }else if (o2==2){
                            printf("Menu cena:\n\n");
                            printf(" ENTRANTES:\n Ensalada de fresas, espinacas y queso de cabra con vinagreta de fresa\n Crujiente de queso y membrillo\n\n PLATO PRINCIPAL:\n Salmon al vapor con salsa de mostaza a la antigua y sidra\n Solomillo de cerdo en salsa de cerveza y miel con cebolla y castanyas\n\n POSTRES:\n Coulant de chocolate\n Pannacotta de Nutella y vainilla\n\n");
                        }
                }
                else if (o1==3){
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
    
                else if (o1==4){
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
        }else if(opcion==6){
            printf("Gracias por su visita.\nHasta pronto.\n");
            return 0;
        }
        
	printBanner();

    }
	else if (idioma=='e'||idioma=='E') {
        printf(" 1.What do you have in your fridge?\n 2.Categories\n 3.All recipes\n 4.Festivities\n 5.Desing your menu\n 6.EXIT\n");
        printf("Enter the number of the desired option:\n");
        scanf("%d",&opcion);
        
        if(opcion==1){
            printf("***WHAT DO YOU HAVE IN YOUR FRIDGE?***\n");
            printf(" 1.Eggs\n 2.Pasta\n 3.Rice\n 4.Potato\n 5.Vegetables\n");
            printf("Enter the number of the desired food:\n");
            scanf("%d",&o1);
            if (o1==1){
            
                frecet=fopen("recetas_huevo.txt","r");
                if (frecet==NULL) {
                    printf("Error, the file was not found.\n");
                    return 0;
                }
                while (fscanf(frecet,"%s", lista) != EOF){
                    printf("%s\t",lista);
                }
                return 0;
                 }else if(o1==2){
                     frecet=fopen("recetas_pasta.txt","r");
                     if (frecet==NULL) {
                         printf("Error, the file was not found.\n");
                         return 0;
                     }
                     while (fscanf(frecet,"%s", lista) != EOF){
                         printf("%s\t",lista);
                     }
                     return 0;
                    
            }else if(o1==3){

                frecet=fopen("recetas_arroz.txt","r");
                if (frecet==NULL) {
                    printf("Error, the file was not found.\n");
                    return 0;
                }
                while (fscanf(frecet,"%s", lista) != EOF){
                    printf("%s\t",lista);
                }
                return 0;
                
                
            }else if(o1==4){
               
                frecet=fopen("recetas_patata.txt","r");
                if (frecet==NULL) {
                    printf("Error, the file was not found.\n");
                    return 0;
                }
                while (fscanf(frecet,"%s", lista) != EOF){
                    printf("%s\t",lista);
                }
                return 0;
            }else if(o1==5){
             
                frecet=fopen("recetas_legumbre.txt","r");
                if (frecet==NULL) {
                    printf("Error, the file was not found.\n");
                    return 0;
                }
                while (fscanf(frecet,"%s", lista) != EOF){
                    printf("%s\t",lista);
                }
                return 0;
            }
			           
        }else if(opcion==2){
            printf("***CATEGORIES***\n");
            printf(" 1.Asian food\n 2.Fit food\n 3.Typical spanish\n 4.For mothers\n 5.Baked\n 6.Cold dishes\n");
            printf("Enter the number of the desired category:\n");
            scanf("%d",&o1);
            if (o1==1){
                printf(" Comida asiatica:\n\nNoodles salteados\nPan Naan\nArroz cubak\nSoja testurizada\nRollitos primavera\nPato frito\nTernera con bambu y setas\nSushi tradicional\n");
            }else if(o1==2){
                printf(" Comida fit:\n\nEnsalada de espinacas\nEnsalada de pasta con alubias\nTortilla de champinyones y espincacas\nBatatas rellenas\nCrepes de avena\nBrownie fit\nCuscus con verduras\n");
            }else if(o1==3){
                printf(" Tradicional espanyol:\n\nCocido tradicional\nLentejas jardineras\nPaella al gusto\nCallos a la madrilenya\nGazpacho andaluz\nRabo de toro\nPulpo a la gallega\nCochinillo segoviano\nMigas extremenyas\nCalamares a la romana\n Croquetas caseras");
            }else if(o1==4){
                printf(" Para mamis:\n\nEnsalada de espinacas\nFagitas vegetales\nLasanya de brocoli y salmon\nPorridge\nPa amd tomaquet\nInfusion de jengibre");
            }else if(o1==5){
                printf(" Al horno:\n\nCordero asado\nDorada a la sal\nPollo al horno\nVerduras salpimentadas\nCanelones de atun\nColiflor gratinada\nSalmon a la mandarina\nPimientos del piquillo\n");
            }else if(o1==6){
                printf(" Platos frios:\n\nTostas\nSanwich vegetal\nEmpanada de atun\nSalmorejo con jamon y huevo\nVichisoi\nHummus con zanahoria\nPoke Bowl hawaiano\n");
            }
        }
        
        else if(opcion==4){
            printf("***FESTIVITIES***\n");
            printf(" 1.Christmas.\n 2.Valentine's Day.\n 3.Birthday.\n 4.Easter week.\n");
            printf("Enter the number of the desired holiday:\n");
            scanf("%d",&o1);
            
                if (o1==1){
                    printf("*Merry Christmas!!*\n More time with your family, less thinking about the menu\n\n");
                    printf(" 1.Standard menu\n 2.Premium menu\n 3.Kids menu\n");
                    printf("Enter the number of the desired menu:\n");
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
                    printf("Feliz San Valentin a los enamorados del buen comer!!\n");
                    printf(" 1.Menu comida\n 2.Menu cena\n");
                    printf("Introduzca el numero del menu deseado:\n");
                    scanf("%d",&o2);
                        if (o2==1){
                            printf("Menu comida:\n\n");
                            printf(" ENTRANTES:\n Mousse de esparragos\n Crema de mejillones con manzana y cilantro\n\n PLATO PRINCIPAL:\n Zamburiñas picantitas con salsa de tomate y jengibre\n Pollo en reduccion de balsámico y verduras\n\n POSTRES:\n Sabayon con frutos rojos\n Tarta de crepes con fresas y nata \n");
                        }else if (o2==2){
                            printf("Menu cena:\n\n");
                            printf(" ENTRANTES:\n Ensalada de fresas, espinacas y queso de cabra con vinagreta de fresa\n Crujiente de queso y membrillo\n\n PLATO PRINCIPAL:\n Salmon al vapor con salsa de mostaza a la antigua y sidra\n Solomillo de cerdo en salsa de cerveza y miel con cebolla y castanyas\n\n POSTRES:\n Coulant de chocolate\n Pannacotta de Nutella y vainilla\n\n");
                        }
                }
                else if (o1==3){
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
    
                else if (o1==4){
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
        }else if(opcion==6){
            printf("Thanks for your visit.\nSee you soon.\n");
    }

    return 0;
}
}

void imprimirBanner(){
    printf("-------------------COCINANDO--CON--EDI-------------------\n");
    }
void printBanner(){
	printf("-------------------COOKING--WITH--EDI-------------------\n");
}
