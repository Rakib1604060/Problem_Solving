#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	
	int a=0,val=0,b=0,c=0;

	cin>>n;


	for (int i = 0; i < n*3; ++i)
	{
		if (i%3==0)
		{
		    cin>>val;
		    a=a+val;
		  
		   
        }else if (i%3==1)
        {
        	cin>>val;
		    b=b+val;
		   
        }else
        {
        	cin>>val;
		    c=c+val;
		}
		
	}


     
	if (a!=0||b!=0||c!=0)
	{
	cout<<"NO";
	}else{
		cout<<"YES";
	}


	return 0;
}