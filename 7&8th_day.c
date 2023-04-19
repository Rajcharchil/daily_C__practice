#include<stdio.h>

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

// // ====================================================
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

// take the input from the user three structure student which include three  
// first is name ,register number ,and marks of three subject??

struct student {
    char name [20];
    int regno;
    int m1[3];

};
int main (){
    struct student s;
    printf("enter the value\n");
    scanf("%d",&s.name);
    scanf("%d",&s.regno);
    int i;
    for(i=0;i<3;i++){
        scanf("%d",&s.m1[i]);
    }
    printf("%s %d",s.name,s.regno);
    for(i=0;i<3;i++){
        printf("%d",s.m1[i]);
    }

}


// =============================================================================================================

#include<stdio.h>
struct student {
    char *name;
    int Reg;
    int m1[3];
};
int main(){
    struct student s;
    printf("Enter the values\n: ");
    scanf("%s",&s.name);
    scanf("%d",&s.Reg);
    int i;
    for (i=0;i<3;i++){
        scanf("%d",&s.m1[i]);
    }
    printf("%s %d", s.name,s.Reg);
    for (i=0;i<3;i++){
        printf("%d",s.m1[i]);
    }
}
//===========================================================

#include <stdio.h>

// Define a Student structure
struct Student {
    char name[50];
    int reg_no;
    float marks[3];
};

int main() {
    // Define an array of three Student structures
    struct Student students[3];

    Loop through three times to get input for three students
   for (int i = 0; i < 3; i++) {
        printf("Enter details for Student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Register Number: ");
        scanf("%d", &students[i].reg_no);
        for (int j = 0; j < 3; j++) {
            printf("Enter marks for Subject %d: ", j+1);
            scanf("%f", &students[i].marks[j]);
        }
    }

    // Print the details of all students
    for (int i = 0; i < 3; i++) {
        printf("\nDetails of Student %d:\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("Register Number: %d\n", students[i].reg_no);
        printf("Marks: ");
        for (int j = 0; j < 3; j++) {
            printf("%.2f ", students[i].marks[j]);
        }
        printf("\n");
    }

    return 0;
}
//=======================================================================================
struct person{
    char name[20];
    int age;
    struct emp{
        int empid;
        float salary;

    }e;
};
int main(){
    struct person p;
    // struct emp e;
    scanf("%s",&p.name);
    scanf("%d",&p.age);
    scanf("%d",&p.e.empid);
    scanf("%f",&p.e.salary);
    printf("%f",p.e.salary);

    
}

//==============================================
// creat the structure number which include two integer value and one float value .takr the input from the user and display the values
// you have to create the paramitraies function and pass the paramitraies function

//=========================================================================================

//   : In this program you can use switch case statements to choose between any of
//  the conversion and after that you can use simple logic to make program which can convert units from one system to another.

int main()
{
    
    char input;
   float kmsToMiles = 0.621371;
   float inchesToFoot = 0.0833333;
   float cmsToInches = 0.393701;
   float poundToKgs = 0.453592;
   float inchesToMeters = 0.0254;
   float first, second;

   while (1)
   {
       printf("\nEnter the input character. q to quit\n       1. kms to miles\n       2. inches to foot\n       3. cms to inches\n       4. pound to kgs\n       5. inches to meters\n");
       printf("enter number 1 to 5 and q for quit:");
       scanf(" %c", &input);
    //    printf("The character is '%c'", input);
       switch (input)
       {
       case 'q':
        printf("Quitting the program...");
        goto end;
        break;

        case '1':
        printf("Enter quantity in terms of first unit:");
        scanf("%f", &first);
        second = first * kmsToMiles;
        printf("\n%.2f Kms is equal to %.2f Miles\n\n\n", first, second);
        break;

        case '2':
        printf("Enter quantity in terms of first unit:");
        scanf("%f", &first);
        second = first * inchesToFoot;
        printf("\n%f Inches is equal to %f Foot\n", first, second);
        break;

        case '3':
        printf("Enter quantity in terms of first unit:");
        scanf("%f", &first);
        second = first * cmsToInches;
        printf("\n%f Cms is equal to %f Inches\n", first, second);
        break;

        case '4':
        printf("Enter quantity in terms of first unit:");
        scanf("%f", &first);
        second = first * poundToKgs;
        printf("\n%f Pounds is equal to Kgs %f \n", first, second);
        break;

        case '5':
        printf("Enter quantity in terms of first unit:");
        scanf("%f", &first);
        second = first * inchesToMeters;
        printf("\n%f inches is equal to %f meters \n", first, second);
        break;

       default:
       printf("In default now");
           break;
       }
   }
   end:

    return 0;
}


// ==================================================================

/**
 * C program to count total number of vowel or consonant in a string
 */

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str[MAX_SIZE];
    int i, len, vowel, consonant;

    /* Input string from user */
    printf("Enter any string: ");
    gets(str);

    vowel = 0;
    consonant = 0;
    len = strlen(str);

    for(i=0; i<len; i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            /*
             * If the current character(str[i]) is a vowel
             */
            if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || 
               str[i] =='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'  )
                vowel++;
            else
                consonant++;
        }
    }

    printf("Total number of vowel = %d\n", vowel);
    printf("Total number of consonant = %d\n", consonant);

    return 0;
}


