#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
	int a;
	cin>>a;

	if (a<=5)
	{
		cout<<1<<endl;
	}
	else
	  {
	  	if (a%5!=0)
	  	  cout<<a/5+1;
	  	else
	      cout<<a/5;
	  }

	

	return 0;
}