#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c=0,d,e;
printf("enter num:");
scanf("%d",&a);
e=a;
while(e!=0)
{
b=e%10;
c=c+b*b*b;
e=e/10;
}
if(a==c)
printf("armstrong num",a);
else
printf("not armstrong",a);
getch();
}
