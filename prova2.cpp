#include <stdio.h>
#include <stdlib.h>
int main()
{
	int ladoA = 0;
	int ladoB = 0;
	int ladoC = 0;
	printf("\nDigite o primeiro lado:");
	scanf("%d", &ladoA);
	printf("\nDigite o segundo lado:");
	scanf("%d", &ladoB);
	printf("\nDigite o terceiro lado: ");
	scanf("%d", &ladoC);
	if (ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoB + ladoC > ladoA)
	{
		if(ladoA == ladoB && ladoB == ladoC)
		{
			printf("o triangulo e equilateros");
		
		}
		else if (ladoB == ladoA || ladoB == ladoC || ladoA == ladoC)
		{
			printf("o triangulo e isosceles");
		}
		else
		{
			printf("o triangulo e escaleno");
		}
	}
	else
	{
		printf("não forma um triangulo");
	}
	return 0;
}
