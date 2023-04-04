#include<stdio.h>
#include<math.h>
int main(){
    int a=1;

    printf("%d %d %d %d %d \n",a++,a++,a++,a++,a++);
    a=1;
    printf("%d %d %d %d %d \n",a++,a++,a++,++a,a++);
    a=1;
    printf("%d %d %d %d %d \n",a++,a++,++a,++a,a++);
    a=1;
    printf("%d %d %d %d %d \n",a++,++a,++a,++a,a++);
return 0;
}

////===============================================================
      ////calculate convert celsius to ferenhite

float convertTemp(float celsius);
int main(){
    float far=convertTemp(45.34);
    printf("%.2f",far);
    return 0;
}
float convertTemp(float celsius){
    float far = celsius*(9.0+5.0) + 32;
    return far;

}

// //========================================================================================

//// calculate marks percentage


int calculatePercentage(int math, int science,int physics);
int main(){
    int math=96;
    int science=89;
    int physics=87;
    printf("percentage is:%d",calculatePercentage(math,science,physics));
    return 0;
}
int calculatePercentage(int math ,int science, int physics){
return ((math + science + physics)/3);
}

// //=====================================================================================================================

int fib(int n);

int main(){
    fib(6);
    return 0;
}
int fib(int n){
    if(n==0){s
        return 0;

    }
    if (n==1){
        return 1;
    }
    int fibNm1=fib(n-1);
    int fibNm2=fib(n-2);
    int fibN = fibNm1 + fibNm2;
    printf("fib of %d is : %d \n",n, fibN);
    return fibN;
}


// ==========================================================================================================================


int main()
    {
        int main = 3;
        printf("%d", main);
        return 0;
    }


// ============================================================================================================================

int main(){
    int i=1;
    while(i<=10){
        printf("%d",i);
    }
    return 0;
}


// =====================================================================

// c array code 


void main(){
    int array[10]={2,6,4,8,10,12,89,68,45,37};
    int i,loc=-1,key;
    printf("enter integer value to search in array:");
    scanf("%d",&key);
    //attempt to locate searchkey in arraay a 

    for (i=0; i<10; i++){
        if(array[i]==key){
            loc=i+1;    //location of key is stored
            break;
        }
    }
    if (loc!=-1){
        printf("element found at: %d",loc);
    }
    else{
        printf("element not found");
    }
}


// ===================================================================================================================

int main(){
    int loc=-1,key , beg=0,last=9,mid;
    int a[10]={2,4,6,8,10,12,37,45,68,89};
    printf("enter integer value to search in:");
    scanf("%d",&key);

    while(beg<=last){
        mid=(beg+last)/2;
        if(a[mid]==key){
                loc=mid;
                break;
        }
        else if(a[mid]>key){
            last=mid-1;
        }
        else if(a[mid]<key){
            beg=mid+1;

        }
    }
    if(loc!=-1){
        printf("element found at %d",loc+1);
        
    }

}

//=============================================================================

int main(){
    int a[10]={2,6,4,8,10,12,89,68,45,37};
    int i,pass,hold;

    printf("data items in orginal order:");
    for(i=0; i<10; i++){
        printf("%4d",a[i]);
    }
    for(pass=1; pass<10; ++pass){
        for(i=0; i<10-1; ++i){

            if(a[i]>a[i+1]){
                hold=a[i];
                a[i]=a[i+1];
                a[i+1]=hold;
            }
        }
    }
    printf("\ndata items in ascending order:");
    for (i=0; i<10; ++i){
        printf("%4d",a[i]);

    }
}

//=================================================================================


int fibn(int n);

int main(){
      fibn(6);
      return 0;
}

int fibn(int n){
      if(n==0){
            return 0;
      }
      if(n==1){
            return 1;
      }
      int fibn1=(fibn(n-1));
      int fibn2=(fibn(n-2));
      int total = fibn1 + fibn2;
      printf("fib of %d is : %d \n",n,total);
      return total;
} 

//===============================================================================


int main(){
      int num,index=1;
      printf("enter a num:");
      scanf("%d",&num);
      do{
            printf("%d \t",index);
            index = index + 1;


      }while(index < num);
      return 0;
}

// ====================================================
int sum(int a, int b){
      return a+b;
}

int main(){
      int a,b,c;
      a=23;
      b=34;
      c=sum(a,b);
      // printf("enter a number:");
      // scanf("%d %d %d",a,b,c=sum(a,b));
      printf("the sum is %d",c);
      return 0;
}
//====================================================================

int main(){
     
}