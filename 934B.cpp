#include<iostream>
using namespace std;
int main()
{
	int n, tmp, count=0;
	cin>>n;
	tmp=n;

	if(n>=1000000)
	{
		cout<<"-1";
		return 0;
	}

	while(n>0)
	{
		if((n%2==0)&&(n-2>=0))
			n=n-2;
		else
			n--;
		count++;
	}
	if(count>18)
	{
		cout<<"-1";
		return 0;
	}		
	while(tmp>0)
	{
		if((tmp%2==0)&&(tmp-2>=0))
		{
			cout<<"8";
			tmp-=2;
		}
		else
		{
			cout<<"4";
			tmp--;
		}
		count++;
	}	
}