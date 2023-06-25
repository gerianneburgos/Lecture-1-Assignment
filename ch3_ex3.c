#include <stdio.h>

int main(void) 
{
    // declares variables to store fractions and the result
    int num1, denom1, num2, denom2, result_num, result_denom; 
    
    // prompts the user to enter the first fraction
    printf("Enter first fraction: ");
    // Read the numerator and denominator of the first fraction from user input
    scanf("%d/%d", &num1, &denom1); 
    
    // prompts the user to enter the second fraction
    printf ("Enter second fraction: ");
    // reads the numerator and denominator of the second fraction from user input
    scanf("%d/%d", &num2, &denom2);
    
    // calculates the numerator of the sum by cross-multiplying and adding
    result_num = num1 * denom2 + num2 * denom1;
    
    // calculates the denominator of the sum by multiplying the denominators
    result_denom = denom1 * denom2;
    
    // prints the sum of the fractions
    printf ("The sum is %d/%d\n", result_num, result_denom);
    
    return 0;  // returns 0 to indicate successful execution of the program

}
