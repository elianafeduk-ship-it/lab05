
#include "Functions.h"
#include <cmath>

double p(double x)
{
    return 1 + pow(sin(x), 2);
}

double F(double s)
{
    return (pow(p(1 + s * s), 2) +
        pow(p(1 - s * s * s), 3))
        / (1 + p(10 * s));
}