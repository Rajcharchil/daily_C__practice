#include<stdio.h>
#include<math.h>
int main(){
    printf("jai shree ram");

    
    int a,b;
    printf("enter a number:");
    scanf("%d%d",&a,&b);
    printf("%d",a+b);
    printf("\t%d",a-b);
    return 0;
}

    // ====================================================================

    void printHW(int count);

    int main(){
        printHW(5);
        return 0;
    }
    // recursive function
    void printHW(int count){
        if(count == 0){
            return 0;
        }
        printf("Hello World\n");
        printHW(count-1);
    }


    // ========================================================================================

    int sum (int n);
    int main(){
        printf("sum is :%d",sum(5));
        return 0;
    }
    int sum(int n){
        if (n==1){
            return 1;
        }
        int sum1=sum(n-1);
        int sum2= sum1 + n;
    }


// ================================================================

    int fact(int n);

    int main(){
        printf("factorial is:%d",fact(10));
        return 0;

    }    
    int fact(int n){
        if(n==0){
            return 1;
        }
        int factNm1=fact(n-1);
        int factN=factNm1*n;
        return factN;

    }


    // ===================================================================

    float convertTemp(float celsius);

    int main(){
        float far = convertTemp(37);
        printf("far : %.2f",far);
        return 0;
    }
    float convertTemp(float celsius){
    float far = celsius*(9.0/5.0)+32;
    return far;
    }

    // =======================================================================

    int main(){


    int i=9;
    do{
        printf("%d,",i);
        i--;
        
    }while(i>=1);
    }



// =================================================================================
    int main(){
    int i=1;
    do{
        printf("%d,",i);
        i++;
        
    }while(i<=10);
    }

    // =================================================================================

    int main(){
    int i=7;
    do{
        i=i-1;
        printf("%d,",i);
        
        
    }while(i!=0);
    }
    // ===================================================================================
    int main(){
        int n=7;
        for (n=1; n<=9;n++){
            // if (n<8)
            // break;
            printf("%d",n);
            if(n==6)
            break;
        }
    }
    // ===========================================================================
    int main(){
        int i;

    for(int i=1; i<=10; i++){
         printf("%d,",i);
        if(i==6){
            continue;
        }
        // printf("%d,",i);
    }


// ====================================================================================================


    int n=10;
    while(n>0){
        printf("%d",n);
        if(n%2==1)
        continue;
    n=n-1;    
    }


// =======================================================================================================


    int i;

    for(int i=1; i<=9; i++){
        // printf("%d,",i);
        if(i==6){
            continue;
        }
        // printf("%d,",i);
    }


// ======================================================================================================

    int n=7;
    if(n%2==0){
        goto even;

    }
    even:

    printf("%d",n);

// ========================================================================================================



    int n=10;
    if(n>0)

    goto A;    
A:
printf("%d ",n);
n=n-1;


// =========================================================================================================


   int n=10;
    
A:
printf("%d ",n);
n=n-1;
   if(n>0)
    goto A; 


// ============================================================



    int x;
    printf("number:");
    scanf("%d",&x);
    if(x%2==0)
    goto even;                       //wrong code is given :
    else
    goto odd;
    even:
    printf("%d is even",x);
    n=n-1;

    

    // =============================================================================================


    printf(" %4d\n", 1 );
    printf(" %4d\n", 12);
    printf(" %4d\n", 123 );
    printf(" %4d\n", 1234 );
    printf("%4d\n", 12345 );

// ==========================================================================================




    printf(" %5d\n", 1 );
    printf(" %5d\n", 12);
    printf(" %5d\n", 123 );
    printf(" %5d\n", 1234 );
    printf(" %5d\n", 12345 );


// ==============================================


    float n=9.9999;
    printf("%.2f",n);
// =======================================


    int a=9.9999;
    printf("%d",a);


// =========================================================


	double x = 6.1, y = 4.8;

	
	double result = pow(x, y);
	printf("%.2f", result);  // .2lf for long float upto 16 decemal number

// ================================================




    float age=22;
    float *ptr=&age;
    float _a=*ptr;      //pointer:=a variable that stores the memory address of another veriable
    printf("%f",_a);

// ====================================================================



    int age=22;
    int *ptr=&age;
    int a=*ptr;      //pointer:=a variable that stores the memory address of another veriable
    printf("%d",a);

//=====================================================================================


    int age = 22;
    int *ptr = &age;
    printf("%p\n",&age);
    printf("%u\n",&age);

// =====================================================================


    // =print te value of 'i' from its printer to pointer

    int i=5;
    int *ptr =&i;
    int **pptr=&ptr;
    printf("%d\n",**pptr);

    return 0;

}
    


