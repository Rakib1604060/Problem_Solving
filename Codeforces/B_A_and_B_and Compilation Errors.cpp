#include<bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[])
{
	int n;
    cin>>n;
    
    int a=0,b=0,c=0;

    for (int i = 0; i <n ; ++i)
    {
    	int tem;
    	cin>>tem;
    	a+=tem;

    }
      for (int i = 0; i <n-1 ; ++i)
    {
    	int tem;
    	cin>>tem;

    	b+=tem;
    }
   for (int i = 0; i <n-2 ; ++i)
    {
    	int tem;
    	cin>>tem;
    	c+=tem;
    }
    cout<<a-b<<endl;
    cout<<b-c<<endl;
    
	return 0;
}