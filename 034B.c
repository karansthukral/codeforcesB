#include<stdio.h>

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	int a[n];
	int i, j, tmp;	

	for(i=0;i<n;i++)
		scanf("%d", &a[i]);

	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
			if(a[j]>a[j+1])
			{
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
	int cost=0;

	for(i=0;i<m;i++)
	{	
		if(a[i]<=0)
			cost=cost-a[i];
	}

	printf("%d\n", cost);
}



