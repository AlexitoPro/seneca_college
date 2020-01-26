//==============================================
// Name:           Alex
// Student Number: 140418195
// Email:          apan-li@myseneca.ca
// Section:        NGG
// Workshop:       2 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Start your code below:

int main(void) 
{
    double amount_Owing;
    int balance_Remaining, coins_Required;

    printf("Please enter the amount to be paid: ");
    scanf("%lf", &amount_Owing);

    coins_Required = amount_Owing;    // Narrowing properties applied to show only partial number            
    balance_Remaining = (amount_Owing - coins_Required +0.005) * 100;    // balance remaining equals cents moved to partial number 
    printf("Loonies required: %d, balance owing $%1.2f\n", coins_Required, (float)balance_Remaining / 100);    // Converts balance remaining back to impartial number (decimal) by casting to float and divide with 100

    coins_Required = (balance_Remaining / 25);  // Get quarters from the balance remaining
    balance_Remaining %= 25;  // Substract quarters from balance remaining 
    printf("Quarters required: %d, balance owing $%1.2f\n", coins_Required, (float)balance_Remaining / 100);   // Converts new balance remaining back to impartial number (decimal) by casting to float and divide with 100

    return 0;
}
