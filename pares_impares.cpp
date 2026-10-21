#include <stdio.h> 
#include <stdlib.h>

int main(){
	int contadorPares = 0;
	int contadorImpares= 0;
	int n= 0;
	printf("Digite un numero: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
			if(i%2==0){
			printf("Numero par encontrado: %d \n", i);
			contadorPares++;
		
		}
		else{
			printf("Numero impar encontrado: %d \n", i);
			contadorImpares++;
		}
	}
	printf("La cantidad de numeros pares encontrados fue: %d \n", contadorPares);
	printf("La cantidad de numeros impares encontrados fue: %d \n", contadorImpares);
	
}
