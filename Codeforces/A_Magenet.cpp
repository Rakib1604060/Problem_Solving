#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int count=0;
	int save=0;
	int temp=1;

	for (int i = 0; i < n; ++i)
	{
		 cin>>temp;
		 if (temp!=save)
		 {
		 	 count++;
		 	 save=temp;
		 }

	}
	cout<<count<<endl;
	
	return 0;
}