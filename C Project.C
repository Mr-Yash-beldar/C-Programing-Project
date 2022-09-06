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
int Perfect(int);
void printPerfect(int, int);
int Strong(int);
void printStrong(int, int);
int Pallindrome(int);
void printPallindrome(int, int);
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
        /*-----Perfect Numbers---*/
        /*-----Perfect Block---*/
        else if (check == 4)
        {
            int eo;
            printf("\t\t--**Enter 1: To check Number is Perfect or Not**--\n");
            printf("\t\t--**Enter 2: To print all 'Perfect Number' in given range**--\n");
            printf("\t\t\t\t");
            scanf("%d", &eo);
            // clrscr();
            printf("\n\v");
            if (eo == 1)
            {
                int number, checker;
                printf("\t\t**Enter the number to check it is Perfect or Not**\n");
                printf("\t\t\t\t");
                scanf("%d", &number);
                // clrscr();
                printf("\n\v");
                checker = Perfect(number);
                if (checker == 1)
                {
                    printf("\n\v");
                    printf("\t\t\t=>The number %d is Perfect Number\n", number);
                }
                else
                {
                    printf("\n\v");
                    printf("\t\t\t=>The number %d is Not Perfect Number\n", number);
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
                printf("\t\tThe Perfect numbers from %d to %d are as follow: /n", start, end);
                printf("\t\t\t\t=>");
                printPerfect(start, end);
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
        /*-----Strong Numbers---*/
		/*-----Strong Block---*/
		else if (check == 5)
		{
			int eo;
			printf("\t\t--**Enter 1: To check Number is Strong or Not**--\n");
			printf("\t\t--**Enter 2: To print all 'Strong Number' in given range**--\n");
			printf("\t\t\t\t");
			scanf("%d", &eo);
			// clrscr();
			printf("\n\v");
			if (eo == 1)
			{
				int number, checker;
				printf("\t\t**Enter the number to check it is Strong or Not**\n");
				printf("\t\t\t\t");
				scanf("%d", &number);
				// clrscr();
				printf("\n\v");
				checker = Strong(number);
				if (checker == 1)
				{
					printf("\n\v");
					printf("\t\t\t=>The number %d is Strong Number\n", number);
				}
				else
				{
					printf("\n\v");
					printf("\t\t\t=>The number %d is Not Strong Number\n", number);
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
				printf("\t\tThe Strong numbers from %d to %d are as follow: /n", start, end);
				printf("\t\t\t\t=>");
				printStrong(start, end);
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
int Armstrong(int num)
{
    int temp = num;
    int sum = 0, rem;
    while (temp != 0)
    {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }
    if (sum == num)
        return 1;
    else
        return 0;
}
void printArmstrong(int start, int end)
{
    while (start <= end)
    {
        if (Armstrong(start))
            printf(",%d ", start);
        start++;
    }
}

int Prime(int num)
{
    int i;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
void printPrime(int start, int end)
{
    while (start <= end)
    {
        if (Prime(start))
            printf("%d, ", start);
        start++;
    }
}
int Perfect(int num)
{
    int i, sum = 0;

    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    if (sum == num && num > 0)
        return 1;
    else
        return 0;
}
void printPerfect(int start, int end)
{
    while (start <= end)
    {
        if (Perfect(start))
            printf("%d, ", start);
        start++;
    }
}
int Strong(int num)
{
    int i, originalNum, lastDigit, sum;
    long fact;

    originalNum = num;

    sum = 0;

    while (num > 0)
    {
        lastDigit = num % 10;
        fact = 1;
        for (i = 1; i <= lastDigit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        num = num / 10;
    }

    if (sum == originalNum)
        return 1;
    else
        return 0;
}
void printStrong(int start, int end)
{
    while (start <= end)
    {
        if (Strong(start))
            printf("%d, ", start);
        start++;
    }
}
int Pallindrome(int num)
{
    int n, rev = 0;
    num = n;
    while (n != 0)
    {
        rev = (rev * 10) + (n % 10);
        n /= 10;
    }
    if (rev == num)
        return 1;
    else
        return 0;
}
void printPallindrome(int start, int end)
{
    while (start <= end)
    {
        if (Pallindrome(start))
            printf("%d, ", start);
        start++;
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