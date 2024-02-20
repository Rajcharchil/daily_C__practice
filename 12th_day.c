

//================== "Hello, World!" Program:
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}


//================== Program to Print an Integer (Entered by the User):
#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    return 0;
}


//================== Program to Add Two Integers:
#include <stdio.h>

int main() {
    int num1, num2, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("Sum: %d\n", sum);
    return 0;
}


//================== Program to Multiply Two Floating-Point Numbers:
#include <stdio.h>

int main() {
    float num1, num2, product;
    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &num1, &num2);
    product = num1 * num2;
    printf("Product: %.2f\n", product);
    return 0;
}


//================== Program to Find ASCII Value of a Character:
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("ASCII value of %c is %d\n", ch, ch);
    return 0;
}


//================== Program to Compute Quotient and Remainder:
#include <stdio.h>

int main() {
    int dividend, divisor, quotient, remainder;
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);
    return 0;
}


//================== Program to Find the Size of int, float, double and char:
#include <stdio.h>

int main() {
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of char: %lu byte\n", sizeof(char));
    return 0;
}


//================== Program to Demonstrate the Working of Keyword long:
#include <stdio.h>

int main() {
    long num = 100000L;
    printf("Value of 'num': %ld\n", num);
    return 0;
}


//================== Program to Swap Two Numbers:
#include <stdio.h>

int main() {
    int num1, num2, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}


//================== Program to Check Whether a Number is Even or Odd:
#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);
    return 0;
}
