#include <stdio.h>
#include <math.h>

int main()
{
    float a = 1000, b = 0.0001, c, d, e;
    d = pow(a+b,3)-pow(a,3);
    e = 3*a*pow(b,2)+pow(b,3)+3*b*pow(a,2);
    c = d/e;
    double f = 1000, g = 0.0001, k, m, n;
    m = pow(f+g,3)-pow(f,3);
    n = 3*f*pow(g,2)+pow(g,3)+3*g*pow(f,2);
    k = m/n;
    printf("This is float: %.12f\n", c);
    printf("And this is double: %.12f\n", k);
}
