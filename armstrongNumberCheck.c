// write a program to check whether a number is an Armstong number or not?

#include <stdio.h>
#include <math.h>

int main()
{
    int number, originalNumber, remainder, result = 0, n = 0;

    printf("Enter an integer : ");
    scanf("%d", &number);

    originalNumber = number;

    // count digit

    while (originalNumber != 0)
    {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    // check if it's armstrong number or not
    while (originalNumber != 0)
    {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    if (result == number)
    {
        printf("%d is an Armstrong number.\n", number);
    }
    else
    {

        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}

// Wrong result in VS Code . try it on Code Blocks
