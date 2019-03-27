#include "funciones.h"

double calcula_pi(unsigned long N){
	double paso = 1/(double) N, y1 = 1, y2, d = 0;
	for (double x2 = paso; x2 <= 1; x2 += paso){
		y2 = sqrt(1-x2*x2);
		d += sqrt(paso*paso + (y2 - y1)*(y2 - y1));
		y1 = y2;
	}
	return 2*d;
}

long double pi_area(unsigned long N){
	long double delta_x = 1/(long double)N, y1 = 0, area = 0, y2;
	for (long double x2 = delta_x; x2 <= 1; x2 += delta_x){
		y2 = sqrt(1-x2*x2);
		area += 0.5*delta_x*(y1+y2);
		y1 = y2;
	}
	return 4*area;
}
