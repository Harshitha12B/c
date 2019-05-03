#include<stdio.h>
int get()
{
 int a;
printf("enter the number");
scanf("%d",&a);
return a;
}
int add(int a)
{
int b;
b=a+1;
return b;
}
void output(int a,int b)
{
 printf("the value is %d",b);
}
void main()
{
int a=get();
int b=add(a);
output(a,b);
}

