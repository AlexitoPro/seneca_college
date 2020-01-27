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

#define NUMS 3

int main(void)
{
	int i, high, low, highest, lowest, highest_1, highest_2, lowest_1, lowest_2, high1 = 0, high2 = 0, high3 = 0, high4 = 0, low1 = 0, low2 = 0, low3 = 0, low4 = 0, total_high, total_low, day;
	printf("---=== IPC Temperature Analyzer ===---");
	for (i = 1; i < 5; i++)
	{
		do
		{
			printf("\nEnter the high value for day %d: ", i);
			scanf("%d", &high);
			printf("\nEnter the low value for day %d: ", i);
			scanf("%d", &low);
			while (!(high > low && high < 41 && low > -41))
			{
				printf("\nIncorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
				printf("\nEnter the high value for day %d: ", i);
				scanf("%d", &high);
				printf("\nEnter the low value for day %d: ", i);
				scanf("%d", &low);
			}
			switch (i)
			{
			case 1:
				high1 = high;
				low1 = low;
				break;
			case 2:
				high2 = high;
				low2 = low;
				break;
			case 3:
				high3 = high;
				low3 = low;
				break;
			case 4:
				high4 = high;
				low4 = low;
				break;
			}
		} while (!(high > low && high < 41 && low > -41));
	}

	total_low = low1 + low2 + low3 + low4;
	total_high = high1 + high2 + high3 + high4;

	if (high1 >= high2) 
	{
		highest_1 = high1;
	} else
		{
		highest_1 = high2;
		}
	if (high3 >= high4)
	{
		highest_2 = high3;
	} else
		{
		highest_2 = high4;
		}
	if (highest_1 >= highest_2) 
	{
		highest = highest_1;
	} else
		{
		highest = highest_2;
		}

	if (low1 >= low2)
	{
		lowest_1 = low2;
	} else
		{
		lowest_1 = low1;
		}
	if (low3 >= low4)
	{
		lowest_2 = low4;
	} else
		{
		lowest_2 = low3;
		}
	if (lowest_1 >= lowest_2)
	{
		lowest = lowest_2;
	} else
		{
		lowest = lowest_1;
		}

	printf("The average (mean) LOW temperature was: %.2lf\n", (double)total_low / 4);
	printf("The average (mean) HIGH temperature was: %.2lf\n", (double)total_high / 4);
	printf("The average (mean) temperature was: %.2lf\n", ((double)total_high + (double)total_low) / 8);

	if (highest == high1)
	{
	day = 1;
	} else if (highest == high2)
		{
		day = 2;
		} else if (highest == high3)
			{
			day = 3;
			} else if (highest == high4)
				{
				day = 4;
				}

	printf("The highest temperature was %d on day %d\n", highest, day);

	if (lowest == low1)
	{
	day = 1;
	} else if (lowest == low2)
		{
		day = 2;
		} else if (lowest == low3)
			{
			day = 3;
			} else if (lowest == low4)
				{
				day = 4;
				}

	printf("The lowest temperature was %d on day %d\n", lowest, day);

	return 0;
}
