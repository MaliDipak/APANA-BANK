/*************************************************** N O T E ***************************************************/
// Bank management system

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void welcome();
void new_account();
void delay();
void loading();
void help();
void home_page();
void updateAcc();
void check_details();
void deleteAcc();
void deposit();
void withdraw();
void transaction();
void T_history();

char Fname[15];
char Lname[10];
char address[50];
int phone[15];
char adhar[15];
int accountNo1, accountNo2;
char date[10];
char birthDate[10];
int age;
int z = 0; // I am using this variable update and view profile
long int balance = 0;

int tra_money[50];
int tra[50];
int i = 0;

int main()
{
    welcome();
    system("cls");
    return 0;
}

void welcome()
{
    char choice;
    system("cls");
    printf("\n\n\n\t*****   W E L C O M E   T O   A P N A   B A N K   *****");
    printf("\n\n\n\t\t1. Creat A New Account");
    printf("\n\n\t\t2. Help(?)");
    printf("\n\n\t\t0. Exit");
re_enter:
    printf("\n\n\n\t\t# Enter Your Choice : ");
    fflush(stdin);
    scanf("%c", &choice);
    switch (choice)
    {
    case '1':
        new_account();
        break;
    case '2':
        help();
        break;
    case '0':
        system("cls");
        printf("\n\n\n\n\t\t\t\t\tApana Bank \n\n\t\t\tThank You! %s :)\n\n\t\t\tCloasing the system...", Fname);
        for (int j = 0; j < 10; j++)
        {
            delay();
            printf(".");
        }
        break;
    default:
        printf("\n\nEnter the option number 1, 2 or 3");
        goto re_enter;
        break;
    }
}

void new_account()
{
    int num, captcha;

    srand(time(0));
    num = rand() % 99999 + 10000;

    system("cls");
    printf("\n\n                        ***** A P A N A  B A N K *****");
    printf("\n                  Customer Account Banking Management System                  \n");
    printf("--------------------------------------------------------------------------------\n");
    printf("                             A d d   R e c o r d\n");
    printf("--------------------------------------------------------------------------------\n\n");
    printf("# Create a new account\n\n");

    accountNo1 = rand() % 900000 + 100000;
    accountNo2 = rand() % 90000 + 10000;

    printf("\n  Enter Today's Date \t\t: ");
    scanf("%s", date);
    printf("\n  Enter First Name \t\t: ");
    scanf("%s", Fname);
    printf("\n  Enter Last Name \t\t: ");
    scanf("%s", Lname);
    printf("\n  Enter Mobile Number \t\t: ");
    scanf("%s", phone);
    printf("\n* This system requires a captcha to create a new account for security reasons");
lable1:
    printf("\n  CAPTCHA : %d", num);
    printf("\n\n  Enter the numbers you see \t: ");
    scanf("%d", &captcha);
    if (captcha != num)
    {
        srand(time(0));
        num = rand() % 99999 + 10000;
        goto lable1;
    }
    printf("\n\nCreating your account ");
    for (int j = 0; j < 8; j++)
    {
        delay();
        printf(".");
    }

    printf(" *****Account created successfully!\n\n\t\t\t\tPlease wait don't press any key...!");
    for (int j = 0; j < 10; j++)
    {
        delay();
    }

    loading();
}

void delay()
{
    int count = 1000;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            for (int m = 0; m < 100; m++)
            {
                /* code */
            }
        }
    }
}

void loading()
{
    int count = 1;

    for (int j = 3; j; j--)
    {
        if (count == 1)
        {
            system("cls");
            printf("\n\n\nLoading");
            for (int j = 0; j < 10; j++)
            {
                delay();
                printf(".");
            }
        }
        else if (count == 2)
        {
            system("cls");
            printf("\n\n\n\nplease wait");
            for (int j = 0; j < 10; j++)
            {
                delay();
                printf(".");
            }
        }
        else if (count == 3)
        {
            system("cls");
            printf("\n\n\n\n\nLoading your account");
            for (int j = 0; j < 10; j++)
            {
                delay();
                printf(".");
            }
            printf("........................................................");
            for (int j = 0; j < 7; j++)
            {
                delay();
                printf(".");
            }
        }
        count++;
    }
    home_page();
}

