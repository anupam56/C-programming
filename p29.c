# include<stdio.h>
int main()
{
    int p=60,m=90,ch=80,his=80,hin=80,total,avg,per;
    total=p+m+ch+his+hin;
    avg=total/2;
    per=(total/500)*100;
    printf("%d", total);
    printf("%d", avg);
    printf("%d", per);
    return 0;
}