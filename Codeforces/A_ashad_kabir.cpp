#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int s,n;
	cin>>s>>n;
	std::map<double,int,greater<int>> mymap;

	for (int i = 0; i < n; ++i)
	{ 
        double temp;
        cin>>temp;
        mymap[temp]=i;
	}

   for (std::map<double ,int >::iterator it = mymap.begin(); it != mymap.end(); ++it)
   {
   	cout<<it->first+1<<" value : "<<it->second<<endl;
   }


	return 0;
}