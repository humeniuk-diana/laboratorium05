#include <iostream>
#include "math.h"
using namespace std;
int main()
{
double x, y, z, b;
printf ("x=");
scanf("%lf", &x);
printf ("y=");
scanf("%lf", &y);
printf ("z=");
scanf("%lf", &z);
b = (y * pow(x, 2) - z)/(pow (M_E, (y * x)) - 1)+(cbrt( 5 -pow(y, 2)))/(fabs(x - y)/sqrt(2*x));
printf("b= %lf\n", b);
}
