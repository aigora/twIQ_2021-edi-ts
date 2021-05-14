#include<stdio.h>
#include <string.h>

void imprimirBanner();

void printBanner();

void imprimirArroz();
void imprimirPasta();

struct ficha{
    char nombre[100];
    char contrasennya[100];
    int registro; 
};

int main (){
    char idioma, lista[100000];
    struct ficha usuario[500];
    int inicio,numeroUsuarios=0;
    int numeracion=0,i=0,j=0,a,b,n=0,longitud[200];
    int z=0;
    int opcion, o1, o2;
    FILE * frecet;
    FILE * fichero;
    
    
    printf("Elija su idioma//Choose your languaje\n");
    printf("Escoja:\n's' para Espagnol\n'e' for English\n");
    
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
        
        //Vamos a abrir el fichero usuarios para guardar los datos de la estructura en él
            
            fichero=fopen("usuarios.txt","r");
            if(fichero==NULL){ //comprobamos que el fichero con el que vamos a trabajar funciona
                printf("Error en la apertura de ficheros.\n");
                return 0;
            }
            
            //Vamos a ir guardando los usuarios que se vayan registrando en el fichero
            
            while(fscanf(fichero,"%d %s %s", &usuario[i].registro,usuario[i].nombre,usuario[i].contrasennya)!=EOF){
                numeroUsuarios++;
                i++;
            }
            fclose(fichero);
            
            printf("1.Registrarse\n2.Iniciar sesion\n");
            scanf("%d",&inicio);
            fflush(stdin);
            switch(inicio){
                
        //Vamos a introducir un nuevo usuario:
                    
                case 1:
                    usuario[i].registro=i+1;
                    
                    //pedimos nombre y contraseña
                    
                    printf("Introduzca su nombre de usuario:");
                    fflush(stdin);
                    gets(usuario[i].nombre);
                    printf("Introduzca su contrasenya:");
                    fflush(stdin);
                    gets(usuario[i].contrasennya);
                    
                    //vamos a comprobar que no coincida con el nombre de ninguno de los usuarios previamente registrados. En caso de que no coincida, este se añadira al fichero y se quedará registrada la posición en la que se añadio de forma que el siguiente usuario en registrarse quedara añadido a continuacion.
                    
                    for(a=0;a<numeroUsuarios;a++){ //el numero de usuarios ira incrementando segun incremente el numero de registros, de forma que cada vez que haya un nuevo resgistro se compare con los ya existentes usuarios
                        
                        for(j=0;j<i;j++){ //en este caso estaremos comparando el nuevo usuario con los ya existentes
                            if(strcmp(usuario[i].nombre,usuario[j].nombre)==0){
                                printf("El nombre de usuario escogido ya existe. Por favor elija otro.");
                                fflush(stdin);
                                gets(usuario[i].nombre);
                            }
                        }
                    }
                    do{ //pediremos la contrasennya de forma que tenga que contener entre 6 y 14 caracteres
                        longitud[i]=strlen(usuario[i].contrasennya);
                        if((longitud[i]<6)||(longitud[i]>14)){
                            printf("ERROR, la contrasennya introducida no es valida, debe contener entre 6 y 14 caracteres.\n"); //si la contrasennya no cumple los requisitos la pediremos de nuevo
                            printf("Contrasennya:");
                            fflush(stdin);
                            gets(usuario[i].contrasennya);
                            longitud[i]=strlen(usuario[i].contrasennya);
                    	}
                    }while((longitud[i]<6)||(longitud[i]>14));
                      
                     
                    fichero=fopen("usuarios.txt","w");
                    if(fichero==NULL){ //comprobamos que el fichero que estamos abriendo funciona
                        printf("Error\n");
                        return 0;
                    }
                    for(n=0;n<=i;n++){
                        fprintf(fichero,"%d\n %s\n %s\n",usuario[n].registro,usuario[n].nombre,usuario[n].contrasennya);
                    }
                    fclose(fichero);
        
                    b=i;
                       
                break;
                    
        //Un usuario ya registrado inicia sesion
                    
                case 2:
                
                    do{ //pedimos el nombre y la contrasennya y comprobamos que ambos coincidan con un usuario ya registrado anteriormente (este estara guardado en el fichero)
                        printf("Nombre de usuario:");
                        fflush(stdin);
                        gets(usuario[i].nombre);
                        printf("Contrasennya:");
                        fflush(stdin);
                        gets(usuario[i].contrasennya);
                        
                        for(b=0;b<numeroUsuarios;b++){
                            if((strcmp(usuario[i].nombre,usuario[b].nombre)==0)&&(strcmp(usuario[i].contrasennya,usuario[b].contrasennya)==0)){
                        		numeracion++;
                            	break;
                            }
                        }
                        if(numeracion==0){ //en caso de que no coincida con un usuario registrado no le dejara continuar
                            printf("El nombre de usuario o la contrasennya introducidos ha sido incorrecto, por favor introduzcalos de nuevo.\n");
                        }
                	}while(numeracion==0);
                    
            	break;
            	}


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
                
            }
			else if(o1==2){
                imprimirPasta();
     
            }
			else if(o1==3){
                imprimirArroz();
                /*
                frecet=fopen("recetas_arroz.txt","r");
                 if (frecet==NULL) {
                     printf("Error, el fichero no se ha encontrado.\n");
                     return 0;
                 }
                 while (fscanf(frecet,"%s", lista) != EOF){
                     printf("%s\t",lista);
                 }
                 return 0;
                 */
            }
			else if(o1==4){
               
                frecet=fopen("recetas_patata.txt","r");
                if (frecet==NULL) {
                    printf("Error, el fichero no se ha encontrado.\n");
                    return 0;
                }
                while (fscanf(frecet,"%s", lista) != EOF){
                    printf("%s\t",lista);
                }
                return 0;                
            }
			else if(o1==5){
             
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
        }
		
		else if(opcion==2){
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
            }
			else if(o1==2){
              
                frecet=fopen("recetas_fit.txt","r");
                if (frecet==NULL) {
                    printf("Error, el fichero no se ha encontrado.\n");
                    return 0;
                }
                while (fscanf(frecet,"%s", lista) != EOF){
                    printf("%s\t",lista);
                }
                return 0;
                
            }
			else if(o1==3){
               
                frecet=fopen("recetas_espanyol.txt","r");
                if (frecet==NULL) {
                    printf("Error, el fichero no se ha encontrado.\n");
                    return 0;
                }
                while (fscanf(frecet,"%s", lista) != EOF){
                    printf("%s\t",lista);
                }
                return 0;
                
            }
			else if(o1==4){
                
                frecet=fopen("recetas_mamis.txt","r");
                if (frecet==NULL) {
                    printf("Error, el fichero no se ha encontrado.\n");
                    return 0;
                }
                while (fscanf(frecet,"%s", lista) != EOF){
                    printf("%s\t",lista);
                }
                return 0;
			}
			else if(o1==5){
               
                frecet=fopen("recetas_horno.txt","r");
                if (frecet==NULL) {
                    printf("Error, el fichero no se ha encontrado.\n");
                    return 0;
                }
                while (fscanf(frecet,"%s", lista) != EOF){
                    printf("%s\t",lista);
                }
                return 0;
                
            }
			else if(o1==6){
                
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
        }
		
		else if(opcion==3){
            frecet=fopen("recetas.txt","r");
            if (frecet==NULL) {
                printf("Error, el fichero no se ha encontrado.\n");
                return 0;
            }
            while (fscanf(frecet,"%s", lista) != EOF){
                printf("%s\t",lista);
            }
            return 0;
        }
		
		else if(opcion==4){
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
                    }
					else if (o2==2){
                        printf("Menu premium:\n\n");
                        printf("*ENTRANTES:*\n Sticktartar\n Coquinas en salsa marinera\n Jamon 5jotas\n Salmon gravelax\n\n*PRIMER PLATO:*\n Risoto con trufas\n Bisque de langostinos\n Crema de carabineros\n\n*SEGUNDO PLATO:*\n Cordero asado a las finas hierbas\n Merluza en salsa verde\n Lasanya de verduras\n\n*POSTRES:*\n Mousse de crema de orujo\n Trufas con helado flambeado\n Filloas\n\n");
                    }
					else if (o2==3){
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
                    }
					else if (o2==2){
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
                    }
					else if (o2==2){
                        printf("Algo mas ligth:\n\n");
                        printf(" Pastel de zanahoria con nueces\n Pastelitos de queso\n Tarta de manzana\n Tarta de queso\n");
                    }
					else if(o2==3){
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
                    }
					else if (o2==2){
                        printf("Continuamos con los primeros:\n\n");
                        printf(" Potaje de vigilia\n Garbanzos con espinacas\n Patatas viudas\n Sopa de ajo\n");
                    }
					else if(o2==3){
                        printf("Segundos platos:\n\n");
                        printf(" Cordero asado\n Hornazo\n Pava con pelotas\n Merluza a la cazuela\n");
                    }
					else if(o2==4){
                        printf("Postres:\n\n");
                        printf(" Torrijas\n Leche frita\n Arroz con leche\n Bunyuelos de viento\n");
                    }
                }
        }
        
		else if(opcion==6){
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
            }
			else if(o1==3){

                frecet=fopen("recetas_arroz.txt","r");
                if (frecet==NULL) {
                    printf("Error, the file was not found.\n");
                    return 0;
                }
                while (fscanf(frecet,"%s", lista) != EOF){
                    printf("%s\t",lista);
                }
                return 0;   
            }
			else if(o1==4){
               
                frecet=fopen("recetas_patata.txt","r");
                if (frecet==NULL) {
                    printf("Error, the file was not found.\n");
                    return 0;
                }
                while (fscanf(frecet,"%s", lista) != EOF){
                    printf("%s\t",lista);
                }
                return 0;
            }
			else if(o1==5){
             
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
                       
        }
		else if(opcion==2){
		        printf("***CATEGORIES***\n");
		        printf(" 1.Asian food\n 2.Fit food\n 3.Typical spanish\n 4.For mothers\n 5.Baked\n 6.Cold dishes\n");
		        printf("Enter the number of the desired category:\n");
		        scanf("%d",&o1);
		        
		        if (o1==1){
		            printf(" Comida asiatica:\n\nNoodles salteados\nPan Naan\nArroz cubak\nSoja testurizada\nRollitos primavera\nPato frito\nTernera con bambu y setas\nSushi tradicional\n");
		        }
				else if(o1==2){
		            printf(" Comida fit:\n\nEnsalada de espinacas\nEnsalada de pasta con alubias\nTortilla de champinyones y espincacas\nBatatas rellenas\nCrepes de avena\nBrownie fit\nCuscus con verduras\n");
		        }
				else if(o1==3){
		            printf(" Tradicional espanyol:\n\nCocido tradicional\nLentejas jardineras\nPaella al gusto\nCallos a la madrilenya\nGazpacho andaluz\nRabo de toro\nPulpo a la gallega\nCochinillo segoviano\nMigas extremenyas\nCalamares a la romana\n Croquetas caseras");
		        }
				else if(o1==4){
		            printf(" Para mamis:\n\nEnsalada de espinacas\nFagitas vegetales\nLasanya de brocoli y salmon\nPorridge\nPa amd tomaquet\nInfusion de jengibre");
		        }
				else if(o1==5){
		            printf(" Al horno:\n\nCordero asado\nDorada a la sal\nPollo al horno\nVerduras salpimentadas\nCanelones de atun\nColiflor gratinada\nSalmon a la mandarina\nPimientos del piquillo\n");
		        }
				else if(o1==6){
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
	                }
					else if (o2==2){
	                    printf("Menu premium:\n\n");
	                    printf("*ENTRANTES:*\n Sticktartar\n Coquinas en salsa marinera\n Jamon 5jotas\n Salmon gravelax\n\n*PRIMER PLATO:*\n Risoto con trufas\n Bisque de langostinos\n Crema de carabineros\n\n*SEGUNDO PLATO:*\n Cordero asado a las finas hierbas\n Merluza en salsa verde\n Lasanya de verduras\n\n*POSTRES:*\n Mousse de crema de orujo\n Trufas con helado flambeado\n Filloas\n\n");
	                }
					else if (o2==3){
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
                        printf(" ENTRANTES:\n Mousse de esparragos\n Crema de mejillones con manzana y cilantro\n\n PLATO PRINCIPAL:\n Zamburinyas picantitas con salsa de tomate y jengibre\n Pollo en reduccion de balsámico y verduras\n\n POSTRES:\n Sabayon con frutos rojos\n Tarta de crepes con fresas y nata \n");
                    }
					else if (o2==2){
                        printf("Menu cena:\n\n");
                        printf(" ENTRANTES:\n Ensalada de fresas, espinacas y queso de cabra con vinagreta de fresa\n Crujiente de queso y membrillo\n\n PLATO PRINCIPAL:\n Salmon al vapor con salsa de mostaza a la antigua y sidra\n Solomillo de cerdo en salsa de cerveza y miel con cebolla y castanyas\n\n POSTRES:\n Coulant de chocolate\n Pannacotta de Nutella y vainilla\n\n");
                    }
                }
                
                else if (o1==3){
	                printf("Feliz cumpleanyos!!\nA soplar las velas.\n");
	                printf(" 1.Amante del chocolate\n 2.Algo mas ligth\n 3.Prefiero salado\n");
	                printf("Introduzca el numero del menu deseado:\n");
	                scanf("%d",&o2);
	                
                    if (o2==1){
                        printf("Amante del chocolate:\n\n");
                        printf(" Tarta de tres chocolates\n Tarta de galletas con crema de chocolate\n Brownie de chocolate con nueces\n");
                    }
					else if (o2==2){
                        printf("Algo mas ligth:\n\n");
                        printf(" Pastel de zanahoria con nueces\n Pastelitos de queso\n Tarta de manzana\n Tarta de queso\n");
                    }
					else if(o2==3){
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
                    }
					else if (o2==2){
                        printf("Continuamos con los primeros:\n\n");
                        printf(" Potaje de vigilia\n Garbanzos con espinacas\n Patatas viudas\n Sopa de ajo\n");
                    }
					else if(o2==3){
                        printf("Segundos platos:\n\n");
                        printf(" Cordero asado\n Hornazo\n Pava con pelotas\n Merluza a la cazuela\n");
                    }
					else if(o2==4){
                        printf("Postres:\n\n");
                        printf(" Torrijas\n Leche frita\n Arroz con leche\n Bunyuelos de viento\n");
                    }
                }
        }
		
		else if(opcion==6){
            printf("Thanks for your visit.\nSee you soon.\n");
    	}
	}

    return 0;
}


