#include <stdio.h>

int main (int NoP, char **Params)
{
    int a, b, c;
    int Max;
    printf ("FINDING THE LARGEST NUMBER\n\n");
    printf ("Enter the first number   : ");
    scanf ("%d", &a);
    printf ("Enter the second number  : ");
    scanf ("%d", &b);
    printf ("Enter the third number   : ");
    scanf ("%d", &c);
    
    if (a > b)
        if (a > c)
            printf("The largest is %d and was entered 1st\n", a);
        else
            if (a == c)
                printf ("The largest is %d and was entered 1st and 3rd\n", a);
            else
                printf ("The largest is %d and was entered 3rd\n", c);
    else
        if (a == b)
            if (a == c)
                printf ("The largest is %d and was entered 1st, 2nd, and 3rd\n", a);
            else
                if (a > c)
                    printf ("The largest is %d and was entered 1st and 2nd\n", a);
                else
                    printf ("The largest is %d and was entered 3rd\n", c);
        else
            if (b > c)
                printf ("The largest is %d and was entered 2nd\n", b);
            else
                if (b == c)
                    printf ("The largest is %d and was entered 2nd and 3rd\n", c);
                else
                    printf ("The largest is %d and was entered 3rd\n", c);
    
    return 32;
}
