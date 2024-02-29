

// Check Whether a Number can be Expressed as Sum of Two Prime Numbers
#include <stdio.h>

int checkPrime(int n);

int main() {
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 2; i <= n/2; ++i) {
        if (checkPrime(i) == 1) {
            if (checkPrime(n - i) == 1) {
                printf("%d = %d + %d\n", n, i, n - i);
                flag = 1;
            }
        }
    }

    if (flag == 0)
        printf("%d cannot be expressed as the sum of two prime numbers.\n", n);
    
    return 0;
}

// Function to check prime number
int checkPrime(int n) {
    int i, isPrime = 1;
    if (n == 0 || n == 1)
        isPrime = 0;
    else {
        for (i = 2; i <= n/2; ++i) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    return isPrime;
}


// Find the Sum of Natural Numbers using Recursion
#include <stdio.h>

int sum(int n);

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum = %d\n", sum(num));
    return 0;
}

// Recursive function to find sum of natural numbers
int sum(int n) {
    if (n != 0)
        return n + sum(n - 1);
    else
        return n;
}


// Find Factorial of a Number Using Recursion
#include <stdio.h>

unsigned long long factorial(int n);

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %llu\n", n, factorial(n));
    return 0;
}

// Recursive function to find factorial
unsigned long long factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}


// Find G.C.D Using Recursion
#include <stdio.h>

int gcd(int a, int b);

int main() {
    int a, b;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    printf("G.C.D of %d and %d is %d\n", a, b, gcd(a, b));
    return 0;
}

// Recursive function to find GCD
int gcd(int a, int b) {
    if (b != 0)
        return gcd(b, a % b);
    else
        return a;
}


// Convert Binary Number to Decimal and vice-versa

  
  #include <stdio.h>
#include <math.h>

int binaryToDecimal(long long n);
long long decimalToBinary(int n);

