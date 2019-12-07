#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long long n,k=0;
	cin>>n;
	cin>>k;
	long  long div=n/2+(n%2);
    if (k>div)
    {
    	cout<<(k-div)*2<<endl;
    }else{
    	cout<<(k*2)-1<<endl;
    }

	return 0;
}