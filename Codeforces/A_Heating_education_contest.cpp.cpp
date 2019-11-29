#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{  
	int n;
	cin>>n;
	int c,sum;

	for (int i = 0; i <n; ++i)
	{ 
		cin>>c>>sum;

		if (sum<=c)
		{
			cout<<sum<<endl;
		}
		else 
		{
		   int divide=sum/c;
		   int mod=sum%c;

		

		   if (mod==0)
		   {
		   	 long ans=(divide*divide)*c;
		   	 cout<<ans<<endl;

		   }else{
		   	long diff=c-mod;
            long anss=(divide*divide)*diff;
            divide++;
            anss=anss+((divide*divide)*mod);
            cout<<anss<<endl;

		   }


		}

  
	}
	
	return 0;
}