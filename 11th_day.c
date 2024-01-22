
#include <stdio.h>

// Program to print "Hello, World!"
int main() {
    printf("Hello, World!\n");
    return 0;
}


////======================================================


// Program to print your own name
#include <stdio.h>

int main() {
    printf("Your Name\n");
    return 0;
}


////======================================================



// Program to print an integer entered by the user
#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    return 0;
}

////======================================================





// Program to check whether a number is prime or not
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num)) {
        printf("%d is prime.\n", num);
    } else {
        printf("%d is not prime.\n", num);
    }
    return 0;
}


////======================================================




// Program to find the sum of all numbers from 1 to n
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a number (n): ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum of numbers from 1 to %d is: %d\n", n, sum);
    return 0;
}


////======================================================





// Program to find the sum of all odd numbers from 1 to n
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a number (n): ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }
    printf("Sum of odd numbers from 1 to %d is: %d\n", n, sum);
    return 0;
}


////======================================================





// Program to print the multiplication table of n
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number (n): ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}



////======================================================




// Program to find the number of digits in a number
#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        num /= 10;
        count++;
    }
    printf("Number of digits: %d\n", count);
    return 0;
}



////======================================================



// Program to find the first and last digit of a number
#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit;
    printf("Enter a number: ");
    scanf("%d", &num);
    lastDigit = num % 10;
    while (num >= 10) {
        num /= 10;
    }
    firstDigit = num;
    printf("First digit: %d\nLast digit: %d\n", firstDigit, lastDigit);
    return 0;
}


////======================================================





// Program to find the sum of the first and last digit of a number
#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    lastDigit = num % 10;
    while (num >= 10) {
        num /= 10;
    }
    firstDigit = num;
    sum = firstDigit + lastDigit;
    printf("Sum of first and last digit: %d\n", sum);
    return 0;
}

////======================================================





// Program to swap the first and last digit of a number
#include <stdio.h>

int main() {
    int num, temp, firstDigit, lastDigit, swappedNum;
    printf("Enter a number: ");
    scanf("%d", &num);
    lastDigit = num % 10;
    temp = num;
    while (temp >= 10) {
        temp /= 10;
    }
    firstDigit = temp;
    swappedNum = lastDigit * (int)pow(10, countDigits(num) - 1) + num % (int)pow(10, countDigits(num) - 1);
    printf("Number after swapping first and last digit: %d\n", swappedNum);
    return 0;
}



////======================================================




// Program to find the sum of the digits of a number
#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}


////======================================================




// Program to find the reverse of a number
#include <stdio.h>

int main() {
    int num, reversedNum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }
    printf("Reversed number: %d\n", reversedNum);
    return 0;
}


////======================================================




// Program to find the frequency of digits in a number
#include <stdio.h>

int main() {
    int num, digit;
    printf("Enter a number: ");
    scanf("%d",&num);
    int frequency[10] = {0};
    while (num != 0) {
        digit = num % 10;
        frequency[digit]++;
        num /= 10;
    }
    printf("Frequency of each digit:\n");
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > 0) {
            printf("Digit %d: %d times\n", i, frequency[i]);
        }
    }
    return 0;
}


////======================================================




// Program to find the power of a number using a loop
#include <stdio.h>

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base, exponent;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    printf("%d raised to the power %d is: %d\n", base, exponent, power(base, exponent));
    return 0;
}
////======================================================





// Program to find the factorial of a number
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d is: %d\n", num, factorial(num));
    return 0;
}


////======================================================




// Program to find the HCF of two numbers
#include <stdio.h>

int hcf(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}

int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("HCF of %d and %d is: %d\n", num1, num2, hcf(num1, num2));
    return 0;
}


////======================================================




// Program to find the LCM of two numbers
#include <stdio.h>

int lcm(int a, int b) {
    int max = (a > b) ? a : b;
    while (1) {
        if (max % a == 0 && max % b ==0) {
            return max;
        }
        max++;
    }
}

int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm(num1, num2));
    return 0;
}
```