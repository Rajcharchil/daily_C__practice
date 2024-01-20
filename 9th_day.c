#include<stdio.h>
#include<math.h>


// Creating Account functionality

struct account{
    int acc_number;
    char acc_name[50];
    float balance;
};

struct transaction{
    int trans_number;
    float amount;

};

struct payee{
    char name[50];
    int acc_number;

};

void adminpanel(){
    int choice;
    printf("welcome to the admin panel!\n");
    printf("1.add account\n");
    printf("3.exit\n");
    printf("please enter your choice from above:");
    scanf("%d",&choice);

    switch (choice){
        case 1:{
            struct account customer;
            printf("enter account number:");
            scanf("%d",&customer.acc_number);
            printf("enter account name:");
            scanf("%s",&customer.acc_name);
            printf("enter account balance");
            scanf("%f",&customer.balance);
            printf("Accout number: %d\n",customer.acc_number);
            printf("Account name: %s\n",customer.acc_name);
            printf("Account balance: %2.f\n",customer.balance);

            FILE *  fp;
            fp = fopen("accounts.text","a");
            fprintf(fp,"%d %s %.2f\n",customer.acc_number,customer.acc_name,cuatomer.balance);
            fclose(fp);
            break;
        }
        case 2:
        {
            printf("remove Account functionality not implemented yet.\n");
            break;

        }
        case 3:{
        printf("Exiting program.\n");
        break;
        }
        default:
        printf("invalid choice.\n");
        break;
    }
}
void userpanel(){
    int choice=0;
    int count=0;
    const int MAX_PAYEES=10;
    const int MAX_TRANSACTIONS=10;

    printf("welcome to online banking system!\n");
    printf("please choose a module:\n");
    printf("1.Account status:\n");
    printf("2.Account opening:\n");
    printf("3.change password:\n");
    printf("4. payee management:\n");
    printf("5.view statement:\n");
    printf("please enter your choice from above:\n");
    scanf("%d",choice);

    switch (choice){
        case 1:{
            struct account customer;
            printf("Enter account number: ");
            scanf("%d", &customer.acc_number);
            printf("Enter account name: ");
            scanf("%s", customer.acc_name);
            printf("Enter account balance: ");
            scanf("%f", &customer.balance);
            printf("Account number: %d\n", customer.acc_number);
            printf("Account name: %s\n", customer.acc_name);
            printf("Account balance: %.2f\n", customer.balance);

            // write account info to file
            FILE *fp;
            fp = fopen("account_info.txt", "w");
            if (fp == NULL)
            {
            printf("Error opening file!\n");
            return;
            }
            fprintf(fp, "Account number: %d\n", customer.acc_number);
            fprintf(fp, "Account name: %s\n", customer.acc_name);
            fprintf(fp, "Account balance: %.2f\n", customer.balance);
            fclose(fp);
            break;
            }
            case 2:{
            struct account customer;
            printf("Enter account number: ");
            scanf("%d", &customer.acc_number);
            printf("Enter account name: ");
            scanf("%s", customer.acc_name);
            printf("Enter account balance: ");
            scanf("%f", &customer.balance);
            printf("Account created successfully!\n");
            printf("Account number: %d\n", customer.acc_number);
            printf("Account name: %s\n", customer.acc_name);
            printf("Account balance: %.2f\n", customer.balance);
            // write account info to file
            FILE *fp;
            fp = fopen("account_info.txt", "w");
            if (fp == NULL)
            {
            printf("Error opening file!\n");
            return;
            }
            fprintf(fp, "Account number: %d\n", customer.acc_number);
            fprintf(fp, "Account name: %s\n", customer.acc_name);
            fprintf(fp, "Account balance: %.2f\n", customer.balance);
            fclose(fp);
            break;
            }
            case 3:{
            char password[20];
            printf("Enter current password: ");
            scanf("%s", password);
            if (strcmp(password, "password123") == 0)
            {
            printf("Enter new password: ");
            scanf("%s", password);
            printf("Password changed successfully!\n");
            // write new password to file
            FILE *fp;
            fp = fopen("password.txt", "w");
            if (fp == NULL){
            printf("Error opening file!\n");
            return;
            }

            fprintf(fp, "%s", password);
            fclose(fp);
            }
            else{
            printf("Invalid password!\n");
            }
            break;
            }
            case 4:{
            struct payee payees[10];
            int payeeCount = 0; // rename count variable to payeeCount
            int payeeChoice = 0;
            printf("Payee Management\n");
            printf("1. Add Payee\n");
            printf("2. Remove Payee\n");
            printf("3. View Payee List\n");
            printf("Please Enter Your Choice From Above : ");
            scanf("%d", &payeeChoice);

            switch (payeeChoice){
                case 1:{
                    if (payeeCount < MAX_PAYEES)
                    {
                        printf("Enter payee name: ");
                        scanf("%s", payees[payeeCount].name);
                        printf("Enter payee account number: ");
                        scanf("%d", &payees[payeeCount].acc_number);
                        printf("Payee added successfully!\n");
                        // write payee info to file
                        FILE *fp;
                        fp = fopen("payee_info.txt", "a");
                        if (fp == NULL)
                        {
                            printf("Error opening file!\n");
                            return;
                        }
                        fprintf(fp, "Payee name: %s\n", payees[payeeCount].name);
                        fprintf(fp, "Payee account number: %d\n",
                        payees[payeeCount].acc_number);
                        fclose(fp);
                        payeeCount++; // increment payee count after successful addition
                        }
                        else
                        {
                        printf("Payee list is full!\n");
                        }
                        break;

                    }
                case 2:
                {
                if (payeeCount > 0) {
                    printf("Enter the index of the payee to remove: ");
                    int index;
                    scanf("%d", &index);
                    if (index >= 0 && index < payeeCount) {
                        printf("Removing payee: %s\n", payees[index].name);
                        // shift elements to remove the payee
                        for (int i = index; i < payeeCount - 1; i++)
                        {
                        payees[i] = payees[i + 1];
                        }
                        payeeCount--; // decrement payee count after successful removal
                        
                        // write updated payee list to file
                        FILE *fp;
                        fp = fopen("payee_info.txt", "w");
                        if (fp == NULL)
                        {
                        printf("Error opening file!\n");
                        return;
                        }
                        for (int i = 0; i < payeeCount; i++)
                        {
                        fprintf(fp, "Payee name: %s\n", payees[i].name);
                        fprintf(fp, "Payee account number: %d\n",payees[i].acc_number);
                }
                fclose(fp);
                }
                else
                {
                printf("Invalid payee index!\n");
                }
                }
            else
            {
            printf("Payee list is empty!\n");
            }
            break;
        }
        case 3:
        {
            if (payeeCount > 0)
            {
                printf("Payee list:\n");
                for (int i = 0; i < payeeCount; i++)
                {
            printf("%d. %s (%d)\n", i + 1, payees[i].name,payees[i].acc_number);
            }
            }
            else
            {
                printf("Payee list is empty!\n");
            }
            break;
            }
            default:
                printf("Invalid choice!\n");
            }
            break;
    }   
    case 5:
        {
        printf("View Statement\n");
        // read account info from file
        FILE *fp;
        char ch;
        fp = fopen("account_info.txt", "r");
        if (fp == NULL)
        {
        printf("Error opening file!\n");
        return;
        }
        while ((ch = fgetc(fp)) != EOF)
        {
        printf("%c", ch);
        }
        fclose(fp);
        // read payee info from file
        fp = fopen("payee_info.txt", "r");
        if (fp == NULL)
        {
        printf("Error opening file!\n");
        return;
        }
        while ((ch = fgetc(fp)) != EOF)
        {
        printf("%c", ch);
        }
        fclose(fp);
        break;
        }
        default:
        printf("Invalid option!\n");
        break;
    }
}
int main(){
        int choice = 0;
        printf("Welcome to Online Banking System!\n");
        printf("Please choose a module:\n");
        printf("1. Admin Panel\n");
        printf("2. User Panel\n");
        printf("Please Enter Your Choice From Above : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            adminPanel();
            break;
        case 2:
            userPanel();
            break;
        default:
            printf("Invalid choice.\n");
            break;
        }
        return 0;
    }

 


                        







