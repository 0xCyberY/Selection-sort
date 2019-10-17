#include <stdio.h>
#include <stdlib.h>
int main()
{
int a[100], n,min,i,j,temp;
   printf("enter the size of array \n");
   scanf("%d",&n);
   printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
	   scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	min=i;
	for(j=i+1;j<n;j++)
	{
	   if(a[j]<a[min])
	   min=j;
	   }
	   temp=a[i];
	   a[i]=a[min];
	   a[min]=temp;
	}
	printf("sorted array\n");
	for(i=0;i<n;i++)
	   {
	   printf("%d\n",a[i]);
	   }
return 0;
}

