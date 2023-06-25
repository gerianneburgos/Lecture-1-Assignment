#include <stdio.h>

int main(void) 
{
    // declares variables integer i and float x
    int i; 
    float x;
    
    // assigns values 40 to i and 839.21 to f
    i = 40;
    x = 839.21f;
    
    // prints formatted output
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    // This line prints formatted output with integer placeholders.
    // - %d - prints the value of 'i' as a signed decimal integer.
    // - %5d - prints the value of 'i' as a signed decimal integer, taking at least 5 characters.
    // - %-5d - prints the value of 'i' as a signed decimal integer, taking at least 5 characters and left-justifying it.
    // - %5.3d - prints the value of 'i' as a signed decimal integer, taking at least 5 characters and padding with leading zeros if necessary, with a precision of 3 digits.
    
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
    // This line prints formatted output with float placeholders.
    // - %10.3f - prints the value of 'x' as a floating-point number, taking at least 10 characters, with a precision of 3 decimal places.
    // - %10.3e - prints the value of 'x' in scientific notation, taking at least 10 characters, with a precision of 3 decimal places.
    // - %-10g - prints the value of 'x' in either standard or scientific notation, taking at least 10 characters and left-justifying it.
    
    return 0; // indicates a successful program execution by returning 0
}

