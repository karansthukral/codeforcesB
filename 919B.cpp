#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int k;
	cin>>k;

	int count=0;
	int copy=0;
	int kcount, sum=0;

	kcount=k;
	
	if(k<=8500)
	{
		while(kcount>0)
		{
			count++;
			copy=count;
			//printf("\n%d", count);
			while(copy>0)
			{
				sum=sum+(copy%10);
				copy=floor(copy/10);
			}
			if(sum==10)
			kcount--;
			sum=0;
		}
	}

	else
	{	
		count=10025101;
		while(kcount>8500)
		{
			count++;
			copy=count;
			//printf("\n%d", count);
			while(copy>0)
			{
				sum=sum+(copy%10);
				copy=floor(copy/10);
			}
			if(sum==10)
			kcount--;
			sum=0;
		}
	}

	cout<<count;

}