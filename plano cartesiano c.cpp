#include <stdio.h> 
#include <math.h>


/*
realice un programa que permita calcular la distancia entre dos puntos y en que cuadrante se ubican cada uno
requisitos: saber el valor de los cuadrantes
*/
int main() {
double x1, x2, y1, y2, d, dx, dy;
	
printf("Ingrese el valor en X del primer punto: \n");
scanf("%lf", &x1);

printf("Ingrese el valor en Y del primer punto: \n");
scanf("%lf", &y1);

printf("Ingrese el valor en X del segundo punto: \n");
scanf("%lf", &x2);

printf("Ingrese el valor en Y del segundo punto: \n");
scanf("%lf", &y2);

dx = (x2-x1);
dy = (y2-y1);
d = sqrt(pow(dx,2)+pow(dy,2));

printf("La distancia entre ambos puntos es: %lf \n", d);

if(x1>0 && y1>0){
	printf("El punto 1 esta en el cuadrante I. (+,+) \n");
}
else if(x1<0 && y1>0){
	printf("El punto 1 esta en el cuadrante II. (-,+)");
}
else if(x1<0 && y1<0){
	printf("El punto 1 esta en el cuadrante III. (-,-)");
}
else if (x1>=0 && y1<0){
	printf("El punto 1 esta en el cuadrante IV. (+,-)");
}
else{
	printf("El punto 1 no pertenece a ningun cuadrante. \n");
}

if(x2>0 && y2>0){
	printf("El punto 2 esta en el cuadrante I. (+,+) \n");
}
else if(x2<0 && y2>0){
	printf("El punto 2 esta en el cuadrante II. (-,+)");
}
else if(x2<0 && y2<0){
	printf("El punto 2 esta en el cuadrante III. (-,-)");
}
else if (x2>=0 && y2<0){
	printf("El punto 2 esta en el cuadrante IV. (+,-)");
}
else{
	printf("El punto 2 no pertenece a ningun cuadrante. \n");
}
return 0;
}
