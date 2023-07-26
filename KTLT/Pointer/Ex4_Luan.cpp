#include <stdio.h>
struct Student
{
    char code[59];
    char name[50];
    int age;
};
void Input_Student(Student *st)
{
    printf("Code: ");
    fflush(stdin);
    gets(st->code);
    printf("Name: ");
    gets(st->name);
    printf("Age: ");
    scanf("%d", &st->age);
}
void Output_Student(Student *st)
{
    printf("Code: %s", st->code);
    printf("Name: %s", st->name);
    printf("Age: %d", st->age);
}
void Input_Student_List(Student *st, int n)
{
    for (int i = 0; i < n; i++)
    {
        Input_Student((st + i));
    }
}
void Output_Student_List(Student *st, int n)
{
    for (int i = 0; i < n; i++)
    {
        Output_Student((st + i));
    }
}

int main()
{
    struct Student sv[100];
    struct Student *st = NULL;
    st = sv;
    int n;
    printf("How many student : ");
    scanf("%d", &n);
    Input_Student_List(st, n);
    Output_Student_List(st, n);
}