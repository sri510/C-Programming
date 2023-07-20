#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
char ch;
clrscr();
printf("Enter the value of A and B");
scanf("%d%d",&a,&b);
printf("Enter the arithmetic operator");
scanf(" %c",&ch);
if(ch=='+')
{
printf("sum of a and b=%d",a+b);
}
if(ch=='-')
{
printf("sub of a and b=%d",a-b);
}
getch();
}