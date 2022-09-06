#include <stdio.h>
#include <math.h>
void program();
int Even(int);
void printEven(int, int);
void printOdd(int, int);
int Prime(int);
void printPrime(int, int);
int Armstrong(int);
void printArmstrong(int, int);
void end();
void mend();
void main()
{
    program();
    // mend();
}
void program()
{
    int menu;
    // clrscr();
    printf("\n\v");
    printf("\t-----***This is program to do All Numeric Operation-----***\n\v");
    printf("\t\t----**Enter 1: To go in Main MENU**----\n");
    printf("\t\t----**Enter 2: To Quit Program**----\n");
    printf("\t\t\t\t");
    scanf("%d", &menu);
    // clrscr();
    printf("\n\v");
    if (menu == 1)
    {
        int check;
        printf("\t\t\t------**Welcome to Main MENU**------\n\v");
        printf("\t\t----**Enter  1: For Even//Odd**----\n ");
        printf("\t\t----**Enter  2: For Prime numbers**----\n ");
        printf("\t\t----**Enter  3: For Armstrong Numbers**----\n ");
        printf("\t\t----**Enter  4: For Perfect Numbers**----\n ");
        printf("\t\t----**Enter  5: For Strong Numbers**----\n ");
        printf("\t\t----**Enter  6: For Pallindrome Numbers**----\n ");
        printf("\t\t\t\t");
        scanf("%d", &check);
        // clrscr();
        printf("\n\v");
        if (check == 1)
        {
            int eo;
            printf("\t\t--**Enter 1: To check Number 'Even or Odd'**--\n");
            printf("\t\t--**Enter 2: To print all 'Even number in given range'**--\n");
            printf("\t\t--**Enter 3: To print all 'Odd number in given range'**--\n");
            printf("\t\t\t\t");
            scanf("%d", &eo);
            // clrscr();
            printf("\n\v");
            if (eo == 1)
            {
                int number, checker;
                printf("\t\t**Enter the number to check Even or Odd**\n");
                printf("\t\t\t\t");
                scanf("%d", &number);
                // clrscr();
                printf("\n\v");
                checker = Even(number);
                if (checker == 1)
                {
                    printf("\n\v");
                    printf("\t\t\t=>The number %d is Even Number\n", number);
                }
                else
                {
                    printf("\n\v");
                    printf("\t\t\t=>The number %d is Odd Number\n", number);
                }
                end();
            }
            else if (eo == 2)
            {
                int start, end;
                printf("\t\t\t**Enter the start**\n");
                printf("\t\t\t");
                scanf("%d", &start);
                printf("\t\t\t**Enter the End**\n");
                printf("\t\t\t");
                scanf("%d", &end);
                // clrscr();
                printf("\n\v");
                printf("\t\tThe Even number from %d to %d are as follow: /n", start, end);
                printf("\t\t\t\t=>");
                printEven(start, end);
            }

            else if (eo == 3)
            {
                int start, end;
                printf("\t\t\t**Enter the start**\n");
                printf("\t\t\t");
                scanf("%d", &start);
                printf("\t\t\t**Enter the End**\n");
                printf("\t\t\t");
                scanf("%d", &end);

                printf("\n\v");
                printf("\t\tThe Odd number from %d to %d are as follow: \n", start, end);
                printf("\t\t\t\t=>");
                printOdd(start, end);
            }
            else
            {
                // clrscr();
                printf("\t\t\t\t\t**--Invalid Input**--\n");
                end();
                // getch();
            }
            end();
        }
        /*-----Prime Number----
                -------Prime Block---*/
        else if (check == 2)
        {
            int eo;
            printf("\t\t--**Enter 1: To check Number is Prime or Not**--\n");
            printf("\t\t--**Enter 2: To print all 'Prime Number' in given range**--\n");
            printf("\t\t\t\t");
            scanf("%d", &eo);
            // clrscr();
            printf("\n\v");
            if (eo == 1)
            {
                int number, checker;
                printf("\t\t**Enter the number to check it is Prime or Not**\n");
                printf("\t\t\t\t");
                scanf("%d", &number);
                // clrscr();
                printf("\n\v");
                checker = Prime(number);
                if (checker == 1)
                {
                    printf("\n\v");
                    printf("\t\t\t=>The number %d is Prime Number\n", number);
                }
                else
                {
                    printf("\n\v");
                    printf("\t\t\t=>The number %d is Not Prime Number\n", number);
                }
                // end();
                // getch();
            }
            else if (eo == 2)
            {
                int start, end;
                printf("\t\t\t**Enter the start**\n");
                printf("\t\t\t");
                scanf("%d", &start);
                printf("\t\t\t**Enter the End**\n");
                printf("\t\t\t");
                scanf("%d", &end);
                // clrscr();
                printf("\n\v");
                printf("\t\tThe Prime numbers from %d to %d are as follow: /n", start, end);
                printf("\t\t\t\t=>");
                printPrime(start, end);
                // getch();
            }

            else
            {
                // clrscr();
                printf("\t\t\t\t\t**--Invalid Input**--\n");
                // getch();
            }
            end();
            // getch();
        }
        /*----Armstrong Number---
           ----Armstrong Block-----*/
        else if (check == 3)
        {
            int eo;
            printf("\t\t--**Enter 1: To check Number is Armstrong or Not**--\n");
            printf("\t\t--**Enter 2: To print all 'Armstrong Number' in given range**--\n");
            printf("\t\t\t\t");
            scanf("%d", &eo);
            // clrscr();
            printf("\n\v");
            if (eo == 1)
            {
                int number, checker;
                printf("\t\t**Enter the number to check it is Armstrong or Not**\n");
                printf("\t\t\t\t");
                scanf("%d", &number);
                // clrscr();
                printf("\n\v");
                checker = Armstrong(number);
                if (checker == 1)
                {
                    printf("\n\v");
                    printf("\t\t\t=>The number %d is Armstrong Number\n", number);
                }
                else
                {
                    printf("\n\v");
                    printf("\t\t\t=>The number %d is Not Armstrong Number\n", number);
                }
                // getch();
            }
            else if (eo == 2)
            {
                int start, end;
                printf("\t\t\t**Enter the start**\n");
                printf("\t\t\t");
                scanf("%d", &start);
                printf("\t\t\t**Enter the End**\n");
                printf("\t\t\t");
                scanf("%d", &end);
                // clrscr();
                printf("\n\v");
                printf("\t\tThe Armstrong numbers from %d to %d are as follow: /n", start, end);
                printf("\t\t\t\t=>");
                printArmstrong(start, end);
                // getch();
            }
            else
            {
                // clrscr();
                printf("\t\t\t\t\t**--Invalid Input**--\n");
                // getch();
            }
            end();
            // getch();
        }
    }

else if (menu == 2)
{
    end();
}
else
{
    printf("\n\v");
    printf("\t\t\t\t--**Invalid Input**--");
    end();
    // getch();
}
}

/*
   --Function Defination--
*/
int Even(int number)
{
    if (number % 2 == 0)
        return 1;
    else
        return 0;
}
void printEven(int start, int end)
{
    int i;
    for (i = start; i <= end; i++)
    {
        int checker;
        checker = Even(i);
        if (checker == 1)
            printf("%d, ", i);
    }
}
void printOdd(int start, int end)
{
    int i;
    for (i = start; i <= end; i++)
    {
        int checker;
        checker = Even(i);
        if (checker == 0)
            printf("%d, ", i);
    }
}
void end()
{
    char ch;
    printf("\n\v");
    printf("\t\t--**Enter Y/y to Continue or N/n to Quit the Program**--");
    printf("\t\t\t\t=>");
    scanf("%c ", &ch);
    // clrscr();
    if (ch == 'y' && ch == 'Y')
    {
        program();
        // getch();
    }
    else if (ch == 'n' && ch == 'N')
    {
        mend();
    }
}
void mend()
{
    printf("\t\t\t\t\t<=---xxxxxxxx****Quit****xxxxxxxx---=>");
    // getch();
}