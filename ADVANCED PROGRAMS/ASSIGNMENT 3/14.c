// WAP return an array of structure using pointer.
#include <stdio.h>
struct student
{
    int rollno;
    int age;
};
int ret(struct student s[], struct student *p, int i)
{
    printf("\nEnter age:");
    scanf("%d", &(p + i)->age);
    return (p + i)->age;
}

int rer(struct student s[], struct student *p, int i)
{
    printf("\nEnter rollno:");
    scanf("%d", &(p + i)->rollno);
    return (p + i)->rollno;
}

int main()
{
    int n, i;
    printf("Enter n:");
    scanf("%d", &n);
    struct student s[n], *p;
    p = &s[0];
    for (i = 0; i < n; i++)
    {

        (p + i)->rollno = rer(s, &s[0], i);
        (p + i)->age = ret(s, &s[0], i);
    }
    for (i = 0; i < n; i++)
    {
        printf("\nDetails of employee %d :", i + 1);
        printf("\nRollno :%d Age: %d", (p + i)->rollno, (p + i)->age);
    }
}