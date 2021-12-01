#include<stdio.h>
n=30;
int cqueue[n];
int front = -1;
int rear = -1;
void insert(int item)
{
if((front == 0 && rear == n-1) || (front == rear+1))
{
printf("Queue Overflow");
return;
}
if(front == -1)
{
front = 0;
rear = 0;
}
else
{
if(rear == n-1)
rear = 0;
else
rear = rear+1;
}
cqueue[rear] = item ;
}
void deletion()
{
if(front == -1)
{
printf("Queue Underflow");
return ;
}
printf("Element deleted from queue is : %d\n",cqueue[front]);
if(front == rear)
{
front = -1;
rear=-1;
}
else
{
if(front == n-1)
front = 0;
else
front = front+1;
}
}
void display()
{
int frontpos = front,rearpos = rear;
if(front == -1
{
printf("Queue is empty\n");
return;
}
printf("Queue elements :\n");
if( frontpos <= rearpos )
while(frontpos <= rearpos)
{
printf("%d ",cqueue[frontpos]);
frontpos++;
}
else
{
while(frontpos <= n-1)
{
printf("%d ",cqueue[frontpos])
frontpos++;
}
frontpos = 0;
while(frontpos <= rearpos)
{
printf("%d ",cqueue[frontpos]);
frontpos++;
}
}
printf("\n");
}
int main()
{
int choice,item;
do
{
printf("1.Insert\n");
printf("2.Delete\n");
printf("3.Display\n");
printf("4.Quit\n");
printf("Enter your choice : ");
scanf("%d",&choice);
switch(choice)
{
case 1 :
printf("Input the element for insertion:");
scanf("%d", &item);
insert(item);
break;
case 2 :
deletion();
break;
case 3:
display();
break;
case 4:
break;
default:
printf("Wrong choicen");
}
}while(choice!=4);
return 0;
}
