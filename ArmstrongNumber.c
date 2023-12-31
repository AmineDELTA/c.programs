#include <stdio.h>

int main()
{
    int numDgt, number, rem, mul = 1, cnt, result = 0, done = 0;

    do
    { /* ADDED: Begin do-while() loop */

        printf("Enter a number: ");
        scanf("%d", &number);
        result = 0;

        int n = number;
        numDgt = 0;
        while (n != 0)
        {
            n = n / 10;
            numDgt++;
        }
        cnt = numDgt;
        n = number;

        while (n != 0)
        {
            rem = n % 10;
            while (cnt != 0)
            {
                mul = mul * rem;
                cnt--;
            }
            result = result + mul;
            cnt = numDgt;
            n = n / 10;
            mul = 1;
        }

        if (result == number)
        {
            printf("%d is an Armstrong number.\n", number);
        }
        else
        {
            printf("%d is not an Armstrong number.\n", number);
        }
        /* ADDED: query user to continue program or quit */
        printf("Run again? Enter zero to continue, any other number to quit: ");
        scanf("%d", &done);

    } while (!done); /* ADDED: End do-while() loop */

    printf("\nGood-bye\n");
    return 0;
}
