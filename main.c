#include "funciones.h"

void main(){
	unsigned long N;
	printf("Introduzca la cantidad de puntos a usar: ");
	scanf("%lu",&N);
	long double mi_pi = pi_area(N);
	printf("La aproximación de pi es %.15Lf\n",mi_pi);
}