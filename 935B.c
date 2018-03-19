#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	char s[n];
	int i,k,j=0;
	scanf("%s", s);

	int x=0;
	int y=0;
	int cost=0;
	int flag[n];

	if(s[0]=='U')
		y++;
	else if(s[0]=='R')
		x++;
	
	//printf("\n(%d,%d)\n", x, y);

	if(x==0)
		flag[0]=0;
	else if(y==0)
		flag[0]=1;

	/*for(i=0;i<n;i++)
		printf("%d ", flag[i]);
	printf("\n");*/

	j++;

	for(i=1;i<n;i++)
	{
		if(s[i]=='U')
			y++;
		else if(s[i]=='R')
			x++;

		//printf("\n(%d,%d)\n", x, y);
		
		if(x>y)
		{
			flag[j]=1;
			j++;
		}
		else if(y>x)
		{
			flag[j]=0;
			j++;
		}
		else
		{
			flag[j]=flag[j-1];
			j++;
		}

		/*for(k=0;k<n;k++)
			printf("%d ", flag[k]);
		printf("\n");*/
	}
	if(n>1)
	{	for(i=0;i<n;i++)
		{
			if(flag[i+1]!=flag[i])
				cost++;
		}
		cost=cost-1;
	}
	else
		cost=0;
	printf("%d", cost);
}