void help()
{
    int chs;
top:
    system("cls");
    printf("\n\n\n            *****   W E L C O M E   T O   A P N A   B A N K   *****");
    printf("\n--------------------------------------------------------------------------------");
    printf("\n                  Customer Account Banking Management System");
    printf("\n--------------------------------------------------------------------------------\n");

    printf("\n    Apana Bank is trusted bank.\n");

    printf("\n       This is Apana bank management system.");
    printf("\n       This system is help to you to manage your account.\n");
    printf("\n    Our features : ");
    printf("\n         You can check your transactions,\n");
    printf("         You can update information of existing account,\n");
    printf("         You can check the details of existing account,\n");
    printf("         You can remove or delete your account,\n");
    printf("         You can create your account online from home,\n");
    printf("         without visiting to the bank.\n");
    printf("\n                               Thanks for visit");
    printf("\n\n  # Enter '1' for goback : ");
    fflush(stdin);
    scanf("%d", &chs);
    if (chs == 1)
    {
        welcome();
    }
    else
        goto top;
}

void home_page()
{
    int choice;
lable_1:
    system("cls");
    printf("\n\n                        ***** A P A N A  B A N K *****");
    printf("\n                  Customer Account Banking Management System                  \n");
    printf("--------------------------------------------------------------------------------\n");
    printf("                                                      Balance : %u.00 Cr\n", balance);
    printf("# Welcome %s To The Main Menu :\n\n", Fname);
    printf("\n\t1. Update information of existing account\n");
    printf("\n\t2. Check the details of existing account\n");
    printf("\n\t3. For check transactions\n");
    printf("\n\t4. For transactions\n");
    printf("\n\t5. Delete account\n");
    printf("\n\t0. Exit\n\n");
    printf("\n\n Enter your choice : ");
    fflush(stdin);
    scanf("%d", &choice);
    switch (choice)
    {
    case 0:
        system("cls");
        printf("\n\n\n\n\t\t\t\t\tApana Bank \n\n\t\t\tThank You! %s :)\n\n\t\t\tCloasing the system...", Fname);
        for (int j = 0; j < 10; j++)
        {
            delay();
            printf(".");
        }
        system("cls");
        break;
    case 1:
        updateAcc();
        break;
    case 2:
        check_details();
        break;
    case 3:
        T_history();
        break;
    case 4:
        transaction();
        break;
    case 5:
        deleteAcc();
        break;
    default:
        printf("\nEnter the valid number...,\n\tEnter the option number..");
        for (int j = 0; j < 8; j++)
        {
            delay();
            printf(".");
        }
        system("cls");
        goto lable_1;
        break;
    }
}

void updateAcc()
{
    int num, captcha, chs;
    system("cls");
    srand(time(0));
    num = rand() % 99999 + 10000;
    printf("\n\n                        ***** A P A N A  B A N K *****");
    printf("\n                  Customer Account Banking Management System                  \n");
    printf("--------------------------------------------------------------------------------\n");
    printf("                             A d d   R e c o r d\n");
    printf("--------------------------------------------------------------------------------\n\n");
    printf("# %s please complete your profile\n\n", Fname);
    printf("\n  Enter Your Date of Birth \t\t: ");
    fflush(stdin);
    gets(birthDate);
    printf("\n  Enter Your Age \t\t\t: ");
    scanf("%d", &age);
    printf("\n  Enter Your Adhar Card Number \t\t: ");
    fflush(stdin);
    gets(adhar);
    fflush(stdin); //For cleaning the buffer
    printf("\n  Enter Your Address \t\t\t: ");
    gets(address); //scanf("%[^\n]s", address);  at that point sub karke dekh liya but this is not working es liye ye karna pda
    printf("\n\n* This system requires a captcha for security reasons");
lable1:
    printf("\n  CAPTCHA : %d", num);
    printf("\n\n  Enter the numbers you see \t: ");
    scanf("%d", &captcha);
    if (captcha != num)
    {
        srand(time(0));
        num = rand() % 99999 + 10000;
        goto lable1;
    }
    printf("\n\nUpdating your account ");
    for (int j = 0; j < 8; j++)
    {
        delay();
        printf(".");
    }

    printf(" *****Account updated successfully!");
    z = 1; // I am using this variable for update and check profile
top:
    printf("\n\n# Enter '1' for goback : ");
    fflush(stdin);
    scanf("%d", &chs);
    if (chs == 1)
    {
        home_page();
    }
    else
        goto top;
}

