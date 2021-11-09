# include<stdio.h>
# include<math.h>
int main()
{
    float area;
    float a=20,b=30,c=40,s=50;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the Triangle is ");
    printf("%f",  area);
    return 0;
}