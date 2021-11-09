#include<stdio.h>
int main()
{
    int pop=30000;
    int pop1,pop2;
    int poptotal;
    pop1=pop*0.20;
    pop2=pop*0.30;
    poptotal=pop1+pop2+pop;
    printf("THE POPULATION OF THE CITY IN TWO YEARS IS -->");
    printf("%d", poptotal);
    return 0;

}