#include <stdio.h>
#include <stdlib.h>
struct complex
{
    int real;
    int img;
};

void input(struct complex *x)
{
    printf("Real part:");
    scanf("%d", &x->real);
    printf("Complex part:");
    scanf("%d", &x->img);
}

void display(struct complex *x)
{
    printf("%d + %di\n", x->real, x->img);
}

struct complex Addition(struct complex *x1, struct complex *x2)
{
    struct complex res;
    res.real = x1->real + x2->real;
    res.img = x1->img + x2->img;
    return res;
}

struct complex Multiplication(struct complex *x1, struct complex *x2)
{
    struct complex res1;
    res1.real = x1->real * x2->real;
    res1.img = x1->img * x2->img;
    return res1;
}
int main()
{
    struct complex N1, N2, res, res1;
    input(&N1);
    // display(&N1);
    input(&N2);
    // display(&N2);
    res = Addition(&N1, &N2);
    res1 = Multiplication(&N1, &N2);
    display(&res);
    display(&res1);
}