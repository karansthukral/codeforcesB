#include<stdio.h>

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	int a[m][2];
	int i, j, tmp, tmp1;

	for(i=0;i<m;i++)
		scanf("%d %d", &a[i][0], &a[i][1]);

	for(i=0;i<m-1;i++)
		for(j=0;j<m-i-1;j++)
			if(a[j][1]<a[j+1][1])
			{
				tmp=a[j][0];
				a[j][0]=a[j+1][0];
				a[j+1][0]=tmp;

				tmp1=a[j][1];
				a[j][1]=a[j+1][1];
				a[j+1][1]=tmp1;				
			}
	/*for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<2;j++)
			printf("%d ", a[i][j]);
	}*/

	int cost=0;
	i=0;
	int tbox=0;


	for(j=0;j<m;j++)
		tbox=tbox+a[j][0];

	if(tbox<=n)
	{
		for(j=0;j<m;j++)
			cost=cost+(a[j][0]*a[j][1]);
		n=0;
	}

	while(n>0)
	{
		if(a[i][0]<=n)
		{
			n=n-a[i][0];
			cost=cost+(a[i][0]*a[i][1]);
			i++;
			//printf("\n%d %d %d", n, cost, i);
		}
		else
		{
			cost=cost+(n*a[i][1]);
			n=0;
			//printf("\n%d %d", n, cost);
		}
	}

	printf("\n%d", cost);


}