// ==============================================

struct student {
    char name[20];
    int regno;
    float percent;

}S;
int main(){
    FILE *fp;
    printf("enter the value:");
    scanf("%s",&S.name);
    scanf("%d",&S.regno);
    scanf("%f",&S.percent);
    fp=fopen("zstud.txt","W");
    fprintf(fp,"%s\n",S.name);
    fprintf(fp,"%d",S.regno);
fclose(fp);
fp=fopen("zstud.txt","r");  
fscanf(fp,"%s",S.name);

printf("%s",S.name);
fclose(fp);  

}
// =======================================================================================================



/*File program-> Different Operations on data available in file
Insert
Display
Delete
Update
Exit */
#include<stdio.h>
#include<stdlib.h>
struct student
{int rollno;
char name[30];
float mark;
}stud;
// FUNCTION TO INSERT RECORDS TO THE FILEvoid insert()
void insert()
{
FILE *fp;
fp = fopen("Record", "a");
printf("Enter the Roll no :");
scanf("%d",&stud.rollno);
printf("Enter the Name :");
scanf("%s", &stud.name);
printf("Enter the mark :");
scanf("%f", &stud.mark);
fwrite(&stud, sizeof(stud), 1, fp);fclose(fp);
}
// FUNCTION TO DISPLAY RECORDS
void disp()
{FILE *fp1;
fp1 = fopen("Record", "r");
printf("\nRoll Number\tName\tMark\n\n");
while (fread(&stud, sizeof(stud), 1, fp1))
printf(" %d\t\t%s\t%.2f\n", stud.rollno, stud.name, stud.mark);
fclose(fp1);
}
// FUNCTION TO DELETE A RECORD
void deletefile()
{
FILE *fpo;
FILE *fpt;
int r, s;
printf("Enter the Roll no you want to delete :");
scanf("%d", &r);
if (avlrollno(r) == 0)
printf("Roll no %d is not available in the file\n", r);
else
{fpo = fopen("Record", "r");
fpt = fopen("TempFile", "w");
while (fread(&stud, sizeof(stud), 1, fpo))
{
s = stud.rollno;
if (s != r)
fwrite(&stud, sizeof(stud), 1, fpt);
}
fclose(fpo);
fclose(fpt);
fpo = fopen("Record", "w");
fpt = fopen("TempFile", "r");
while (fread(&stud, sizeof(stud), 1, fpt))
fwrite(&stud, sizeof(stud), 1, fpo);
printf("\nRECORD DELETED\n");
fclose(fpo);
fclose(fpt);
}}// FUNCTION TO UPDATE THE RECORD
void update()
{int avl;
FILE *fpt;
FILE *fpo;
int s, r, ch;
printf("Enter roll number to update:");
scanf("%d", &r);
avl = avlrollno(r);
if (avl == 0)
{printf("Roll number %d is not Available in the file", r);
}
else
{fpo = fopen("Record", "r");
fpt = fopen("TempFile", "w");
while (fread(&stud, sizeof(stud), 1, fpo))
{
s = stud.rollno;
if (s != r)
fwrite(&stud, sizeof(stud), 1, fpt);
else
{
printf("\n\t1. Update Name of Roll Number %d", r);
printf("\n\t2. Update Mark of Roll Number %d", r);
printf("\n\t3. Update both Name and Mark of Roll Number %d", r);
printf("\nEnter your choice:");
scanf("%d", &ch);
switch (ch)
{case 1:
printf("Enter Name:");
scanf("%s", &stud.name);
break;
case 2:
printf("Enter Mark : ");
scanf("%f", &stud.mark);
break;
case 3:
printf("Enter Name: ");
scanf("%s", &stud.name);
printf("Enter Mark: ");
scanf("%f", &stud.mark);
break;
default:printf("Invalid Selection");
break;
}fwrite(&stud, sizeof(stud), 1, fpt);
}}
fclose(fpo);
fclose(fpt);
fpo = fopen("Record", "w");
fpt = fopen("TempFile", "r");
while (fread(&stud, sizeof(stud), 1, fpt))
{fwrite(&stud, sizeof(stud), 1, fpo);
}
fclose(fpo);
fclose(fpt);
printf("RECORD UPDATED");
}}
// FUNCTION TO CHECK GIVEN ROLL NO IS AVAILABLE //
int avlrollno(int rno)
{
FILE *fp;
int c = 0;
fp = fopen("Record", "r");
while (!feof(fp))
{
fread(&stud, sizeof(stud), 1, fp);

if (rno == stud.rollno)
{
fclose(fp);
return 1;
}
}
fclose(fp);
return 0;
}
main()
{
int c, emp;
do
{printf("\n\t---Select your choice---------\n");
printf("\n\t1. INSERT\n\t2. DISPLAY\n");
printf("\t3. DELETE\n\t4. UPDATE");
printf("\n\t5. EXIT");
printf("\n\n------------------------------------------\n");
printf("\nEnter your choice:");
scanf("%d", &c);
printf("\n");
switch (c)
{case 1:insert();
break;
case 2:
disp();
break;
case 3:
deletefile();
break;
case 4:
update();
break;
case 5:
exit(1);
break;
default:printf("\nYour choice is wrong\nPlease try again...\n");
break;
}}
while(c != 5);
}





