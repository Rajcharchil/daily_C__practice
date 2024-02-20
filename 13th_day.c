
//==== ============Program to Check Whether a Character is a Vowel or Consonant:
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    } else {
        printf("Invalid input: Not an alphabet.\n");
    }

    return 0;
}




//==== ============Program to Find the Largest Number Among Three Numbers:
#include <stdio.h>

int main() {
    double num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3)
        printf("%.2f is the largest number.\n", num1);
    else if (num2 >= num1 && num2 >= num3)
        printf("%.2f is the largest number.\n", num2);
    else
        printf("%.2f is the largest number.\n", num3);

    return 0;
}




//==== ============Program to Find the Roots of a Quadratic Equation:




//==== ============#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct: %.2f and %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal: %.2f and %.2f\n", root1, root2);
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and imaginary: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}




//==== ============Program to Check Leap Year:
#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);

    return 0;
}




//==== ============Program to Check Whether a Number is Positive or Negative:
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
        printf("%d is positive.\n", num);
    else if (num < 0)
        printf("%d is negative.\n", num);
    else
        printf("Zero is neither positive nor negative.\n");

    return 0;
}




//==== ============Program to Check Whether a Character is an Alphabet or not:
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("%c is an alphabet.\n", ch);
    else
        printf("%c is not an alphabet.\n", ch);

    return 0;
}




//==== ============Program to Calculate the Sum of Natural Numbers:
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);
    return 0;
}




//==== ============Program to Find Factorial of a Number:
#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    printf("Factorial of %d = %llu\n", n, factorial);
    return 0;
}




//==== ============Program to Generate Multiplication Table:
#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Multiplication table of %d:\n", num);
    for (int i = 1; i <= 10; ++i) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}




//==== ============Program to Display Fibonacci Sequence:
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; ++i) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
