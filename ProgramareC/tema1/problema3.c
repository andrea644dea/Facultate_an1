#include<stdio.h>

int main()
{
        int mini, maxi, n;
        printf("Introduceti 5 numere: ");
        scanf("%d", &n);
        mini = maxi = n;
        for(int i = 1; i <= 4; i++)
        {
                scanf("%d", &n);
                if(n < mini)
                        mini = n;
                if(n > maxi)
                        maxi = n;
        }
        printf("Valoarea minima este %d.\n", mini);
        printf("Valoarea maxima este %d.\n", maxi);
        return 0;
}


