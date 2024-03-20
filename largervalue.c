#include <stdio.h>

int main()
{
	float a=1;
	float b=2;
	if(a<b)
	{
		printf("La plus grande valeur est :");
		printf("%.6f",b);
	}
	else if(b<a)
	{
		printf("La plus grande valeur est :");
		printf("%.6f",a);
	}
	else 
	{
		printf("Les deux valeurs sont égales");
	}
	
};
