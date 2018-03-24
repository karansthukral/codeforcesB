#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, a, b, max=0;
	cin>>n>>a>>b;

	int i;
	int x, y, z, min, flag=100;
	min=a+b;

	if(a+b==n)
	{
		max=1;
		cout<<max;
		return 0;
	}

	else if(n>a)
		max=a;

	else if(n>b)
		max=b;	

	else if(a+b>n)
		max=floor((a+b)/n);

	if(max>a)
		max=a;
	else if(max>b)
		max=b;

	for(i=1;i<=max;i++)
	{
		x=a;
		y=b;
		z=n;
		while(z>0)
		{
			if(x-i>=0)
				x-=i;
			else if(y-i>=0)
				y-=i;
			else 
				break;
			z--;
		}
		if(min>=x+y)
			min=x+y;
		//if(y==b)
			//flag=0;
		//cout<<"\n"<<x<<" "<<y<<"\n";
	}

	max=(a+b-min)/n;

	cout<<max;
}