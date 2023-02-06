#include<stdio.h>
#include<stdio.h>
// while loop
int main(){
    int n;
    printf("enter a number:");
    scanf("%d", &n);

    // =======================================

    int i=0;
    while(i <= n){
        printf("%d\t",i);
        i++;
    }
    // ==================================


    // //in for loop
    for(i=0; i<=n; i++){
        printf("%d\n\t",i);
    }
    for(i=6; i<=n; i+=2){
        printf("%d\t",i);
    }
    // ========================================

// do while loop
    int i=100;
    do{
        printf("%d,",i);
        i--;
    }while(i>=9);

    // ===================================================

    int i=1;
    do{
        printf("%d,",i);
        i++;
        
    }while(i<=9);

    //==========================================================

    int n;
    printf("enter a number:");
    scanf("%d",&n);
     
    int sum=0;
    for(int i=1; i<=n; i++){
        
        sum+=i;
    }
    printf("sum is %d\n",sum);

    for(int i=n; i>=1; i--){
        printf("%d,",i);
    }

    //=====================================================================

    int n;
    printf("enter a number:");
    scanf("%d",&n);
     
    int sum=0;
    for(int i=1, j=n; i<=n && j>=1; i++,j--){
        sum+=i;
        printf("%d\n",j);
    }
    printf("sum is %d\n",sum);

//===============================================================================

    int n;
    printf("enter a number:");
    scanf("%d",&n);
     
    int sum=0;
    for(int  j=n;  j>=1; j--){
        sum+=j;
        printf("%d\n",j);
    }
    printf("sum is %d\n",sum);

 //======================================================================================== 
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    
    for(int i=1; i<=10; i++){
        printf("%d\n",n*i);
    }
// =======================================================================================
    int n=2;
    for(int i=1; i<=100; i++){
        if(i==50){
            break;
        }
        printf("%d\t",i);
    }
// =========================================================================================
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    for(int i=1; i<=50; i++){
        if(n%2 !=0){
            break;
        }
        
        printf("%d,",n);
    }

   // =============================================================
    int n;



    do {

        printf("enter a number:");
        scanf("%d",&n);
        printf("%d",&n);

        if(n % 7 ==0){

            break;
        }


    }while(1);
    printf("thank you");

    // =======================================================================
    int i;

    for(int i=1; i<=10; i++){
        if(i%2==0){
            continue;
        }
        printf("%d,",i);
    }
//=========================================================================

// calculate factorial
   int n;
   printf("enter a number:");
   scanf("%d",&n);

   float fact =1;
   for(float i=1; i<=n; i++){
    fact=fact*i;

    
   }
   printf("final factorial is %d",fact);

// ==========================================================================

// reverse table

    int n;

    for(int i=20; i>=2; i--){
        if(i%2 !=0){            //printf("%d",n*i);
            continue;
        }
        printf("%d,",i);
    }    

    // ===============================================================================

    sum of all 5 to 50 numbers
    int sum=0;

    for(int i=5; i<=50; i++){
        sum+=i;
        
       printf("%d,",sum);
    }
    printf("\n sum is =%d",sum);    

    


    return 0;
}

// ==========================================================================================


void namastey();
void hello();

int main(){
    printf("i for namastey and e for hello:");
    char ch;
    scanf("%c",&ch);

    if(ch == 'i'){
        namastey();
    }
    else{
        hello();
    }


    return 0;

}
void namastey(){
    printf("namastey \n");
}
void hello(){
    printf("hello\n");
}