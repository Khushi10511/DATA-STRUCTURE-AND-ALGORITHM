/*11. WAP to store n employee’s data such as employee name, gender,designation,
 department, basic pay. Calculate the gross pay of eachemployees as follows:
Gross pay = basic pay + HR + DA
HR=25% of basic and DA=75% of basic.*/
#include <stdio.h>
#include <string.h>
struct Employee
{
    char name[50];
    char gender[50];
    float bpay;
    float gpay;
    char depart[50];
    char design [50];
};
void calculate(struct Employee e[], int n)
{
    for (int i = 0; i < n; i++)
    {
        e[i].gpay = e[i].bpay + (25 * e[i].bpay) / 100 + (75 * e[i].bpay) / 100;
    }
}
void display(struct Employee e[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        printf("FOR EMPLOYEE %d \n", i + 1);
        printf("NAME :%s\n", e[i].name);
        printf("GENDER :%s\n", e[i].gender);
        printf("DEPARTMENT :%s\n", e[i].depart);
        printf("DESIGNATION :%s\n", e[i].design );
        printf("GROSS PAY:%.2f\n", e[i].gpay);
    }
}
int main()
{
    int n;
    printf("ENTER THE NUMBER OF EMPLOYEE DATA TO BE ENTERED\n");
    scanf("%d", &n, "\n");
    struct Employee e[n];
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        printf("ENTER DATA FOR EMPLOYEE %d\n", i + 1);
        printf("ENTER THE NAME OF THE EMPLOYEE:\n");
        scanf("%s", &e[i].name);

        printf("ENTER THE GENDER 'M' FOR MALE 'F' FOR FEMALE:\n");
        scanf("%s", &e[i].gender);

        printf("ENTER THE DEPARTMENT:\n");
        scanf("%s", &e[i].depart);

        printf("ENTER THE DESIGNATION:\n");
        scanf("%s", &e[i].design );

        printf("ENTER THE BASIC PAY:\n");
        scanf("%f", &e[i].bpay);
    }
    printf("\nTHE INFORMATION OF THE EMPLOYEES IS AS FOLLOWS :\n");
    calculate(e, n);
    display(e, n);
    return 0;
}