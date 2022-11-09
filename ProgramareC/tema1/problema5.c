#include<stdio.h>

int main()
{
        int sum, nr_coins = 0;
        printf("Introduceti suma: ");
        scanf("%d", &sum);

        nr_coins = sum / 5; //coins of 5
        sum %= 5;

        nr_coins += sum / 2; //coins of 2
        sum %= 2;

        nr_coins += sum; //coins of 1

        printf("%d\n", nr_coins);

        return 0;
}


