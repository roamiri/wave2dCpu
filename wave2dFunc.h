#ifndef WAVE2DFUNC_H 
#define WAVE2DFUNC_H 

#include "utils.h"
#include "math.h"

void initialize_variables(REAL Lx,REAL Ly, int M, int N, REAL T)
{
	REAL dx = Lx/(double)M;
	REAL dy = Ly/(double)N;
	REAL h = dx;
	REAL c = sqrt(5.0);
	REAL dt = 0.89*h/c;
	const int tlength = 150; // T/dt;
}
#endif //WAVE2DFUNC_H 
