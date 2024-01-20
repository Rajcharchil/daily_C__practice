#include<stdio.h>
int main(void){
	// printf("jai hanumaan  ");
    // int a = 4*3/6*2;
	// printf(" %i ",a);
    
    // float radius;
	// printf("enter radius: ");
	// scanf("%f",&radius);
	// printf("%.2f",2*3.14*radius);

    // convert value float into int :- int a=(int)pi;

    // int a=15;
    // float pi=3.14;
    // int pi=(int)pi;
    // // int b=(2*pi*a);
    // printf("%d",pi);


    // int age=18;
    // printf("your age: ");
    // scanf("%d", &age);
    
    // if (age>=18){
    //     printf("eligible for vote ");  
    // }
    // else{
    //     printf("not eligible");
    // }
    // printf("\nthank you");
    // int n;
    // printf("enter a number:");
    // scanf("%d",&n);
    // if(n/3 && n/5){
    //     printf("pass");
   
    // else{
    //     printf("fail");
    // }    
       
    // }

    //=============================================

    // int a;
    // printf("enter a number:");
    // scanf("%d",&a);
	// if (a%3==0 && a%5==0){             //==
	// 	printf("divisible");
	// }
	// else{
	// 	printf("not divisible");
	// }
    // return 0;
    //=====================================================

    int age;
    printf("enter a age::");
    scanf("%d",&age);
    printf("%s\n",age >= 18 ? "vote":"not vote");
    return 0;


    // =========================================================

    #include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;
	double a, b;
	while (1) {
		printf("Enter an operator (+, -, *, /), if want to exit press x: ");
		scanf(" %c", &ch);
		// to exit
		if (ch == 'x')
			exit(0);
		printf("Enter two first and second operand: ");
		scanf("%lf %lf",&a,&b);
		// Using switch case we will differentiate
		// operations based on different operator
		switch (ch) {
		// For Addition
		case '+':
			printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
			break;
		// For Subtraction
		case '-':
			printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
			break;
		// For Multiplication
		case '*':
			printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
			break;
		// For Division
		case '/':
			printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
			break;
		// If operator doesn't match any case constant
		default:
			printf("Error! please write a valid operator\n");
		}
	}
}


}
