#include<stdio.h>
main()
{
printf("pick the item:\n1. pizza\n2.pen");
int choice=0;
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("you picked pizza.");
break;
case 2:
print("you picked pen.");
break;
default:printf("invalid choice");
}
}
