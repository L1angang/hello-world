#include<stdio.h>
int isprime(int x)
{
	int ret=1;
	int i;
	if(x==1)
	ret=0;
	;
	for(i=2;i<x;i++)
	{
		if(x%i==0){
			ret=0;
			break;
		}
	}
	return ret;
} 
int main()
{
	int j, m, n, o, p, total=0;
	for(j=100;j<10000;j++)
	{
		m=j%10;
		n=(j/10)%10;
		o=(j/100)%10;
		p=(j/1000)%10;
		if((isprime(j))&&(isprime(m+n+o+p))&&(isprime(m*m+n*n+o*o+p*p)))
		total=total+j;
		;
	}
	printf("%d",total);
} 


