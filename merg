#include<stdio.h>
void main()
{
int a[50],b[50],merge[100],n,m,i,j,t;
printf("Enter the number of elements of 1st array\n");
scanf("%d",&m);
printf("Enter the elements\n");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
merge[i]=a[i];
}
j=i;
printf("Enter the number of elements of 2nd array\n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
merge[j]=b[i];
j++;
}
printf("Array after merging\n");
for(i=0;i<j;i++)
{
printf("%d\n",merge[i]);
}
for(i=0;i<m+n;i++)
{
for(j=i+1;j<m+n;j++)
{
if(merge[i]>merge[j])
{
t=merge[i];
merge[i]=merge[j];
merge[j]=t;
}
}
}
printf("\nMerged array after sorting\n");
for(i=0;i<j;i++)
{
printf("%d\n",merge[i]);
}

}