void imprimirArroz(){
    printf("*RECETAS CON ARROZ*\n\n-Risotto milanesa:\nPica finamente el diente de ajo y la cebolla. Echa un chorrito de aceite en la sarten y annyade el ajo; cocinalo hasta que tenga color. A continuacion echa la cebolla picada con unas pizcas de sal, y dejala hasta que este transparente. Pon a calentar el caldo en un cazo, debe estar bien caliente al annyadirlo en el arroz. Mientras tanto tuesta el azafran. Pon el “azafran tostado” en un mortero y machacalo hasta que quede en polvo, entonces agrega un cazo de caldo bien caliente y remueve hasta que se disuelva. Cuando la cebolla este cocinada echa el arroz, remuevelo unos 2 o 3 minutos a fuego medio-bajo. A continuacion echa un chorrito de vino blanco de buena calidad y mantenlo hasta que se seque por completo.La base esta lista. Ahora agrega un cazo de caldo y remueve frecuentemente con una cuchara de madera hasta que casi se seque. Repite el proceso. En 16 minutos deberias probarlo para ver en que punto se encuentra, la cocción completa puede llevarte 17-20minutos. Cuando este a tu gusto retiralo del fuego, annyade la mantequilla y el queso rallado y remueve hasta que se disuelva por completo.\n\n-Arroz al curry:\nLavamos el arroz en un colador para retirar su almidon. Pelamos la cebolla y el ajo y los picamos bien. En una sarten grande con dos cucharadas de aceite de oliva virgen extra, doramos la cebolla y cuando este pochada, annyadimos el ajo, el jengibre y las especias. Mientras tanto, habremos puesto a calentar el caldo de verduras en un cazo, reservandolo en caliente. Annyadimos el arroz a la sarten, y lo sofreimos con el condimento que hemos elaborado un par de minutos, hasta que tome un color tostado.  Agregamos entonces el caldo a la sarten, removiendo ligeramente y dejamos cocer durante unos 10 minutos o hasta que el caldo se haya consumido.  Opcionalmente se le pueden annyadir aromas adicionales durante la coccion del arroz.\n\n-Arroz tres delicias:\nCocemos el arroz en abundante agua y sal, durante 18 min lo enfriamos y lo escurrimos. Pelar y picar puerro, ajos y langostinos. Batir 4 huevos con un poco de sal. Cuajar la mezcla en una sarten. Sofreir en la sarten el puerro y los ajos picados hasta que esten dorados. Incorporar los guisantes y los langostinos cocidos. Annyadir el arroz, la salsa de soja y la tortilla cortada en dados pequeños. Mezclar bien y rectificar de sal y pimienta.\n\n-Ensalada de arroz:\nPonemos en un cazo agua a calentar, cuando rompa a hervir annyadimos el arroz y una pizca de sal. Una vez este cocido el arroz, escurrimos y enjuagamos bajo el agua. Luego, annyadimos una cucharadita de aceite de oliva y mezclamos bien. Agregamos atun escurrido y maiz. Incorporamos tambien palitos de cangrejo y huevo duro a trocitos. Llevamos a la nevera durante toda la noche. Al dia siguiente, antes de servir la ensalada de arroz, decoramos con rodajas de aceitunas y pimientos del piquillo.\n\nPaella al gusto:\nAbrir los mejillones en la paella con un chorreon de aceite, cuando esten los retiramos a un plato. Trocear el pollo y sofreirlo en la paellera. Dorar 5 minutos a fuego medio – fuerte. Cuando este crujiente, retirar y reservar. Picar la cebolla y el ajo. Rehogar en el mismo aceite de la paellera. Cuando este cocinada la cebolla, trocear el chorizo y las judias verdes y annyadirlos. Rallar el tomate y lo annyadimos al sofrito junto a una cucharadita de pimenton dulce y unas hebras de azafran. Annyadir el arroz y el pollo y sofreir a fuego vivo. Cubrir la paella con agua (el doble y un poco mas de agua que de arroz). Sazonar y cocinar a fuego fuerte durante 10 minutos. Bajar el fuego y annyadir los mejillones, los langostinos y el pimiento asado. Cocinar a fuego medio durante 8 minutos. Apartar la paella y tapar con un paño limpio y seco dejandola reposar durante 5 minutos.\n");
}

