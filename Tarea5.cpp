/*Autor: Ricardo Jafet Granados Chable, Realizado: 07/04/2022
    Tarea 5 parcial 2 en C: Menu de opciones de funciones.
	*/
	
#include<stdio.h>
#include<string.h>

int main(){
	int opcion,longitud;
	char nombre[30];
	char nombre1[20];
	char nombre2[12];
    
	printf("----- Menu de opciones -----");
	printf("\n0. Salir");
	printf("\n1. Strlen");
	printf("\n2. Strncat");
	printf("\n3. Strcpy");
	printf("\n4. Strcmp");
	printf("\n5. Strncpy");
	printf("\n6. Strstr");
	printf("\nPorfavor seleccione una opcion: ");
	scanf("%d",&opcion);
	
	switch(opcion){
		case 0: printf("Hasta la proxima!");break; 
		
		case 1: printf("Introduce un nombre:");
		scanf("%c",&nombre);
		fgets(nombre, 30, stdin);
	    printf("Nombre: [%s]\n",nombre);
	    longitud=strlen(nombre);
	    printf("La longitud de nombre es: %d\n ", longitud);
	    break; 
	    
	    case 2: printf("Introduce una cadena:");
	    scanf("%c",&nombre1);
	    fgets(nombre1, 20, stdin);
	    printf("Cadena 1: [%s]",nombre1);
	    printf("\nIntroduce otra cadena:");
	    scanf("%c",&nombre2);
	    fgets(nombre2, 12, stdin);
	    printf("Cadena 2: [%s]",nombre2);
	    strncat(nombre1, nombre2, 12);
	    printf("\nCadena Final: [%s]",nombre1);
	    break;
	    
	    case 3: char cadena1[] = "Automovil";
	    char cadena2[10];
	    strcpy(cadena2,cadena1);
	    printf(cadena2);
        break;
        
        case 4: char palabra1[5] = "Hola";
        char palabra2[5] = "hola";
        if(strcmp(palabra1,palabra2)!=0){
        	printf("Ambas cadenas son iguales");
		}else{
			printf("Las cadenas son diferentes!!");
		}
		break;
	}
	
	return 0;
}
