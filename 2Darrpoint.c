#include <stdio.h>
void display(int *,int,int);
int main()
{
    int i,j,m,n;
    m=2,n=2;
    int arr[m][n];
    printf("Enter the elements of the array: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    display(arr,m,n);
    return 0;
}
void display(int *a, int m, int n)
{
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("arr[%d][%d] is :%d\n",i,j,*(a+(i*2)+j));
        }
    }
}
