#include <stdio.h> 
#include <stdlib.h>
#define pi 3.1415926535
int main(){
	double radio, perimetro, area;
	char opc='s';
	do{
		system("cls");
	printf("Ingrese el radio del circulo: ");
	scanf("%lf",&radio);
	if(radio <= 0){
		printf("Radio invalido, no es posible calcular. \n");
	}
	else{
		perimetro = 2*radio*pi;
		area=(radio*radio)*pi;
		printf("El perimetro calculado es: %.2f \n",perimetro);
		printf("El area calculada es: %.2f \n",area);
	}
	printf("Desea reiniciar la ejecucion? (s/n): ");
	scanf(" %c",&opc);
	}while (opc=='s' || opc=='S');

	return 0;
}