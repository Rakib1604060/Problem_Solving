#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	if (n==m)
	{
		cout<<0;
		return 0;
	}else if (n>m)
	{
		cout<<n-m;
		return 0;
	}
	else if (n<m)
	{
		int diff=m-n;
		if (diff)
		{
			
		}
	}
	return 0;
}