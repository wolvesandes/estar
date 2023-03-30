#include<stdio.h>

int main()
{
	int T,a,m,n,b,c,d,e,f,g,h,i,j,k;
	scanf("%d",&T);
	a=0;
	f=-1;
	while(a!=T){
		scanf("%d %d",&m,&n);
		a=a+1;
		g=100;
		while(m!=n+1){
			b=m/100;
			c=m%100;
			d=c/10;
			e=c%10;
			if(m==b*b*b+d*d*d+e*e*e)
			printf("%d ",m);
			if(m==b*b*b+d*d*d+e*e*e){
				g=m;
			}
			m=m+1;
		}
		h=g/100;
		i=g%100;
		j=i/10;
		k=i%10;
		if(g!=h*h*h+j*j*j+k*k*k){
		printf("%d",f);}
		if(m==n+1)
		printf("\n");
	}
	
}
