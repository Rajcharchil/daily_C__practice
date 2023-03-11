#include<stdio.h>
#include<math.h>
void swap(int a,int b);
int main(){
    printf("jai shree ram");
    int n;
    printf("%d",2^9);
    int n= 65;
    if(n>=75){
        if(n>=95){
        printf("first");
        } else
        printf("pass");
    }
    printf("f"); 
}  

    // ==============================================================================
    int n;
   printf("enter a number:");
   scanf("%d",&n);

   float fact =1;
   for(float i=1; i<=n; i++){
    fact=fact*i;

    
   }
   printf("final factorial is %.0f",fact);




// =============================================================================================
 
    
   // // write a user define function to swap two number use call by value method....
    int a1,b1;
    scanf("%d%d",&a1,&b1);
    swap(a1,b1);

void swap(int a,int b){

    int temp;
    temp=a;
    a=b;
    b=temp;
    printf(" %d %d",a,b);
       

int sum(int n1,int n2);
int main(){
    int a1,b1;
    scanf("%d %d",&a1,&b1);
    printf("%d",sum(&a1,&b1));
    }
int sum(int n1,int n2){
    return n1+n2;
}
}

////=============================================================================



int main(){
    int n=3;
    printf("%f",n);
}


// //============================================================================

int main(){
    int i=-5;
    int k =i%4;
    printf("%d\n",k);
}


////==================================================================================
int main(){
    int b=4*6+3*4<3?4:3;
    printf("%d\n",b);
}



////======================================================================================
#include <stdio.h>

int main() {
    int var_name;
    printf("Enter an integer: ");
    scanf("%u", &var_name);
    printf("You entered %u\n", var_name);
    return 0;
}


///========================================================================================
int main(){
    int i=5,j=6;
    int k =j|i;
    printf("%d\n",k);
}


///========================================================================================

void main(){
    int p=1;
    while (p<5){
        ++p;

        printf("hi");
        
    }
    
}



///========================================================================================

void main(){
    int i=0,j=1;
    while(j==0){
        printf("hello");
        j=j+2;
    }
}


///========================================================================================

int main(){
    int a=10,b=12;
    if(a+b>22/12)
    printf("hello");
    else
    printf("hi");
    return 0;
}

///========================================================================================

int main(){
    int x=2,y,z;
    y=++x;
    z=x++;
    printf("%d%d%d",x,y,z);
    return 0;
}

///========================================================================================

int main(){
    int a=0,b=20,c=19,d;
    d=a||b>c++;
    printf("%d",d);
    return 0;

}

///========================================================================================

int main(){
    int a=2*3/8+90%8*2-12/9;
    printf("%d",a);
    return 0;

}

///========================================================================================

int main(){
    int a=3,b;
    char c='C';   //error
    b=a+c;
    printf("%c",b);
    return 0;
}

///========================================================================================


int main(){
    int x=1;
    switch(x){
        case 101>100:
        printf("hi");
        case 2:
        printf("hello");
    
    }
    return 0;

}

///========================================================================================



int fact (int n);
int main(){
    int a=5;
    printf("%d",fact(a));

}
int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);

    }
}

///========================================================================================


int r=0;
int main(){
    int a=123;
    printf("%d",rev(a));
}
int rev(int n)
int fibonacci(int i){
    if(i==0){
        return 0;
    }

    else if(i==1){
        return 1;
    }
    else 
    return fibonacci(i-1) + fibonacci(i-2);
}

///========================================================================================


int main(){
    int i;
    for(i=0; i<5; i++){
        printf("%d\t\n",fibonacci(i));
            
        }
}

///========================================================================================


int main(){
    char ch[10];
    gets(ch);
    puts(ch);
}

///========================================================================================

int main(){
    int h;
    char h='97';
    printf("%c",h);
    return 0;
}

///========================================================================================


int main(){
    int a=3,b;
    char c='C';   //error
    b=a+c;
    printf("%c",b,);
    return 0;
}

///========================================================================================

   int age;
    printf("enter a age::");
    scanf("%d",&age);
    printf("%s\n",age >= 18 ? "vote":"not vote");
    return 0;


  //  // =========================================================

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










