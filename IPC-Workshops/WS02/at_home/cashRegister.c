//==============================================
// Name:           Alex Pan Li
// Student Number: 140418195
// Email:          apan-li@myseneca.ca
// Section:        NGG
// Workshop:       2 (at-home)
//==============================================

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Paste your in-lab code below and upgrade it to the at-home specifications

int main(void) {

    double amount, amount_Owing;
    int balance_Remaining, coins_Required;

    printf("Please enter the amount to be paid: $");
    scanf("%lf", &amount);
    printf("GST: %.2lf\n", amount * 0.13 + 0.005);
    amount_Owing = amount * 0.13 + 0.005 + amount;
    printf("Balance owing: $%.2lf\n", amount_Owing);


    coins_Required = amount_Owing;
    balance_Remaining = (amount_Owing - coins_Required + 0.005) * 100;
    printf("Loonies required: %d, balance owing $%1.2f\n", coins_Required, (float)balance_Remaining / 100);

    coins_Required = (balance_Remaining / 25);
    balance_Remaining %= 25;
    printf("Quarters required: %d, balance owing $%1.2f\n", coins_Required, (float)balance_Remaining / 100);

    coins_Required = (balance_Remaining / 10);
    balance_Remaining %= 10;
    printf("Dimes required: %d, balance owing $%1.2f\n", coins_Required, (float)balance_Remaining / 100);

    coins_Required = (balance_Remaining / 5);
    balance_Remaining %= 5;
    printf("Nickels required: %d, balance owing $%1.2f\n", coins_Required, (float)balance_Remaining / 100);

    coins_Required = (balance_Remaining / 1);
    balance_Remaining %= 1;
    printf("Pennies required: %d, balance owing $%1.2f\n", coins_Required, (float)balance_Remaining / 100);

    return 0;
}