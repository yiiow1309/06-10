#include<stdio.h>
int fact(int a)
{
	if(a==1)
		return 1;
	else
		return a * fact(a-1);
}
int main()
{
	int a,n;
	printf("숫자 입력:");
	scanf("%d",&n);
	
	a = fact(n);
	
	printf("%d\n",a);
	
	return 0;
}
