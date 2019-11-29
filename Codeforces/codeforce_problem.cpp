#include<bits/stdc++.h>
using namespace std;



int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	int ans=0;
	int ans2=0;
	int arr[3];
	

	for (int i = 0; i < t; i++)
	{
		 
		 cin>>arr[0]>>arr[1]>>arr[2];
		 sort(arr,arr+3);
		 cout<<min({arr[0],arr[1],arr[2]})<<endl;
         
		
		 ans2=0;
		 ans=0;

	}
 
	return 0;
}