void check_details()
{
    if (z == 0)
    {
        int chs;
        system("cls");
        printf("\n\n                        ***** A P A N A  B A N K *****");
        printf("\n                  Customer Account Banking Management System                  \n");
        printf("--------------------------------------------------------------------------------\n\n");
        printf("# Saving Bank Account");
        printf("\n\n\tC I F No. \t\t : \t 86478595197");
        printf("\n\n\tAccount No. \t\t : \t %d%d", accountNo1, accountNo2);
        printf("\n\n\tCustomer Name \t\t : \t %s %s", Fname, Lname);
        printf("\n\n\tDate Of Birth \t\t : \t ________");
        printf("\n\n\tAge \t\t\t : \t __");
        printf("\n\n\tAadhar Card (UID) No. \t : \t ____ ____ ____ ____");
        printf("\n\n\n\tContact Details");
        printf("\n\n\tPhone No. \t\t : \t %s", phone);
        printf("\n\n\tAddress \t\t : \t ___________________________________");
        printf("\n\n\n\tBranch \t\t\t : \t LASUR");
        printf("\n\n\tDate of Issue \t\t : \t %s", date);
        printf("\n\n\tI F S C \t\t : \t APIN0008718");
    top:
        printf("\n\n\n# Enter '2' for complete your profile or '1' for goback : ");
        fflush(stdin);
        scanf("%d", &chs);
        if (chs == 1)
        {
            home_page();
        }
        else if (chs == 2)
        {
            updateAcc();
        }

        else
            goto top;
    }

    else
    {
        int chs;
        system("cls");
        printf("\n\n                        ***** A P A N A  B A N K *****");
        printf("\n                  Customer Account Banking Management System                  \n");
        printf("--------------------------------------------------------------------------------\n\n");
        printf("# Saving Bank Account");
        printf("\n\n\tC I F No. \t\t : \t 86478595197");
        printf("\n\n\tAccount No. \t\t : \t %d%d", accountNo1, accountNo2);
        printf("\n\n\tCustomer Name \t\t : \t %s %s", Fname, Lname);
        printf("\n\n\tDate Of Birth \t\t : \t %s", birthDate);
        printf("\n\n\tAge \t\t\t : \t %d", age);
        printf("\n\n\tAadhar Card (UID) No. \t : \t %s", adhar);
        printf("\n\n\n\tContact Details");
        printf("\n\n\tPhone No. \t\t : \t %s", phone);
        printf("\n\n\tAddress \t\t : \t %s", address);
        printf("\n\n\n\tBranch \t\t\t : \t LASUR");
        printf("\n\n\tDate of Issue \t\t : \t %s", date);
        printf("\n\n\tI F S C \t\t : \t APIN0008718");
    top1:
        printf("\n\n\n# Enter '1' for goback : ");
        fflush(stdin);
        scanf("%d", &chs);
        if (chs == 1)
        {
            home_page();
        }
        else
            goto top1;
    }
}

