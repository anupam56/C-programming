# include<stdio.h>
int main()
{
    int basicpay=65222;
    
    int HRA,TA;
    HRA=basicpay*0.15;
    TA=basicpay*0.20;
    int salary1=HRA+TA;
    printf("The salary of the employee is   ");
    printf("%d", salary1);
    return 0;
}