//-------------------------------==========================================================================
// design banking system..

#include <stdio.h>

#define MAX_ACCOUNTS 10

struct account {
    int account_number;
    float balance;
};

struct account accounts[MAX_ACCOUNTS];
int num_accounts = 0;

void create_account() {
    if (num_accounts >= MAX_ACCOUNTS) {
        printf("Error: Maximum number of accounts reached.\n");
        return;
    }

    printf("Enter account number: ");
    scanf("%d", &accounts[num_accounts].account_number);

    printf("Enter initial balance: ");
    scanf("%f", &accounts[num_accounts].balance);

    num_accounts++;

    printf("Account created successfully.\n");
}

void deposit() {
    int account_number;
    float amount;
    int i;

    printf("Enter account number: ");
    scanf("%d", &account_number);

    for (i = 0; i < num_accounts; i++) {
        if (accounts[i].account_number == account_number) {
            printf("Enter deposit amount: ");
            scanf("%f", &amount);

            accounts[i].balance += amount;

            printf("Deposit successful. New balance is %.2f\n", accounts[i].balance);
            return;
        }
    }

    printf("Error: Account not found.\n");
}

void withdraw() {
    int account_number;
    float amount;
    int i;

    printf("Enter account number: ");
    scanf("%d", &account_number);

    for (i = 0; i < num_accounts; i++) {
        if (accounts[i].account_number == account_number) {
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);

            if (accounts[i].balance >= amount) {
                accounts[i].balance -= amount;

                printf("Withdrawal successful. New balance is %.2f\n", accounts[i].balance);
                return;
            } else {
                printf("Error: Insufficient funds.\n");
                return;
            }
        }
    }

    printf("Error: Account not found.\n");
}

void balance_inquiry() {
    int account_number;
    int i;

    printf("Enter account number: ");
    scanf("%d", &account_number);

    for (i = 0; i < num_accounts; i++) {
        if (accounts[i].account_number == account_number) {
            printf("Balance of account %d is %.2f\n", account_number, accounts[i].balance);
            return;
        }
    }

    printf("Error: Account not found.\n");
}

int main() {
    int choice;

    do {
        printf("\n");
        printf("1. Create account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Balance inquiry\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",choice);

    }while(1);
}