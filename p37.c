#include <stdio.h>
int main()
{
	float value=123456.456f;
	
	printf("value: %f (using %%f format specifier)\n",value);
	printf("value: %e (using %%e format specifier)\n",value);
	
	return 0;
}