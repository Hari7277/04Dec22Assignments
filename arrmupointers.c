#include <stdio.h>
 
int main()
{
   int m, n, i, j, k, f[5][5], s[5][5], mult[5][5];
 
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   
   printf("Enter the elements of first matrix\n");
 
   for(i = 0;i < m;i++)
      for(j = 0;j < n;j++)
         scanf("%d", *(f+i)+j);
 
   printf("Enter the elements of second matrix\n");
 
   for(i = 0;i < m;i++)
      for (j = 0;j < n;j++)
         scanf("%d", *(s+i)+j);
         
    printf("Multiplication of two matrices\n");
	
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		*(*(mult+i)+j)=0;
    		for(k=0;k<n;k++)
    		{
    			*(*(mult+i)+j)+=*(*(f+i)+k) * *(*(s+k)+j);
    			
			}
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",*(*(mult+i)+j));
		}
		printf("\n");
	}
  
 return 0; 
}
