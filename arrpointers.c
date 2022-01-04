#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number of elements of array:");
	scanf("%d",&n);
	int a1[n];
	int a2[n];
	int *p;
	p=a1;
	
	for(i=0;i<n;i++)
	  scanf("%d",&a1[i]);
	for(i=0;i<n;i++)
	  a2[i]=*(p+i);
	  
	printf("Printing elements of Array a2\n");
	for(i=0;i<n;i++)
		printf("%d ",a2[i]);
	return 0;
}