int main() {
    int choice;
    printf("Enter 1 to convert Binary to Decimal\n");
    printf("Enter 2 to convert Decimal to Binary\n");
    scanf("%d", &choice);

    if (choice == 1) {
        long long n;
        printf("Enter a binary number: ");
        scanf("%lld", &n);
        printf("Decimal number: %d\n", binaryToDecimal(n));
    } else if (choice == 2) {
        int n;
        printf("Enter a decimal number: ");
        scanf("%d", &n);
        printf("Binary number: %lld\n", decimalToBinary(n));
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}

// Function to convert binary to decimal
int binaryToDecimal(long long n) {
    int decimalNumber = 0, i = 0, remainder;
    while (n != 0) {
        remainder = n % 10;
        n /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }
    return decimalNumber;
}

// Function to convert decimal to binary
long long decimalToBinary(int n) {
    long long binaryNumber = 0;
    int remainder, i = 1;
    while (n != 0) {
        remainder = n % 2;
        n /= 2;
        binaryNumber += remainder * i;
        i *= 10;
    }
    return binaryNumber;
}


// Convert Octal Number to Decimal and vice-versa

  
  #include <stdio.h>
#include <math.h>

int octalToDecimal(int octalNumber);
int decimalToOctal(int decimalNumber);

int main() {
    int choice;
    printf("Enter 1 to convert Octal to Decimal\n");
    printf("Enter 2 to convert Decimal to Octal\n");
    scanf("%d", &choice);

    if (choice == 1) {
        int octal;
        printf("Enter an octal number: ");
        scanf("%d", &octal);
        printf("Decimal number: %d\n", octalToDecimal(octal));
    } else if (choice == 2) {
        int decimal;
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        printf("Octal number: %d\n", decimalToOctal(decimal));
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}

// Function to convert octal to decimal
int octalToDecimal(int octalNumber) {
    int decimalNumber = 0, i = 0, remainder;
    while (octalNumber != 0) {
        remainder = octalNumber % 10;
        octalNumber /= 10;
        decimalNumber += remainder * pow(8, i);
        ++i;
    }
    return decimalNumber;
}

// Function to convert decimal to octal
int decimalToOctal(int decimalNumber) {
    int octalNumber = 0, i = 1;
    while (decimalNumber != 0) {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    return octalNumber;
}


// Convert Binary Number to Octal and vice-versa

  
  #include <stdio.h>
#include <math.h>

int binaryToDecimal(long long n);
int decimalToOctal(int decimalNumber);

int main() {
    int choice;
    printf("Enter 1 to convert Binary to Octal\n");
    printf("Enter 2 to convert Octal to Binary\n");
    scanf("%d", &choice);

    if (choice == 1) {
        long long binary;
        printf("Enter a binary number: ");
        scanf("%lld", &binary);
        int decimal = binaryToDecimal(binary);
        printf("Octal number: %d\n", decimalToOctal(decimal));
    } else if (choice == 2) {
        int octal;
        printf("Enter an octal number: ");
        scanf("%d", &octal);
        int decimal = octalToDecimal(octal);
        printf("Binary number: %lld\n", decimalToBinary(decimal));
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}

// Function to convert binary to decimal
int binaryToDecimal(long long n) {
    int decimalNumber = 0, i = 0, remainder;
    while (n != 0) {
        remainder = n % 10;
        n /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }
    return decimalNumber;
}

// Function to convert decimal to octal
int decimalToOctal(int decimalNumber) {
    int octalNumber = 0, i = 1;
    while (decimalNumber != 0) {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    return octalNumber;
}

// Function to convert decimal to binary
long long decimalToBinary(int n) {
    long long binaryNumber = 0;
    int remainder, i = 1;
    while (n != 0) {
        remainder = n % 2;
        n /= 2;
        binaryNumber += remainder * i;
        i *= 10;
    }
    return binaryNumber;
}


// Reverse a Sentence Using Recursion
#include <stdio.h>

void reverseSentence();

int main() {
    printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}

// Function to reverse sentence
void reverseSentence() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}


// Calculate Power Using Recursion
#include <stdio.h>

double power(double base, int exponent);

int main() {
    double base;
    int exponent;
    printf("Enter base number: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    printf("%.2lf^%d = %.2lf\n", base, exponent, power(base, exponent));
    return 0;
}

// Recursive function to calculate power
double power(double base, int exponent) {
    if (exponent != 0)
        return (base * power(base, exponent - 1));
    else
        return 1;
}


// Calculate Average Using Arrays
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, average;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = sum / n;
    printf("Average = %.2f\n", average);
    return 0;
}


// Find Largest Element in an Array
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (i = 1; i < n; ++i) {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("Largest element = %d\n", max);
    return 0;
}


// Calculate Standard Deviation


#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float mean = 0.0, sum = 0.0, standardDeviation = 0.0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
        mean += arr[i];
    }
    mean /= n;
    for (i = 0; i < n; ++i) {
        sum += pow(arr[i] - mean, 2);
    }
    standardDeviation = sqrt(sum / n);
    printf("Standard Deviation = %.2f\n", standardDeviation);
    return 0;
}


// Add Two Matrices Using Multi-dimensional Arrays
#include <stdio.h>

int main() {
    int r, c, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int mat1[r][c], mat2[r][c], sum[r][c];
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("Enter element mat1[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("Enter element mat2[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("Sum of matrices:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}


// Multiply Two Matrices Using Multi-dimensional Arrays
#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    printf("Enter number of rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter number of rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2) {
        printf("Matrices cannot be multiplied!\n");
        return 0;
    }
    int mat1[r1][c1], mat2[r2][c2], result[r1][c2];
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c1; ++j) {
            printf("Enter element mat1[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; ++i) {
        for (j = 0; j < c2; ++j) {
            printf("Enter element mat2[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            result[i][j] = 0;
            for (k = 0; k < c1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("Product of matrices:\n");
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}


// Find Transpose of a Matrix
#include <stdio.h>

int main() {
    int r, c, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int mat[r][c], transpose[c][r];
    printf("Enter elements of matrix:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("Enter element mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Original matrix:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            transpose[j][i] = mat[i][j];
        }
    }
    printf("Transpose of matrix:\n");
    for (i = 0; i < c; ++i) {
        for (j = 0; j < r; ++j) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}


// Multiply two Matrices by Passing Matrix to a Function
#include <stdio.h>

void multiplyMatrix(int mat1[][3], int mat2[][3], int result[][3]);

int main() {
    int mat1[3][3], mat2[3][3], result[3][3], i, j;
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            printf("Enter element mat1[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            printf("Enter element mat2[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    multiplyMatrix(mat1, mat2, result);
    printf("Product of matrices:\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// Function to multiply two matrices
void multiplyMatrix(int mat1[][3], int mat2[][3], int result[][3]) {
    int i, j, k;
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            result[i][j] = 0;
            for (k = 0; k < 3; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}


// Access Array Elements Using Pointer
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr;
    ptr = arr;
    printf("Array elements using pointer:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", *(ptr + i));
    }
    return 0;
}


// Swap Numbers in Cyclic Order Using Call by Reference
#include <stdio.h>

void cyclicSwap(int *a, int *b, int *c);

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Before swapping: a = %d, b = %d, c = %d\n", a, b, c);
    cyclicSwap(&a, &b, &c);
    printf("After swapping: a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}

// Function to swap numbers in cyclic order
void cyclicSwap(int *a, int *b, int *c) {
    int temp;
    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}


// Find Largest Number Using Dynamic Memory Allocation


#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, max, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 1; i < n; ++i) {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("Largest element = %d\n", max);
    free(arr);
    return 0;
}


// Find the Frequency of Characters in a String
#include <stdio.h>

int main() {
    char str[100];
    int i, frequency[256] = {0};
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; ++i) {
        ++frequency[str[i]];
    }
    printf("Character frequency:\n");
    for (i = 0; i < 256; ++i) {
        if (frequency[i] != 0) {
            printf("%c: %d\n", i, frequency[i]);
        }
    }
    return 0;
}


// Count the Number of Vowels, Consonants and so on


#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0, symbols = 0, i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; ++i) {
        if (isalpha(str[i])) {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                ++vowels;
            } else {
                ++consonants;
            }
        } else if (isdigit(str[i])) {
            ++digits;
        } else if (isspace(str[i])) {
            ++spaces;
        } else {
            ++symbols;
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Symbols: %d\n", symbols);
    return 0;
}


// Remove all Characters in a String Except Alphabets
#include <stdio.h>

int main() {
    char str[100], cleanedString[100];
    int i, j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; ++i) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            cleanedString[j++] = str[i];
        }
    }
    cleanedString[j] = '\0';
    printf("String with only alphabets: %s\n", cleanedString);
    return 0;
}


// Find the Length of a String
#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[length] != '\0') {
        ++length;
    }
    printf("Length of string: %d\n", length - 1); // Excluding newline character
    return 0;
}


// Concatenate Two Strings
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    i = 0;
    while (str1[i] != '\0') {
        ++i;
    }
    j = 0;
    while (str2[j] != '\0') {
        str1[i++] = str2[j++];
    }
    str1[i] = '\0';
    printf("Concatenated string: %s\n", str1);
    return 0;
}


// Copy String Without Using strcpy()
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0;
    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    while (str1[i] != '\0') {
        str2[i] = str1[i];
        ++i;
    }
    str2[i] = '\0';
    printf("Copied string: %s\n", str2);
    return 0;
}


// Sort Elements in Lexicographical Order (Dictionary Order)


#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    char str[n][100], temp[100];
    printf("Enter strings:\n");
    for (i = 0; i < n; ++i) {
        scanf("%s", str[i]);
    }
    for (i = 0; i < n - 1; ++i) {
        for (j = i + 1; j < n; ++j) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    printf("Strings in lexicographical order:\n");
    for (i = 0; i < n; ++i) {
        printf("%s\n", str[i]);
    }
    return 0;
}


// Store Information of a Student Using Structure
#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct student s;
    printf("Enter information of student:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("Displaying Information:\n");
    printf("Name: %s", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
    return 0;
}


// Add Two Distances (in inch-feet system) using Structures
#include <stdio.h>

struct Distance {
    int feet;
    float inch;
};

int main() {
    struct Distance d1, d2, sum;
    printf("Enter first distance:\n");
    printf("Enter feet: ");
    scanf("%d", &d1.feet);
    printf("Enter inch: ");
    scanf("%f", &d1.inch);
    printf("Enter second distance:\n");
    printf("Enter feet: ");
    scanf("%d", &d2.feet);
    printf("Enter inch: ");
    scanf("%f", &d2.inch);
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;
    if (sum.inch >= 12.0) {
        sum.inch -= 12.0;
        ++sum.feet;
    }
    printf("Sum of distances: %d feet %.2f inches\n", sum.feet, sum.inch);
    return 0;
}


// Add Two Complex Numbers by Passing Structure to a Function
#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex add(struct Complex n1, struct Complex n2);

int main() {
    struct Complex n1, n2, result;
    printf("Enter real and imaginary parts of first complex number:\n");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("Enter real and imaginary parts of second complex number:\n");
    scanf("%f %f", &n2.real, &n2.imag);
    result = add(n1, n2);
    printf("Sum = %.1f + %.1fi\n", result.real, result.imag);
    return 0;
}

// Function to add two complex numbers
struct Complex add(struct Complex n1, struct Complex n2) {
    struct Complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return temp;
}


// Calculate Difference Between Two Time Periods
#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time difference(struct Time t1, struct Time t2);

int main() {
    struct Time startTime, stopTime, timeDifference;
    printf("Enter start time (hh:mm:ss): ");
    scanf("%d:%d:%d", &startTime.hours, &startTime.minutes, &startTime.seconds);
    printf("Enter stop time (hh:mm:ss): ");
    scanf("%d:%d:%d", &stopTime.hours, &stopTime.minutes, &stopTime.seconds);
    timeDifference = difference(startTime, stopTime);
    printf("Time difference: %d:%d:%d\n", timeDifference.hours, timeDifference.minutes, timeDifference.seconds);
    return 0;
}

// Function to calculate difference between two time periods
struct Time difference(struct Time t1, struct Time t2) {
    struct Time diff;
    if (t2.seconds > t1.seconds) {
        --t1.minutes;
        t1.seconds += 60;
    }
    diff.seconds = t1.seconds - t2.seconds;
    if (t2.minutes > t1.minutes) {
        --t1.hours;
        t1.minutes += 60;
    }
    diff.minutes = t1.minutes - t2.minutes;
    diff.hours = t1.hours - t2.hours;
    return diff;
}


// Store Information of Students Using Structure
#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student s[n];
    for (i = 0; i < n; ++i) {
        printf("Enter information of student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information of Students:\n");
    for (i = 0; i < n; ++i) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll: %d\n", s[i].roll);
        printf("Marks: %.2f\n", s[i].marks);
    }
    return 0;
}


// Store Data in Structures Dynamically


#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student *s;
    s = (struct student *)malloc(n * sizeof(struct student));
    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for (i = 0; i < n; ++i) {
        printf("Enter information of student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", (s + i)->name);
        printf("Enter roll number: ");
        scanf("%d", &(s + i)->roll);
        printf("Enter marks: ");
        scanf("%f", &(s + i)->marks);
    }
    printf("Displaying Information of Students:\n");
    for (i = 0; i < n; ++i) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", (s + i)->name);
        printf("Roll: %d\n", (s + i)->roll);
        printf("Marks: %.2f\n", (s + i)->marks);
    }
    free(s);
    return 0;
}


