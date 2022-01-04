#include<stdio.h>
int main()
{
	char s1[20];
	char s2[20];
	int i=0,length=0;
	printf("Enter the string: ");
	gets(s1);
	char *p;
	p=s1;
	//for(i=0;s1[i]!='\0';i++)
	 //length++;
	 
	for(i=0;s1[i]!='\0';i++)
	   s2[i]=*(p+i);
	   
	printf("The string s2 is %s",s2);
 return 0;
}
