//==============================================
// Name:           Alex Pan Li
// Student Number: 140418195
// Email:          apan-li@myseneca.ca
// Section:        NGG
// Workshop:       3 (at-home)
//==============================================

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Put your code below:

#define NUMS 4

int main(void)
{
	int i, high, low, highest = 0, lowest = 0, highest_day, lowest_day;
	double high_average = 0, low_average = 0;

	printf("---=== IPC Temperature Analyzer ===---");

	for (i = 1; i <= NUMS; i++)
	{
		printf("\nEnter the high value for day %d: ", i);
		scanf("%d", &high);
		printf("\nEnter the low value for day %d: ", i);
		scanf("%d", &low);
		while (!(high > low&& high < 41 && low > -41))
		{
			printf("\nIncorrect values, temperatures must be in the range -40 to 40,high must be greater than low.\n");
			printf("\nEnter the high value for day %d: ", i);
			scanf("%d", &high);
			printf("\nEnter the low value for day %d: ", i);
			scanf("%d", &low);
		}		
		high_average += high;
		low_average += low;
		if (high > highest)
		{
			highest = high;
			highest_day = i;
		}
		if (low < lowest)
		{
			lowest = low;
			lowest_day = i;
		}
	} 
	
	printf("\nThe average (mean) LOW temperature was: %.2lf", low_average / NUMS);
	printf("\nThe average (mean) HIGH temperature was: %.2lf", high_average / NUMS);
	printf("\nThe average (mean) temperature was: %.2lf", (low_average + high_average) / (2 * NUMS));
	printf("\nThe highest temperature was %d, on day %d", highest, highest_day);
	printf("\nThe lowest temperature was %d, on day %d\n", lowest, lowest_day);

	return 0;
}
