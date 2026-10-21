#include <stdio.h>

int main(){
	int original, invertido, unidad, decena, centena, unidad_mil, suma, sum_digitos;
	
	printf("Digite un numero de 4 digitos: ");
	scanf(" %d", &original);
	
	if(original>999 && original<9999){
		unidad = original%10;
		decena = (original/10)%10;
		centena = (original/100)%10;
		unidad_mil = original/1000;
		suma = unidad+decena+centena+unidad_mil;
		invertido =(unidad*1000)+(decena*100)+(centena*10)+(unidad_mil);
		printf("Numero original: %d \n", original );
		printf("Digitos: %d %d %d %d \n", unidad_mil, centena, decena, unidad);
		sum_digitos = (unidad_mil) + (centena) + (decena) + (unidad);
		printf("Suma de los digitos: %d \n", sum_digitos);
		printf("Numeros invertidos: %d", invertido); 
		
	}
	else{
		printf("Numero invalido, digite otro.");
	}
	
}
