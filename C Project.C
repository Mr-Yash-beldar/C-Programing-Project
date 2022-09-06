#include <stdio.h>
#include <math.h>
void program();
int Even(int);
void main()
{
	program();
	mend();
}
void program()
{
	int menu;
	clrscr();
	printf("\n\v");
	printf("\t-----***This is program to do All Numeric Operation-----***\n\v");
	printf("\t\t----**Enter 1: To go in Main MENU**----\n");
	printf("\t\t----**Enter 2: To Quit Program**----\n");
	printf("\t\t\t\t");
	scanf("%d", &menu);
	clrscr();
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
		clrscr();
		printf("\n\v");