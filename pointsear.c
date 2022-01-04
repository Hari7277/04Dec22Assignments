#include<stdio.h>
int main()
{
	int n,i,ele;
	//int lo,hi,mid;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int arr[n];
	int *p;
	p=arr;
	printf("Enter the elements of the array:");
	for(i=0;i<n;i++)
	  scanf("%d",&arr[i]);
	printf("Enter the element to be searched: ");
	scanf("%d",&ele);
	/*lo=0;
	hi=n-1;
	while(lo<=hi)
	{
		mid=(lo+hi)/2;
		if((*(p+mid))==ele)
		{
			printf("Element was found in postion %d",mid);
			break;
		}
		else if(ele< (*(p+mid)))
		  hi=mid-1;
		else if(ele> (*(p+mid)))
		  lo=mid+1;
		else 
		  printf("Element not found");
	} */
	
	for(i=0;i<n;i++)
	{
		if(ele==(*(p+i)))
		{
		
		  printf("Element found at %d position",i);
		  break;
	    }
	}
return 0;	
}