// // //================================





#include <stdio.h>
#include <string.h>
struct account
{
int acc_number;
char acc_name[50];
float balance;
};
struct transaction
{
int trans_number;
char trans_type[50];
float amount;
};
struct payee
{
char name[50];
int acc_number;
};
void adminPanel()
{
int choice;
printf("Welcome to the Admin Panel!\n");
printf("1. Add Account\n");
printf("2. Remove Account\n");
printf("3. Exit\n");
printf("Please Enter Your Choice From Above : ");
scanf("%d", &choice);
switch (choice)
{
case 1:
{
struct account customer;
printf("Enter account number: ");
scanf("%d", &customer.acc_number);
printf("Enter account name: ");
scanf("%s", customer.acc_name);
printf("Enter account balance: ");
scanf("%f", &customer.balance);
printf("Account number: %d\n", customer.acc_number);
printf("Account name: %s\n", customer.acc_name);
printf("Account balance: %.2f\n", customer.balance);
FILE *fp;
fp = fopen("accounts.txt", "a");
fprintf(fp, "%d %s %.2f\n", customer.acc_number, customer.acc_name,
customer.balance);
fclose(fp);
break;
}
case 2:
{
printf("Remove Account functionality not implemented yet.\n");
break;
}
case 3:
{
printf("Exiting program.\n");
break;
}
default:
printf("Invalid choice.\n");
break;
}
}
void userPanel()
{
int choice = 0;
int count = 0;
const int MAX_PAYEES = 10;
const int MAX_TRANSACTIONS = 10;
printf("Welcome to Online Banking System!\n");
printf("Please choose a module:\n");
printf("1. Account Status\n");
printf("2. Account Opening\n");
printf("3. Change Password\n");
printf("4. Payee Management\n");
printf("5. View Statement\n");
printf("Please Enter Your Choice From Above : ");
scanf("%d", &choice);
switch (choice)
{
case 1:
{
struct account customer;
printf("Enter account number: ");
scanf("%d", &customer.acc_number);
printf("Enter account name: ");
scanf("%s", customer.acc_name);
printf("Enter account balance: ");
scanf("%f", &customer.balance);
printf("Account number: %d\n", customer.acc_number);
printf("Account name: %s\n", customer.acc_name);
printf("Account balance: %.2f\n", customer.balance);
// write account info to file
FILE *fp;
fp = fopen("account_info.txt", "w");
if (fp == NULL)
{
printf("Error opening file!\n");
return;
}
fprintf(fp, "Account number: %d\n", customer.acc_number);
fprintf(fp, "Account name: %s\n", customer.acc_name);
fprintf(fp, "Account balance: %.2f\n", customer.balance);
fclose(fp);
break;
}
case 2:
{
struct account customer;
printf("Enter account number: ");
scanf("%d", &customer.acc_number);
printf("Enter account name: ");
scanf("%s", customer.acc_name);
printf("Enter account balance: ");
scanf("%f", &customer.balance);
printf("Account created successfully!\n");
printf("Account number: %d\n", customer.acc_number);
printf("Account name: %s\n", customer.acc_name);
printf("Account balance: %.2f\n", customer.balance);
// write account info to file
FILE *fp;
fp = fopen("account_info.txt", "w");
if (fp == NULL)
{
printf("Error opening file!\n");
return;
}
fprintf(fp, "Account number: %d\n", customer.acc_number);
fprintf(fp, "Account name: %s\n", customer.acc_name);
fprintf(fp, "Account balance: %.2f\n", customer.balance);
fclose(fp);
break;
}
case 3:
{
char password[20];
printf("Enter current password: ");
scanf("%s", password);
if (strcmp(password, "password123") == 0)
{
printf("Enter new password: ");
scanf("%s", password);
printf("Password changed successfully!\n");
// write new password to file
FILE *fp;
fp = fopen("password.txt", "w");
if (fp == NULL)
{
printf("Error opening file!\n");
return;
}
fprintf(fp, "%s", password);
fclose(fp);
}
else
{
printf("Invalid password!\n");
}
break;
}
case 4:
{
struct payee payees[10];
int payeeCount = 0; // rename count variable to payeeCount
int payeeChoice = 0;
printf("Payee Management\n");
printf("1. Add Payee\n");
printf("2. Remove Payee\n");
printf("3. View Payee List\n");
printf("Please Enter Your Choice From Above : ");
scanf("%d", &payeeChoice);
switch (payeeChoice)
{
case 1:
{
if (payeeCount < MAX_PAYEES)
{
printf("Enter payee name: ");
scanf("%s", payees[payeeCount].name);
printf("Enter payee account number: ");
scanf("%d", &payees[payeeCount].acc_number);
printf("Payee added successfully!\n");
// write payee info to file
FILE *fp;
fp = fopen("payee_info.txt", "a");
if (fp == NULL)
{
printf("Error opening file!\n");
return;
}
fprintf(fp, "Payee name: %s\n", payees[payeeCount].name);
fprintf(fp, "Payee account number: %d\n",
payees[payeeCount].acc_number);
fclose(fp);
payeeCount++; // increment payee count after successful addition
}
else
{
printf("Payee list is full!\n");
}
break;
}
case 2:
{
if (payeeCount > 0)
{
printf("Enter the index of the payee to remove: ");
int index;
scanf("%d", &index);
if (index >= 0 && index < payeeCount)
{
printf("Removing payee: %s\n", payees[index].name);
// shift elements to remove the payee
for (int i = index; i < payeeCount - 1; i++)
{
payees[i] = payees[i + 1];
}
payeeCount--; // decrement payee count after successful
removal
// write updated payee list to file
FILE *fp;
fp = fopen("payee_info.txt", "w");
if (fp == NULL)
{
printf("Error opening file!\n");
return;
}
for (int i = 0; i < payeeCount; i++)
{
fprintf(fp, "Payee name: %s\n", payees[i].name);
fprintf(fp, "Payee account number: %d\n",
payees[i].acc_number);
}
fclose(fp);
}
else
{
printf("Invalid payee index!\n");
}
}
else
{
printf("Payee list is empty!\n");
}
break;
}
case 3:
{
if (payeeCount > 0)
{
printf("Payee list:\n");
for (int i = 0; i < payeeCount; i++)
{
printf("%d. %s (%d)\n", i + 1, payees[i].name,
payees[i].acc_number);
}
}
else
{
printf("Payee list is empty!\n");
}
break;
}
default:
printf("Invalid choice!\n");
}
break;
}
case 5:
{
printf("View Statement\n");
// read account info from file
FILE *fp;
char ch;
fp = fopen("account_info.txt", "r");
if (fp == NULL)
{
printf("Error opening file!\n");
return;
}
while ((ch = fgetc(fp)) != EOF)
{
printf("%c", ch);
}
fclose(fp);
// read payee info from file
fp = fopen("payee_info.txt", "r");
if (fp == NULL)
{
printf("Error opening file!\n");
return;
}
while ((ch = fgetc(fp)) != EOF)
{
printf("%c", ch);
}
fclose(fp);
break;
}
default:
printf("Invalid option!\n");
break;
}
}
int main()
{
int choice = 0;
printf("Welcome to Online Banking System!\n");
printf("Please choose a module:\n");
printf("1. Admin Panel\n");
printf("2. User Panel\n");
printf("Please Enter Your Choice From Above : ");
scanf("%d", &choice);
switch (choice)
{
case 1:
adminPanel();
break;
case 2:
userPanel();
break;
default:
printf("Invalid choice.\n");
break;
}
}



