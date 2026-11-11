/* 
una empresa de agua cobra un cargo fijo de 5 dolares mas el consumo por tramos
los primeros 15 metros cubicos los cobra a 1 dolar
de 16 a 30 metros cubicos a 1.5 dolares
y lo que pase de 30 metros cubicos a 2 dolares
escriba un programa que lea el consumo del mes en un rango de 0 a 1000 metros cubicos
y muestre el desgloce por tramo y el total a pagar
*/

#include <stdio.h>
#include <conio.h>
int main(){
	float consumo = 0;
	int cargoFijo = 5;
	float totalPagar = 0;
	float totalTramo = 0;
	char opc;
	
	do{
		do{
		printf("Cuantos metros cubicos consumio en el mes?\n");
		scanf("%f", &consumo);
		if(consumo <0){
			printf("Valor invalido, no puede ingresar numeros negativos. \n");
		}
		if(consumo >1000){
			printf("Valor invalido, no puede ingresar numeros mayores a 1000 \n");
		}
		
	}while(consumo < 0 || consumo > 1000);
	
	if(consumo>0 && consumo<=15){
		totalTramo = consumo * 1;
	}
	else if(consumo >=16 && consumo<=30){
		totalTramo = consumo * 1.5;
	}
	else if(consumo >30 && consumo<=1000){
		totalTramo = consumo*3;
	}

	printf("Cargo fijo: 5$ \n");
	printf("Cargo por consumo de: %.2f metros cubicos \n", consumo);
	printf("Total consumo por tramo: %.2f $ \n", totalTramo);
	totalPagar = totalTramo + cargoFijo;
	printf("El total a pagar es: %.2f $ \n", totalPagar);
	printf("Desea ejecutar de nuevo el programa? (s/n) \n");
	opc = getch();
	
	}while(opc == 's' || opc == 'S');
	
	

	
	
	
	
return 0;
}