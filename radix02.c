#include<stdio.h>
long dec_to_bin(long n)
{
	long bin, sum=0, i=1;
	while(n>0)
	{
		bin=n%2;
		sum+=bin*i;
		n/=2;
		i*=10;
	}
	return sum;
}
int main()
{
	int a;
	
	printf("���� �Է�:");
	scanf("%d",&a);
	
	printf("%d�� ������ %ld �Դϴ�\n",a,dec_to_bin(a));
	
	return 0;
}
