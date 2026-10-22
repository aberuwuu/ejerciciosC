/*
realice un programa que permita operar con dos valores simulando una calculadora. 

Las operaciones disponibles deben ser: suma, resta, multiplicacion, division, potencia y raiz cuadrada.

Valide la entrada para casos como: division entre 0 y raiz de un numero negativo.

El programa debe permitir realizar mas de una operacion si el usuario lo desea.
*/

#include <stdio.h>
#include <math.h>
#include <ctype.h> 
#include <cstdlib>


int main(){
int opc;
char controlBucle;
float num1, num2, resultado;




do{
	printf("Que desea hacer? \n");
printf("Sumar (1)\n");
printf("Restar (2)\n");
printf("Multiplicar(3) \n");
printf("Dividir (4) \n");
printf("Potencia (solo al cuadrado) (5) \n");
printf("Raiz cuadrada (6) \n");
printf("Salir (7) \n");
scanf(" %d", &opc);



switch (opc) {
    case 1:
    	printf("SUMA: \n");
        printf("Digite el primer numero: \n");
        scanf(" %f", &num1);
        printf("Digite el segundo numero: \n");
        scanf(" %f", &num2);
        resultado = num1 + num2;
        printf("El resultado de tu suma es: %.2f \n", resultado);
        break;
    case 2:
    	printf("RESTA: \n");
        printf("Digite el primer numero: \n");
        scanf(" %f", &num1);
        printf("Digite el segundo numero: \n");
        scanf(" %f", &num2);
        resultado = num1 - num2;
        printf("El resultado de tu resta es: %.2f \n", resultado);
        break;
    case 3:
    	printf("MULTIPLICACION: \n");
        printf("Digite el primer numero: \n");
        scanf(" %f", &num1);
        printf("Digite el segundo numero: \n");
        scanf(" %f", &num2);
        resultado = num1 * num2;
        printf("El resultado de tu multiplicacion es: %.2f \n", resultado);
        break;
    case 4:
    	do{
		
    	printf("DIVISION: \n");
    	printf("Digite el primer numero: \n");
        scanf(" %f", &num1);
        printf("Digite el segundo numero: \n");
        scanf(" %f", &num2);
        if(num2 == 0){
        	printf("Division invalida, no se puede dividir entre 0 \n");
		}
		else{
			resultado = num1 / num2;
        	printf("El resultado de tu division es: %.2f \n", resultado);
		}
		
		}while(num2==0);
        break;
    case 5:
    	printf("POTENCIA (AL CUADRADO): \n");
    	printf("Digite la base: \n");
        scanf(" %f", &num1);
        resultado = num1 * num1;
        printf("El resultado de tu potencia es: %.2f \n", resultado);
        break;
    case 6:
    	printf("RAIZ CUADRADA: \n");
    	printf("Digite el radicando: \n");
        scanf(" %f", &num1);
        resultado = sqrt(num1);
        printf("La raiz cuadrada de %.2f es: %.2f \n" ,num1,resultado);
        break;
    case 7: 
    	printf("Gracias por usar este programa.");
    	break;
    
    default:
        printf("Opcion invalida, por favor digite un valor correcto.");
}
printf("Desea continuar usando la calculadora? (S / N): ");
scanf(" %c", &controlBucle);
system("cls");
controlBucle = toupper(controlBucle);

	
}while (controlBucle == 'S');


}

