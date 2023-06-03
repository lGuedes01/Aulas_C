#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool raizes(float *pr1, float *pr2, float a, float b, float c)
{
    bool raiz_real;
    float delta;
    delta = b*b - 4*a*c;
    if (delta < 0)
    {
        raiz_real = false;
    }
    else
    {
        *pr1 = (-b + sqrt(delta)) / 2*a;
        *pr2 = (-b - sqrt(delta)) / 2*a;
        raiz_real = true;
    }
    
    return raiz_real;
}

int main()
{
    float a=1,b=2,c=-3;
    float r1, r2;
    
    if(raizes(&r1, &r2, a, b, c))
    {
        printf("\nas raizes da equacao %.2fx^2 + (%.2f)x + (%.2f)", a, b, c);
        printf("\nsao %.2f e %.2f ", r1, r2);
    }
    else
    {
        printf("\nnao tem raizes reais");
    }
    
    return 0;
}