// Write a Sentence to a File
#include <stdio.h>

int main() {
    FILE *fptr;
    char sentence[100];
    fptr = fopen("sentence.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr, "%s", sentence);
    fclose(fptr);
    printf("Sentence written to file successfully.\n");
    return 0;
}


// Read the First Line From a File
#include <stdio.h>

int main() {
    FILE *fptr;
    char line[100];
    fptr = fopen("sentence.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fgets(line, sizeof(line), fptr);
    printf("First line of file: %s\n", line);
    fclose(fptr);
    return 0;
}


Display its own Source Code as Output
#include <stdio.h>

int main() {
    FILE *fptr;
    char ch;
    fptr = fopen(__FILE__, "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    while ((ch = fgetc(fptr)) != EOF) {
        putchar(ch);
    }
    fclose(fptr);
    return 0;
}


// Find Size of File
#include <stdio.h>

int main() {
    FILE *fptr;
    long size;
    fptr = fopen("sentence.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fseek(fptr, 0, SEEK_END);
    size = ftell(fptr);
    fclose(fptr);
    printf("Size of file: %ld bytes\n", size);
    return 0;
}


// Check if a File Exists
#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[100];
    printf("Enter filename: ");
    scanf("%s", filename);
    fptr = fopen(filename, "r");
    if (fptr != NULL) {
        printf("File exists.\n");
        fclose(fptr);
    } else {
        printf("File does not exist.\n");
    }
    return 0;
}


// Find Minimum Element in an Array
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    for (i = 1; i < n; ++i) {
        if (arr[i] < min)
            min = arr[i];
    }
    printf("Minimum element = %d\n", min);
    return 0;
}


// Sort Elements in Ascending Order
#include <stdio.h>

int main() {
    int n, i, j, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; ++i) {
        for (j = i + 1; j < n; ++j) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; ++i) {
        printf("%d\n", arr[i]);
    }
    return 0;
}


// Sort Elements in Descending Orde
#include <stdio.h>

int main() {
    int n, i, j, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; ++i) {
        for (j = i + 1; j < n; ++j) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array in descending order:\n");
    for (i = 0; i < n; ++i) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
