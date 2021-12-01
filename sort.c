#include<stdio.h>
void main()
{
int a[50],n,t,i,j;
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("Sorted elements are\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
