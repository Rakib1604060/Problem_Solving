#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	int array[m+1];
	n=n-1;

	int diff=std::numeric_limits<int>::max();

	for (int i = 0; i < m; ++i)
	{
		cin>>array[i];
	
	}
   sort(array,array+m);


	for (int i = 0; i < m-n; i++)
	{
		

         int differrence=array[i]-array[i+n];

         if (differrence<0)
         {
         	differrence=-differrence;

         }


		 if (differrence<diff)
		 {
		 	 diff=differrence;
		 }
	}
  
  if (diff==2147483647)
  {
  	diff=0;
  }
  cout<<diff;


	return 0;
}