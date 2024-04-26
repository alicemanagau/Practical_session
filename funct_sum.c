#include <stdio.h>

float sum(float a, float b)
{
	float somme = a+b;
	return somme;
};

int main()
{
	float a=2;
	float b=3;
	float somme = sum(a,b);
	printf("%f", somme);

};
