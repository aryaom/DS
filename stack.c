#include<stdio.h>
#include<stdlib.h>
int top=-1,stack[30],n=100;
void push();
void pop();
void display();
void main()
{
int ch;
while(1) 
{
printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
printf("\n\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1: push();
break;
case 2: pop();
break;
case 3: display();
break;
case 4:exit(0);
default: printf("\nWrong Choice!!");
}
}
}
void push()
{
int val;
if(top==n-1)
{
printf("\nStack is full!!");
}
else
{
printf("\nEnter element to push:");
scanf("%d",&val);
top=top+1;
stack[top]=val;
}
}
void pop()
{
if(top==-1)
{
printf("\nStack is empty!!");
}
else
{
printf("\nDeleted element is %d",stack[top]);
top=top-1;
}
}
void display()
{
int i;
if(top==-1)
{
printf("\nStack is empty!!");
}
else
{
printf("\nStack is...\n");
for(i=top;i>=0;--i)
printf("%d\n",stack[i]);
}
}
