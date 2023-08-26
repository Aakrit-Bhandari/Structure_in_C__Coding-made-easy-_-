#include <stdio.h>
#include <stdlib.h>
typedef struct Student
{
    int Rollno;
    char name[20];
    struct Date
    {
        int dd;
        char month[15];
        int yy;
    } dob;
} std;
void Data(std *user)
{
    printf("Enter roll no:");
    scanf("%d", &user->Rollno);
    printf("Enter name:");
    scanf("%s", &user->name);
    printf("Enter Day:");
    scanf("%d", &user->dob.dd);
    printf("Enter month");
    scanf("%s", &user->dob.month);
    printf("Enter year");
    scanf("%d", &user->dob.yy);
}
void Display(std *user)
{
    printf("Name %s", user->name);
    printf("Dob %d-%s-%d", user->dob.dd, user->dob.month, user->dob.yy);
    printf("Rollno %d", user->Rollno);
}
int main(void)
{
    std Aakrit;
    Data(&Aakrit);
    Display(&Aakrit);
}