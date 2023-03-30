#include<stdio.h>

int main()
{
	char c1,c2,c3,c4,c5;
	c1='C';
	c2='h';
	c3='i';
	c4='n';
	c5='a';
	scanf("%c,%c,%c,%c,%c",&c1,&c2,&c3,&c4,&c5);
	c1=c1+('G'-'C');
	c2=c2-('h'-'l');
	c3=c3+('m'-'i');
	c4=c4+('r'-'n');
	c5=c5+('e'-'a');
	printf("%c,%c,%c,%c,%c",c1,c2,c3,c4,c5); 
}
