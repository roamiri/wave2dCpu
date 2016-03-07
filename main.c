#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "utils.h"
#include <unistd.h>
#include <ctype.h>
#include "wave2dFunc.h"

int main(int argc, char **argv) 
{
// 	if(argc < 5)
// 	{
// 		printf("inputs arguments should define Length in X[LX] and Y[LY] direction and number of points in X[M] and Y[M] directions as ./exe LX LY M N ");
// 		return -1;
// 	}
	
	// Square dimensions, points and Total Time
	REAL Lx = 4.0;
	REAL Ly = 2.0;
	REAL T = 6.0;
    int M = 40;
	int N = 20;
	
	int c;
	opterr = 0;
	
	while ((c = getopt (argc, argv, "XYMNT:")) != -1)
	{
		switch (c)
			{
			case 'X':
				Lx = atof(argv[optind]);
				break;
			
			case 'Y':
				Ly = atof(argv[optind]);
				break;
			
			case 'M':
				M = atoi(argv[optind]);
				break;

			case 'N':
				N = atoi(argv[optind]);
				break;

			case 'T':
				T = atof(argv[optind-1]);
				break;
			
			case 'h':
			if (isprint (optopt))
				fprintf (stderr, "Unknown option `-%c'.\n", optopt);
			else
				fprintf (stderr,"Unknown option character `\\x%x'.\n",optopt);
			return 1;
			default:
			abort ();
			}
	}
	printf ("LX = %f, LY = %f, M = %d, N = %d, T = %f\n", Lx, Ly, M, N, T);
	
	//Initializing dummy needed variables 
	
	REAL dx = Lx/(double)M;
	REAL dy = Ly/(double)N;
	REAL h = dx;
	REAL cc = (REAL)sqrt(5.0);
	REAL dt = 0.89*h/cc;
	const int tlength = 150; // T/dt;
	
	double dt2 = dt*dt;
	double c2 = cc*cc;
	double h2 = h*h;
	// endof Initialization
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