void imprimirPasta(){
	printf("*RECETAS CON PASTA**\n\n-Ensalada de pasta:\nPon a hervir agua en una cacerola y cocina la pasta con una pizca de sal. Cuando este lista, escurrela y dejala enfriar. Corta un tomate en cuuadraditos muy peque�os y escurre el atun y el maiz de sus respectivas latas. En un recipiente mezcla la pasta con el resto de ingredientes y alinyala al gusto.\n\n-Pasta al pesto:\nPon a calentar una cazuela con agua, un poco de sal y un chorrito de aceite. Cuando hierva el agua anyade la pasta y deja cocer durante los minutos indicados en el paquete. Despues, apaga el fuego, escurre la pasta en el fregadero y metela en la tartera. Para hacer la salsa al pesto, en el vaso de la batidora pon un punyado de pinyones y anyade aceite de oliva hasta sumergirlos, unos trozos de queso parmesano, unas hojas de albahaca fresca, un diente de ajo y salpimenta con un poco de sal. Bate la mezcla hasta conseguir una pasta verde homogenea y vierte por encima de la pasta.\n\n-Aguacates rellenos de paste y atun:\nEn una olla echa agua y cocina la pasta el tiempo que indican sus instrucciones. Una vez este cocida, escurrela y deja que se enfrie. Escurre el atun de la lata y reservalo. Vacia los aguacates y corta su carne en trocitos. Tambien pica la cebollla en trozos muy pequenyos. Mezcla en un bowl la pasta, el atun, los trozos de aguacate y la cebolla picada. En otro cuenco mezcla un poco de aceite de oliva con jugo de limon y un poco de sal y pimienta. Revuelve y vierte el alinyo sobre la ensalada. Rellena los aguacates con el contenido de la ensalada que acabas de preparar.\n\n-Mac&Cheese:\nPrecalentar el horno a 180 �C con calor arriba y abajo. Cocer los macarrones en abundante agua con sal un par de minutos menos que el tiempo indicado por el fabricante. Escurrir y reservar. Rallar el queso. Calentar en una sarten el aceite de oliva. Anyadir la harina, mezclar bien y dejar que se tueste ligeramente sin llegar a coger color. Agregar la leche poco a poco, integrandola bien con la harina gracias a unas varilllas. Cocinar la bechamel a fuego lento hasta integrar toda la leche. Apartar la sarten del fuego y anyadir cucharada a cucharada dos terceras partes del queso a la bechamel. Revolver hasta que se funda completamente antes de seguir echando mas. Probar el punto de sal (el queso suele ser salado) y si hace falta, poner un poco. Agregar la mostaza en polvo y pimienta molida. Mezclar los macarrones cocidos con la salsa de queso y echar todo en una fuente resistente al calor. Mezclar el queso rallado sobrante con el pan rallado, pimienta molida y tomillo y oregano al gusto. Repartir sobre los macarrones. Meter la fuente en el horno y cocinar en la parte media del horno durante 10 minutos. Si pasado ese tiempo la superficie no esta tostada, encender el grill y esperar a que coja color.\n\n-Ramen casero:\nPonemos a hervir suave 1 litro de caldo bajo en sal. Con el de pollo queda genial, pero puedes usar de verduras o de puchero, que lleva de todo. Con todos queda bien. Anyadimos 6 cucharadas soperas de salsa de soja. Parece mucho pero la cantidad esta bien, y por eso hay que usar caldo bajo en sal. Anyadimos 2 cucharadas soperas de mirin. Si no tenemos mirin podemos usar vinagre blanco o vino blanco, da un poco igual porque solo da un toque. Anyadimos 2 cucharadas pequenyas de miso. Si no tenemos miso nos podemos saltar este paso, pero le da un toque asiatico al ramen. Anyadimos 1/2 cucharada pequenya de jengibre en polvo. Este paso tambien es opcional, y solo si nos gusta el jengibre. Despues coceremos los fideos de ramen y los mezclaremos con la salsa que hemos preparado.\n");
}

void imprimirBanner(){
    printf("-------------------COCINANDO--CON--EDI-------------------\n");
    }
    
void printBanner(){
    printf("-------------------COOKING--WITH--EDI-------------------\n");
}

