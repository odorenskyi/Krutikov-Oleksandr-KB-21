#include <cmath>
#ifndef MODULESKRUTIKOV_H_INCLUDED
#define MODULESKRUTIKOV_H_INCLUDED
double s_calculation(double x, double y, double z)
{
    double S;
    S = sqrt(abs(pow(z, 2) * (y/2))) + ((M_PI * x + exp(abs(y))) / y);
    return S;
}


#endif // MODULESKRUTIKOV_H_INCLUDED
