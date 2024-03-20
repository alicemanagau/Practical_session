#include <stdio.h>


int main()
{
	float tableau[5] = {1,13,24,53,2};
	float a=13;
	int found = 0;
	for (int i=0; i<5;i++)
	{
		if(tableau[i]==a)
		{
			found +=1;
		
		}
		
		else
		{
			found +=0;
		}


	}

	printf("On a trouvé l'itération %d fois", found);
};
