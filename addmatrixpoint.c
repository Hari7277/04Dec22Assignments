#include <stdio.h>
 
int main()
{
   int m, n, i, j, f[5][5], s[5][5], sum[5][5];
 
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   printf("Enter the elements of first matrix\n");
 
   for (i = 0; i < m; i++)
      for (j = 0; j < n; j++)
         scanf("%d", *(f+i)+j);
 
   printf("Enter the elements of second matrix\n");
 
   for (i = 0; i < m; i++)
      for (j = 0 ; j < n; j++)
         scanf("%d", *(s+i)+j);
         
   printf("Sum of entered matrices:-\n");
   
   for (i = 0; i < m; i++) {
      for (j = 0 ; j < n; j++) {
         *(*(sum+i)+j) = *(*(f+i)+j) + *(*(s+i)+j);
         printf("%d\t", *(*(sum+i)+j));
      }
      printf("\n");
   }
 
   return 0;
}
