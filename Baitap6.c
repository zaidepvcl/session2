#include <stdio.h>

int main()
{
    const float pi = 3.14;
    int r = 5;
    float cv = 2*pi*r , dt = pi*(r*r);
    printf("%f %f",cv,dt);
}