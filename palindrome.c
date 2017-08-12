#include<stdio.h>
void main()
{
int n,sum=0;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
sum = sum*10 + r;
n=n/10;
}
if(sum==r)
{
printf("the number is palindrome");
}
else
{
printf("it is not a palindrome");
}
}
