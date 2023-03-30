#include<stdio.h>

int main()
{
	int n,a,b,d,e,f,g,h;
	a=0;
	d=99;
	scanf("%d",&n);
	while(a!=n){
		scanf("%d",&b);
		a=a+1;
		if(b>99){
		e=b/100;
		f=b%100;
		g=f/10;
		h=f%10;
		printf("%d,%d,%d\n",h,g,e);}
		else
		printf("illegal\n");
	}
}
