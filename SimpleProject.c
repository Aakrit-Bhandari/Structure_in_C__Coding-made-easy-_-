#include <stdio.h>
#include <stdlib.h>
typedef struct student
{
    int Roll;
    char name[10];
    char course[5];
    int sem;
} st;
typedef struct Test
{
    st me;
    int marks[5];
    // int total;
    // float per; not needed in my approach
    char grade;
} Exam;
// Input function
void input(Exam *Ex)
{
    printf("Enter Rollno:");
    scanf("%d", &Ex->me.Roll);
    fflush(stdin);
    printf("Enter Name:");
    scanf("%s", &Ex->me.name);
    printf("Enter course:");
    scanf("%s", &Ex->me.course);
    printf("Enter Sem:");
    scanf("%d", &Ex->me.sem);
    fflush(stdin);
    printf("Enter Grade:");
    scanf("%c", &Ex->grade);
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Sub%d:", i + 1);
        scanf("%d", &Ex->marks[i]);
    }
}
// Output function
void output(Exam *Ex)
{
    printf("Rollno:%d\n", Ex->me.Roll);
    printf("Name:%s\n", Ex->me.name);
    printf("Course:%s\n", Ex->me.course);
    printf("Semester:%d\n", Ex->me.sem);
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += Ex->marks[i];
        printf("Sub%d marks:%d\n", i + 1, Ex->marks[i]);
    }
    printf("Total:%d\n", sum);
    printf("Percentage:%.2f\n", (float)sum / 5);
    printf("Grade:%c\n", Ex->grade);
}
int main(void)
{
    Exam User;
    input(&User);
    output(&User);
}