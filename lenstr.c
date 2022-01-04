#include<stdio.h>
int str(char *);
int main()
{
	char c[20];
	int len;
	
	printf("Enter the string: ");
	gets(c);
	len=str(c);
	printf("The length of string is %d",len);
	return 0;
	
}

int str(char *a)
{
	int l=0;
	while(*(a)!='\0')
	{
		l++;
		a++;
	}
	return l;
}