void deleteAcc()
{
    int choice, chs;
    system("cls");
    printf("\n\n                        ***** A P A N A  B A N K *****");
    printf("\n                  Customer Account Banking Management System                  \n");
    printf("--------------------------------------------------------------------------------\n\n");
    printf("# For remove existing account");
    printf("\n\n\tEnter Last Five Digits Of Account Number : ");
    scanf("%d", &choice);
    if (choice == accountNo2)
    {
        system("cls");
        printf("\n\n\n\n\t\t\t\t\tA p a n a  B a n k \n\n\t\t\tRemoving your account...", Fname);
        for (int j = 0; j < 10; j++)
        {
            delay();
            printf(".");
        }
        welcome();
    }
    else
        printf("\n\t*_Check your account number and try again");
top:
    printf("\n\n# Enter '1' for goback : ");
    fflush(stdin);
    scanf("%d", &chs);
    if (chs == 1)
    {
        home_page();
    }
    else
        goto top;
}

void transaction()
{
    int chs;
    system("cls");
    printf("\n\n                        ***** A P A N A  B A N K *****");
    printf("\n                  Customer Account Banking Management System                  \n");
    printf("--------------------------------------------------------------------------------\n\n");
    printf("# %s Your Balance Is %u.00 Cr", Fname, balance);
    printf("\n\n\t\t\tDo you want to");
    printf("\n\n\t\t\t               1.Deposit");
    printf("\n\t\t\t               2.Withdraw");
    printf("\n\t\t\t                          ........?");
top:
    printf("\n\n# Enter your choice '1', '2', or '0' for goback : ");
    fflush(stdin);
    scanf("%d", &chs);

    switch (chs)
    {
    case 0:
        home_page();
        break;
    case 1:
        deposit();
        break;
    case 2:
        withdraw();
        break;
    default:
        goto top;
        break;
    }
}

void deposit()
{
    int a, chs;
    system("cls");
    printf("\n\n                        ***** A P A N A  B A N K *****");
    printf("\n                  Customer Account Banking Management System                  \n");
    printf("--------------------------------------------------------------------------------\n\n");
    printf("# 1.Deposit :");
    printf("\n\n  Enter the amount you want to deposit : ");
    scanf("%d", &a);
    printf("\n\n\n*_Deposited successfully!");
    balance = balance + a;
    tra_money[i] = a;
    tra[i] = 1;
    i++;
top:
    printf("\n\n# Enter '1' for go to main menu : ");
    fflush(stdin);
    scanf("%d", &chs);
    if (chs == 1)
    {
        home_page();
    }
    else
        goto top;
}

void withdraw()
{
    int a, chs;
    system("cls");
    printf("\n\n                        ***** A P A N A  B A N K *****");
    printf("\n                  Customer Account Banking Management System                  \n");
    printf("--------------------------------------------------------------------------------\n\n");
    printf("# 1.Withdraw :");
    printf("\n\n  Enter the amount you want to Withdraw : ");
    scanf("%d", &a);

    if (a <= balance)
    {
        printf("\n\n\n*_Withdrawn successfully!");
        balance = balance - a;
        tra_money[i] = a;
        tra[i] = 2;
        i++;
    }
    else
        printf("\n\n\n*_Your amount is greater than your account balance_Transaction is not possible!");

top:
    printf("\n\n# Enter '1' for go to main menu : ");
    fflush(stdin);
    scanf("%d", &chs);
    if (chs == 1)
    {
        home_page();
    }
    else
        goto top;
}

void T_history()
{
    int chs;
    system("cls");
    printf("\n\n                        ***** A P A N A  B A N K *****");
    printf("\n                  Customer Account Banking Management System                  \n");
    printf("--------------------------------------------------------------------------------\n");
    printf("\n# Transaction's History :\n\n");
    for (int j = 0; j <= i; j++)
    {
        if (tra[j] == 1)
        {
            printf("\n\t* Credit : + %d.00 Cr\n", tra_money[j]);
            printf("---------------------------------------------------");
        }
        else if (tra[j] == 2)
        {
            printf("\n\t* Debit  : - %d.00 Cr\n", tra_money[j]);
            printf("---------------------------------------------------");
        }
    }

top:
    printf("\n\n# Enter '1' for go to main menu : ");
    fflush(stdin);
    scanf("%d", &chs);
    if (chs == 1)
    {
        home_page();
    }
    else
        goto top;
}
