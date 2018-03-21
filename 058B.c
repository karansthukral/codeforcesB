#include<stdio.h>

int main()
{
	int n, cn;
	scanf("%d", &n);
	cn=n;

	int i;

	for(i=n;i>0;i--)
	{
		if(cn%i==0)
			{
				printf("%d ", i);
				cn=i;
			}
	}
}