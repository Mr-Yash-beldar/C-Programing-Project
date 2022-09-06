#include <stdio.h>
#include <math.h>
void program();
int Even(int);
void printEven(int, int);
void printOdd(int, int);
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
                // end();
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
        }
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