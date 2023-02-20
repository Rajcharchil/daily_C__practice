#include<stdio.h>
#include<math.h>
int main(){
    float a=9,b=2;
    printf("%f",a/b);
    printf("%f",a*b);
    printf("%f",ab);
    printf("%f",a/b);
    printf("%f",a/b);

// ===============================================================

    int x;
	printf("enter no.:");
	scanf("%d",&x);
	printf("%d", x>9 && x<100);



// ==============================================================

    int a;   //=25<<3;
    printf("%d",sizeof (a));

// ================================================

    int n = 4;
    printf("%f" pow(n , 2));


// ===================================================================


    int n;
    printf("enter a number:");
    scanf("%d",&n);
    
    if(n>0){
        printf("+v");

    }
    else if(n==0){
        printf("neutral");
    }
    else{
        printf("-ve");
    }


// =====================================================================

    int a;
    printf("enter a number:");
    scanf("%d",&a);
    printf(a>0?"+ve":"-ve");




// ===================================================================

    
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    
    if(n>0){
        if(a%2==0){
            printf("even");
        else{
            printf("odd");}

        
        }
        
        // printf("+v");

    }
    else if(n==0){
        printf("neutral");
    }
    else{
        printf("-ve");
    }


// ===================================================================


    int n;
    printf("enter a number:");
    scanf("%d",&n);

    for(int i=1; i<=15; i++){
        if(n%5==0){
            break;
        }
        
        printf("%d,",n+i);
    }



// =================================================================


    int a;
    printf("enter a number:");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("january");
        break;

        case 2:
        printf("feb");
        break;

        case 3:
        printf("march");
        break;

        default:
        printf("invalid");
    }



// cosider three inputs find the largest number among the three input
// write the c program to check weather the person is eligibal to vote or not using terinary or conditional statement
// write a c program to find the second largest number among the three number
// design the calculator
// write a program to check the number is divisible by 2 and 4


    int a;
    printf("enter a number:");
    scanf("%d",&a);
    switch(a/2 && a/4){
        case 1:
        printf("january");
        break;

        case 2:
        printf("feb");
        break;

        case 3:
        printf("march");
        break;

        default:
        printf("invalid");
    }


// ===================================================================

    int x;


    printf("enter a no:");
    scanf("%d",&x);
    if(x%2==0 && x%4==0){
        printf("yes its divisible by 2");
    }
    else{
        printf("not divisible");
    }
    

    // ===========================================================================================


    int age;
    printf("\nenter a age::");
    scanf("%d",&age);
    printf("%s\n",age >= 18 ? "eligibal for vote":"not vote");
    return 0;


    // ========================================================
       
   int num1,num2,num3;	
   printf(" enter number 1:");
   scanf("%d",&num1);
   printf("enter number 2:");
   scanf("%d",&num2);
   printf("enter number 3:");
   scanf("%d",&num3);
   printf("largest numer:%d",num2<num1 ? num1:num2);

// =========================================================================



// dicitonary

 

	int a,b,res ;
    printf("enter a number:");
    scanf("%d %d "&a,&b);
    // printf("enter a number:");
    // scanf("%d"&b);

	// printing a and b
	printf("a is %d and b is %d\n", a, b);

	res = a + b; // addition
	printf("a + b is %d\n", res);

	res = a - b; // subtraction
	printf("a - b is %d\n", res);

	res = a * b; // multiplication
	printf("a * b is %d\n", res);

	res = a / b; // division
	printf("a / b is %d\n", res);

	res = a % b; // modulus
	printf("a %% b is %d\n", res);


    // ========================================================================================


//    calculator

       
    char ch;
	int a, b;
	while (1) {
		printf("Enter an operator (+, -, *, /),(if want to exit press x): ");
		scanf(" %c", &ch);
		
		if (ch == 'x')
			exit(0);
		printf("Enter two first and second number: ");
		scanf("%d %d",&a,&b);
	
		switch (ch) {
		
		case '+':
			printf("%d + %d = %d\n", a, b, a + b);
			break;
		
		case '-':
			printf("%d - %d = %d\n", a, b, a - b);
			break;
		
		case '*':
			printf("%d * %d = %d\n", a, b, a * b);
			break;
		
		case '/':
			printf("%d / %d = %d\n", a, b, a / b);
			break;
		// If operator doesn't match any case constant
		default:
			printf("Error! please write a valid operator\n");
		}
	}



    // ===========================================================================================
  

//    multipication 

    int n,a=1;
    printf("enter a number:");
    scanf("%d",&n);
    
    // int i=1;
    while(a<=10){
        printf("%d*%d=%d\n",n,a,n*a);

        a++;
    }


    // ===============================================================

    
    int n;
    printf("enter a number:");
    scanf("%d", &n);

    // // =======================================

    int i=0;
    while(i <= n){
        printf("%d\t",i);
        i++;
    }


// ===============================================================================================

    int a=1;
    int b=1;
    while(a<10){
        b=b+1;
        printf("charchil\t");
    }


// ========================================================================================
    int n=10,i=1,sum=0:
    while(i<=n){

        sum=sum+i;
        i=i+1;
        printf("%d\n",sum);
    }


    // =====================================================================
    
    
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    float fact =1;
    for(float i=1; i<=n; i++){
    fact=fact*i;
   }
    printf("final factorial is %d",fact);


// ===============================================================
     

    int n;
    printf("enter a number:");
    scanf("%d",&n);
     
    int sum=0;
    for(int i=1, j=n; i<=n && j>=1; i++,j--){
        sum+=i;
        printf("%d\n",j);
    }
    printf("sum is %d\n",sum);

    int b=2,c=4;
    int power = pow(b,c);
    printf("%d",power);
    int a=1.99999;
    printf("%d",a);




	return 0;
}

    




      