// =================================================================

#include <stdio.h>
#include <string.h>
struct account
{
int acc_number;
char acc_name[50];
float balance;
};
struct transaction
{
int trans_number;
char trans_type[50];
float amount;
};
struct payee
{
char name[50];
int acc_number;
};
void adminPanel()
{
int choice;
printf("Welcome to the Admin Panel!\n");
printf("1. Add Account\n");
printf("2. Remove Account\n");
printf("3. Exit\n");
printf("Please Enter Your Choice From Above : ");
scanf("%d", &choice);
switch (choice)
{
case 1:
{
struct account customer;
printf("Enter account number: ");
scanf("%d", &customer.acc_number);
printf("Enter account name: ");
scanf("%s", customer.acc_name);
printf("Enter account balance: ");
scanf("%f", &customer.balance);
printf("Account number: %d\n", customer.acc_number);
printf("Account name: %s\n", customer.acc_name);
printf("Account balance: %.2f\n", customer.balance);
FILE *fp;
fp = fopen("accounts.txt", "a");
fprintf(fp, "%d %s %.2f\n", customer.acc_number, customer.acc_name,
customer.balance);
fclose(fp);
break;
}
case 2:
{
printf("Remove Account functionality not implemented yet.\n");
break;
}
case 3:
{
printf("Exiting program.\n");
break;
}
default:
printf("Invalid choice.\n");
break;
}
}
void userPanel()
{
int choice = 0;
int count = 0;
const int MAX_PAYEES = 10;
const int MAX_TRANSACTIONS = 10;
printf("Welcome to Online Banking System!\n");
printf("Please choose a module:\n");
printf("1. Account Status\n");
printf("2. Account Opening\n");
printf("3. Change Password\n");
printf("4. Payee Management\n");
printf("5. View Statement\n");
printf("Please Enter Your Choice From Above : ");
scanf("%d", &choice);
switch (choice)
{
case 1:
{
struct account customer;
printf("Enter account number: ");
scanf("%d", &customer.acc_number);
printf("Enter account name: ");
scanf("%s", customer.acc_name);
printf("Enter account balance: ");
scanf("%f", &customer.balance);
printf("Account number: %d\n", customer.acc_number);
printf("Account name: %s\n", customer.acc_name);
printf("Account balance: %.2f\n", customer.balance);
// write account info to file
FILE *fp;
fp = fopen("account_info.txt", "w");
if (fp == NULL)
{
printf("Error opening file!\n");
return;
}
fprintf(fp, "Account number: %d\n", customer.acc_number);
fprintf(fp, "Account name: %s\n", customer.acc_name);
fprintf(fp, "Account balance: %.2f\n", customer.balance);
fclose(fp);
break;
}
case 2:
{
struct account customer;
printf("Enter account number: ");
scanf("%d", &customer.acc_number);
printf("Enter account name: ");
scanf("%s", customer.acc_name);
printf("Enter account balance: ");
scanf("%f", &customer.balance);
printf("Account created successfully!\n");
printf("Account number: %d\n", customer.acc_number);
printf("Account name: %s\n", customer.acc_name);
printf("Account balance: %.2f\n", customer.balance);
// write account info to file
FILE *fp;
fp = fopen("account_info.txt", "w");
if (fp == NULL)
{
printf("Error opening file!\n");
return;
}
fprintf(fp, "Account number: %d\n", customer.acc_number);
fprintf(fp, "Account name: %s\n", customer.acc_name);
fprintf(fp, "Account balance: %.2f\n", customer.balance);
fclose(fp);
break;
}
case 3:
{
char password[20];
printf("Enter current password: ");
scanf("%s", password);
if (strcmp(password, "password123") == 0)
{
printf("Enter new password: ");
scanf("%s", password);
printf("Password changed successfully!\n");
// write new password to file
FILE *fp;
fp = fopen("password.txt", "w");
if (fp == NULL)
{
printf("Error opening file!\n");
return;
}
fprintf(fp, "%s", password);
fclose(fp);
}
else
{
printf("Invalid password!\n");
}
break;
}
case 4:
{
struct payee payees[10];
int payeeCount = 0; // rename count variable to payeeCount
int payeeChoice = 0;
printf("Payee Management\n");
printf("1. Add Payee\n");
printf("2. Remove Payee\n");
printf("3. View Payee List\n");
printf("Please Enter Your Choice From Above : ");
scanf("%d", &payeeChoice);
switch (payeeChoice)
{
case 1:
{
if (payeeCount < MAX_PAYEES)
{
printf("Enter payee name: ");
scanf("%s", payees[payeeCount].name);
printf("Enter payee account number: ");
scanf("%d", &payees[payeeCount].acc_number);
printf("Payee added successfully!\n");
// write payee info to file
FILE *fp;
fp = fopen("payee_info.txt", "a");
if (fp == NULL)
{
printf("Error opening file!\n");
return;
}
fprintf(fp, "Payee name: %s\n", payees[payeeCount].name);
fprintf(fp, "Payee account number: %d\n",
payees[payeeCount].acc_number);
fclose(fp);
payeeCount++; // increment payee count after successful addition
}
else
{
printf("Payee list is full!\n");
}
break;
}
case 2:
{
if (payeeCount > 0)
{
printf("Enter the index of the payee to remove: ");
int index;
scanf("%d", &index);
if (index >= 0 && index < payeeCount)
{
printf("Removing payee: %s\n", payees[index].name);
// shift elements to remove the payee
for (int i = index; i < payeeCount - 1; i++)
{
payees[i] = payees[i + 1];
}
payeeCount--; // decrement payee count after successful
// write updated payee list to file
FILE *fp;
fp = fopen("payee_info.txt", "w");
if (fp == NULL)
{
printf("Error opening file!\n");
return;
}
for (int i = 0; i < payeeCount; i++)
{
fprintf(fp, "Payee name: %s\n", payees[i].name);
fprintf(fp, "Payee account number: %d\n",
payees[i].acc_number);
}
fclose(fp);
}
else
{
printf("Invalid payee index!\n");
}
}
else
{
printf("Payee list is empty!\n");
}
break;
}
case 3:
{
if (payeeCount > 0)
{
printf("Payee list:\n");
for (int i = 0; i < payeeCount; i++)
{
printf("%d. %s (%d)\n", i + 1, payees[i].name,
payees[i].acc_number);
}
}
else
{
printf("Payee list is empty!\n");
}
break;
}
default:
printf("Invalid choice!\n");
}
break;
}
case 5:
{
printf("View Statement\n");
// read account info from file
FILE *fp;
char ch;
fp = fopen("account_info.txt", "r");
if (fp == NULL)
{
printf("Error opening file!\n");
return;
}
while ((ch = fgetc(fp)) != EOF)
{
printf("%c", ch);
}
fclose(fp);
// read payee info from file
fp = fopen("payee_info.txt", "r");
if (fp == NULL)
{
printf("Error opening file!\n");
return;
}
while ((ch = fgetc(fp)) != EOF)
{
printf("%c", ch);
}
fclose(fp);
break;
}
default:
printf("Invalid option!\n");
break;
}
}
int main()
{
int choice = 0;
printf("Welcome to Online Banking System!\n");
printf("Please choose a module:\n");
printf("1. Admin Panel\n");
printf("2. User Panel\n");
printf("Please Enter Your Choice From Above : ");
scanf("%d", &choice);
switch (choice)
{
case 1:
adminPanel();
break;
case 2:
userPanel();
break;
default:
printf("Invalid choice.\n");
break;
}
return 0;
}




//====================================================


#include <stdio.h>
    void main()
    {
        char *s= "hello";
        char *p = s;
        printf("%c\t%c", p[0], s[1]);
        }




#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}