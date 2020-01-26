//==============================================
// Name:          Alex Pan Li
// Student Number: 140418195
// Email:          apan-li@myseneca.ca
// Section:        NGG
// Workshop:       3 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMS 3

// Put your code below:

int main(void)
{
	int i, high, low;
	printf("---=== IPC Temperature Analyzer ===---");
	for (i = 1; i < 4; i++)
	{
		do
		{
			printf("\nEnter the high value for day %d: ", i);
			scanf("%d", &high);
			printf("\nEnter the low value for day %d: ", i);
			scanf("%d", &low);
			while (!(high > low && high < 41 && low > -41))
			{
				printf("\nIncorrect values, tempratures must be in the range -40 to 40, high must be greater than low.\n"); 
				printf("\nEnter the high value for day %d: ", i);
				scanf("%d", &high);
				printf("\nEnter the low value for day %d: ", i);
				scanf("%d", &low);
			}
		} while (!(high > low && high < 41 && low > -41));
	}
	return 0;
}
