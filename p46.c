#include<stdio.h>
int main()
{
int sec=6525,hh,mm;
hh=sec/3600;
mm=(sec-hh*3600)/60;
sec=sec-hh*3600-mm*60;
 printf("%d", hh);
  printf("\n %d", mm); 
   printf("\n %d", sec);
   return 0;
   }