/*
ESCRIBA UN PROGRAMA QUE CALCULE EL PROMEDIO DE CUATRO NOTAS INGRESADAS POR EL USUARIO.
DIGA CUAL ES LA NOTA MAYOR Y CUAL ES LA NOTA MENOR
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
	double nota1, nota2, nota3, sumnotas, nota4,promfinal;
	char opc='s';
	do{
		system("cls");
		printf("Ingrese la primera nota: ");
		scanf("%lf",&nota1);
		printf("Ingrese la segunda nota: ");
		scanf("%lf",&nota2);
		printf("Ingrese la tercera nota: ");
		scanf("%lf",&nota3);
		printf("Ingrese la cuarta nota: ");
		scanf("%lf",&nota4);
		sumnotas = (nota1+nota2+nota3+nota4);
		if(sumnotas<=0){
			printf("Notas invalidas, no es posible sacar promedio. \n");
		}
		else{
			promfinal = sumnotas/4;
			printf("Tu promedio final es: %f \n",promfinal);
		}
	printf("Desea reiniciar la ejecucion? (s/n): ");
	scanf(" %c",&opc);
	}while (opc=='s' || opc=='S');
return 0;
}
