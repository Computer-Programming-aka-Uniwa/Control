#include <stdio.h>
#include <math.h>

int main (int argc, char **argv)

{
	
	system ("chcp 1253");

	double a, b, c;                                                                 // Variable declaration
	double x;
	double D;
	double root_D;
	double x1, x2;
	double x1_2;
	
	printf ("===================================================\n\n");
	printf ("Solving a quadratic equation\n\n");                                 // Program title
	printf ("===================================================\n\n"); 
	printf ("Enter coefficient a : ");                             
	scanf ("%lf", &a);                                                              // Input the 1st coefficient "a" of the equation 
	printf ("Enter coefficient b : ");
	scanf ("%lf", &b);                                                              // Input the 2nd coefficient "b" of the equation 
	printf ("Enter coefficient c : ");
	scanf("%lf", &c);                                                               // Input the 3rd coefficient "c" of the equation 
	printf ("\n--------------------------------------------------\n\n");
	printf ("Coefficient a : [%20.6lf]\n", a);                                      // Print the 1st coefficient "a" of the equation 
	printf ("Coefficient b : [%20.6lf]\n", b);                                      // Print the 2nd coefficient "b" of the equation 
	printf ("Coefficient c : [%20.6lf]\n\n", c);                                    // Print the 3rd coefficient "c" of the equation 
	if (a != 0)                                                                     /* (~) Quadratic equation */
	{                                                    
		D = (b * b) - 4 * a * c;                                                    // Calculate the discriminant
		printf ("The equation is quadratic\n\n");
		printf ("Discriminant   : [%20.6lf]\n\n", D);                                // Print the discriminant
		if (D >= 0)                                                                 /* (!) Positive discriminant or equal to "0" */
		{
			if (D == 0)                                                             /* (+) Discriminant equals "0" */
			{
				x1_2 = - b / (2 * a);                                               // Calculate the double real root
				printf ("The equation has an indefinite solution\n");
				printf ("The real root x1_2 is double\n\n");
				printf ("Root x1_2     : [%20.6lf]\n\n", x1_2);                     // Print the double real root
				printf ("--------------------------------------------------\n\n");
			}	
			else                                                                    /* (+) Positive discriminant */
			{
				root_D = sqrt (D);                                                  // Calculate the square root of the discriminant 
				x1 = (- b + root_D) / (2 * a);                                      // Calculate the first real root
				x2 = (- b - root_D) / (2 * a);                                      // Calculate the second real root
				printf ("Number of real roots : 2\n\n"); 
				printf ("Root x1       : [%20.6lf]\n", x1);                         // Print the first real root 
				printf ("Root x2       : [%20.6lf]\n\n", x2);                       // Print the second real root
				printf ("--------------------------------------------------\n\n");
			}
		}
		else                                                                        /* (!) Negative discriminant */
		{
			printf ("The equation has no real solutions\n\n");
			printf ("Number of real roots : 0\n\n");
			printf ("--------------------------------------------------\n\n");
		}
	}
	else                                                                            /* (~) Linear equation */
	{
		x = - c / b;                                                                // Calculate the real root
		printf ("The equation is linear\n");
		printf ("Number of real roots : 1\n\n");
	    printf ("Root x        : [%20.6lf]\n\n", x);                                // Print the real root
	    printf ("--------------------------------------------------\n\n");
	}
	
	return 0;

}
