#include<stdio.h>
int main()
{
char b[20];
printf("Enter the string:\n");
scanf("%s",b);
if(isdigit(b))
{
printf("false\n");
}
else
{
printf("true\n");
}
getch();
}
