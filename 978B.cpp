#include<iostream>
using namespace std;

int main()
{
	int n, cx=0, count=0;
	string s;
	cin>>n>>s;
	int i;

	for(i=0;i<n-2;i++)
		if(s[i]=='x'&&s[i+1]=='x'&&s[i+2]=='x')
			count++;

	cout<<count;
}