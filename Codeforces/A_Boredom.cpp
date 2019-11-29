#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int array[n];
	std::map<int, int> mymap;

	for (int i = 0; i < n; ++i)
	{
		int a;
		cin>>a;
        mymap[a]+=a;

	}

	 for (std::map<int,int>::iterator i = mymap.begin(); i != mymap.end(); ++i)
	 {
	 	cout<<i->first<<" value: "<<i->second<<endl;
	 }
	return 0;
}