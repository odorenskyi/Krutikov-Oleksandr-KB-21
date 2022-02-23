#include <cmath>
double s_calculation(double x, double y, double z)
{
    double S;
    S = sqrt(abs(pow(z, 2) * (y/2))) + ((M_PI * x + exp(abs(y))) / y);
    return S;
}
