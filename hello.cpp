#include <stdio.h>
int main()
{
    float a, b, c, d, e, f, g, h, i, j, k;

    printf("Enter Amount = ");

    scanf("%f", &a);
    b = (a + (a * .15));
    c = (a * .15);
    d = (a + (a * .12));
    e = (a * .12);
    f = (a + (a * .10));
    g = (a * .10);
    h = (a + (a * .07));
    i = (a * .07);
    j = (a + (a * .04));
    k = (a * .04);
    if (a > 0 && a <= 400.0)

    {
        printf("Novo salario: %.2f\n", b);
        printf("Reajuste ganho: %.2f\n", c);
        printf("Em percentual: 15 %%\n");
    }
    else if (a <= 800.0)
    {
        printf("Novo salario: %.2f\n", d);
        printf("Reajuste ganho: %.2f\n", e);
        printf("Em percentual: 12 %%\n");
    }
    else if (a <= 1200.0)
    {
        printf("Novo salario: %.2f\n", f);
        printf("Reajuste ganho: %.2f\n", g);
        printf("Em percentual: 10 %%\n");
    }
    else if (a <= 2000.0)
    {
        printf("Novo salario: %.2f\n", h);
        printf("Reajuste ganho: %.2f\n", i);
        printf("Em percentual: 7 %%\n");
    }
    else
    {
        printf("Novo salario: %.2f\n", j);
        printf("Reajuste ganho: %.2f\n", k);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}
