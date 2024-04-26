#include <time.h>
#include <stdio.h>

int main()
{
	clock_t debut, fin;
	debut = clock();
	for(int i=0;i<100000000;i++)
	{
		printf(".");
	}


	fin= clock();
	double duree= (double)(fin-debut)/CLOCKS_PER_SEC;
	printf("le temps d'execution est de :%f",duree);
return 0;
}
