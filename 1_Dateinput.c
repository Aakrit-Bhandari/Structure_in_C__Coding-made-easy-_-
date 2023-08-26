#include <stdio.h>
#include <stdlib.h>
typedef struct date
{
    int day;
    char month[10];
    int year;
} Dt;

void input(Dt *x)
{
    printf("Enter day:");
    scanf("%d", &x->day);
    printf("Enter month:");
    scanf("%s", &x->month);
    printf("Enter year:");
    scanf("%d", &x->year);
}
void display(Dt *x)
{
    printf("Date is %d %s %d\n", x->day, x->month, x->year);
}
int main(void)
{
    Dt Akrit[5];
    for (int i = 0; i < 5; i++)
    {
        input(&Akrit[i]);
        display(&Akrit[i]);
    }
}