#include<stdio.h>
int copy(char a[],char b[]);

int main()
{
	char a[100],b[100];
	scanf("%s",b);
	copy(a,b);
	printf("%s",a);
}
int copy(char a[],char b[])
{
	int i;
	i=0;
	while(b[i]!='\0')
	{
		a[i]=b[i];
		i=i+1;
	}
	a[i]=b[i];
}
