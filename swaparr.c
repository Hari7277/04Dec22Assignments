#include<stdio.h>
int main()
{
	int n,i,temp;
	printf("Enter the number of elements of array:");
	scanf("%d",&n);
	int a1[n];
	int a2[n];
	int *p1;
	int *p2;
	p1=a1;
	p2=a2;
	printf("Enter elements of array a1:");
	for(i=0;i<n;i++)
	  scanf("%d",&a1[i]);
	  
	printf("Enter elements of array a2:");
	for(i=0;i<n;i++)
	  scanf("%d",&a2[i]);
	  
	printf("Printing a1 elements before swapping\n");
	for(i=0;i<n;i++)
	  printf("%d ",a1[i]);
	
	printf("\nPrinting a2 elements before swapping\n");
	for(i=0;i<n;i++)
	  printf("%d ",a2[i]);
	  
	for(i=0;i<n;i++)
	{
		temp=*(p1+i);
		*(p1+i)=*(p2+i);
		*(p2+i)=temp;
	}
	printf("\nPrinting a1 elements after swapping ");
	for(i=0;i<n;i++)
	  printf("%d ",*(p1+i));
	
	printf("\nPrinting a2 elements after swapping ");
	for(i=0;i<n;i++)
	  printf("%d ",*(p2+i));
	
	
return 0;
}
