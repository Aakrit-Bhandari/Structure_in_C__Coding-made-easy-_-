#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Student
{
    char name[30];
    int long long rollnumber;
    int Maths;
    int C;
    int Chemistry;
} students;
int main(void)
{
    int n;
    printf("Total  number of students:- ");
    scanf("%d", &n);
    getchar();
    students stud[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter name:-");
        fgets(stud[i].name, sizeof(stud[i].name), stdin);
        stud[i].name[strcspn(stud[i].name, "\n")] = '\0';
        printf("Enter Roll-number:-");
        scanf("%lld", &stud[i].rollnumber);
        printf("Enter Maths marks:-");
        scanf("%d", &stud[i].Maths);
        printf("Enter C marks:-");
        scanf("%d", &stud[i].C);
        printf("Enter Chemistry marks:-");
        scanf("%d", &stud[i].Chemistry);
        getchar();
    }
    int max_marks = stud[0].Maths + stud[0].C + stud[0].Chemistry;
    int index = 0;
    for (int i = 1; i < n; i++)
    {
        int curr = stud[i].Maths + stud[i].C + stud[i].Chemistry;
        if (curr > max_marks)
        {
            max_marks = curr;
            index = i;
        }
    }
    printf("The MaxMarks scored by %s -> %d", stud[index].name, max_marks);
}