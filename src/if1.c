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
    
    Max = a;
    if (b > Max)
        Max = b;
    Max = (c > Max)? c : Max;
    
    printf ("The largest is %d and was entered:\n", Max);
    if (Max == a) 
        printf("  1st\n");
    if (Max == b)
        printf("  2nd\n");
    if (Max == c)
        printf("  3rd\n");
    
    return 124;
}
