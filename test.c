/*c programme for a simple calculator */
#include<stdio.h>
void main()
{
int a,b,c;
float d;
printf("enter two numbers");
scanf("%d %d",&b,&c);
printf("1.add 2.subtract 3.multiplication 4.divide");
scanf("%d",&a);
switch(a)
{
case 1: d=b+c;
case 2: if(b>=c){d=b-c;}else{d=c-b;}
case 3: d=a*b;
case 4: d=a/b;
}
printf("%f",d);
printf("thank you!!!");
}
