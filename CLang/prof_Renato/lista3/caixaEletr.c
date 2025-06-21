#include <stdio.h>

int main()
{
    float saque, acc;
    int c100 = 0, c50 = 0, c20 = 0, c10 = 0, c5 = 0, c2 = 0, c1 = 0;
    printf("Quanto voce gosstaria de sacar?\n");
    scanf("%f", &saque);

    while (saque > 0)
    {
        while (saque >= 100)
        {
            if (saque >= 100 && (saque - 100) >= 0)
            {
                c100++;
                saque -= 100;
            }
        }
        while (saque >= 50)
        {
            if (saque >= 50 && (saque - 50) >= 0)
            {
                c50++;
                saque -= 50;
            }
        }
                while (saque >= 20)
        {
            if (saque >= 20 && (saque - 20) >= 0)
            {
                c20++;
                saque -= 20;
            }
        }
                while (saque >= 10)
        {
            if (saque >= 10 && (saque - 10) >= 0)
            {
                c10++;
                saque -= 10;
            }
        }
                while (saque >= 5)
        {
            if (saque >= 5 && (saque - 5) >= 0)
            {
                c5++;
                saque -= 5;
            }
        }
                while (saque >= 2)
        {
            if (saque >= 2 && (saque - 2) >= 0)
            {
                c2++;
                saque -= 2;
            }
        }
                        while (saque >= 1)
        {
            if (saque >= 1 && (saque - 1) >= 0)
            {
                c1++;
                saque -= 1;
            }
        }

    }

    if(c100 > 0)    printf("foram sacado %d nota de 100\n", c100);

    if(c50 > 0)    printf("foram sacado %d nota de 50\n", c50);

    if(c20 > 0)    printf("foram sacado %d nota de 20\n", c20);

    if(c10 > 0)    printf("foram sacado %d nota de 10\n", c10);

    if(c5 > 0)    printf("foram sacado %d nota de 5\n", c5);

    if(c2 > 0)    printf("foram sacado %d nota de 2\n", c2);

    if(c1 > 0)    printf("foram sacado %d nota de 1\n", c1);
    
    return 0;
}
