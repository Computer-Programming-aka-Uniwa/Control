#include <stdio.h>

int main (int argc, int **argv)

{
	
	system ("chcp 1253");
	            
	int a, b, c;                                                                                                                           // Variable declaration
	                                                                                                                  
	printf ("===================================================\n\n");
	printf ("Finding the largest number and its entry order\n\n");                                                                         // Program title
	printf ("===================================================\n\n");                                                            
	printf ("Enter the 1st integer number : ");                                                                                   
	scanf ("%d", &a);                                                                                                                      // Input the first integer number
	printf ("Enter the 2nd integer number : ");
	scanf ("%d", &b);                                                                                                                      // Input the second integer number
	printf ("Enter the 3rd integer number : ");
	scanf ("%d", &c);                                                                                                                      // Input the third integer number
	printf ("\n--------------------------------------------------\n\n");                                                           
	printf ("The 1st integer number : [%20d]\n", a);                                                                                       // Print the first integer number
	printf ("The 2nd integer number : [%20d]\n", b);                                                                                       // Print the second integer number
	printf ("The 3rd integer number : [%20d]\n\n", c);                                                                                     // Print the third integer number
	(a > b && a > c) ? printf ("The largest number is %d and was entered 1st.", a) : printf ("\b");						                   // a > b AND a > c
	(a < b && b > c) ? printf ("The largest number is %d and was entered 2nd.", b) : printf ("\b");					                   // a < b AND b > c
	(a < c && b < c) ? printf ("The largest number is %d and was entered 3rd.", c) : printf ("\b");                                        // a < c AND b < c 
	(a == b && a > c) ? printf ("The largest number is %d and was entered 1st and 2nd.", a) : printf ("\b"); 				               // a == b > c
	(a < b && b == c) ? printf ("The largest number is %d and was entered 2nd and 3rd.", b) : printf ("\b");				               // a < b == c
	(a > b && a == c) ? printf ("The largest number is %d and was entered 1st and 3rd.", c) : printf ("\b");                              // a == c > b
	(a == b && b == c && a == c) ? printf ("The largest number is %d and was entered 1st, 2nd, and 3rd.\n", a) : printf ("\n");           // a == b == c 
	
	return 0;

}
