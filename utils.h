#ifndef UTILS_H
#define UTILS_H


// #define PRECISION 0

#ifdef USE_PRECISION 
    #define REAL double
    #define INTEGER unsigned long int //unsigned int
    #define MACHINE_EPSILON DBL_EPSILON
    #define MAX_INT ULONG_MAX //UINT_MAX 
#else
    #define REAL float
    #define INTEGER unsigned int
    #define MACHINE_EPSILON FLT_EPSILON
    #define MAX_INT UINT_MAX
#endif


#endif //UTILS_H