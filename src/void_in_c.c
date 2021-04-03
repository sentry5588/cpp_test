#include <stdio.h>

void foo(int i, char c, double d, int* pi, char* pc, double* pd)
{
    printf("i=%u, c=%c, d=%.3f\t", i, c, d);
    printf("*pi=%u, *pc=%c, *pd=%.3f\t", *pi, *pc, *pd);
    printf("pi=%p, pc=%p, pd=%p\n", pi, pc, pd);
    (void)i;    // Casting to void doesn't change parameter values
    (void)c;
    (void)d;
    (void)pi;   // Casting to void doesn't change pointer values
    (void)pc;
    (void)pd;
    printf("i=%u, c=%c, d=%.3f\t", i, c, d);
    printf("*pi=%u, *pc=%c, *pd=%.3f\t", *pi, *pc, *pd);
    printf("pi=%p, pc=%p, pd=%p\n", pi, pc, pd);
}

int main(void)
{
    int i = 3, i2 = 33;
    char c = 'm', c2 = 'p';
    double d = 3.1415, d2 = 2.7128;
    int *pi = &i2;
    char *pc = &c2;
    double *pd = &d2;
    foo(i, c, d, pi, pc, pd);

    return 0;
}
