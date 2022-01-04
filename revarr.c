#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int ar1[n];
	int ar2[n];
	int *p1;
	p1=ar1;
	printf("Enter the elements of the array:");
	for(i=0;i<n;i++)
	  scanf("%d",&ar1[i]);
	  
	for(i=n-1;i>=0;i--)
	   ar2[n-1-i]=*(p1+i);
	   
	for(i=0;i<n;i++)
	  printf("%d ",ar2[i]);
	  
return 0;
}
