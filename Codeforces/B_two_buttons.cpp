#include<bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
     int ans=0;
     
     while(m>n){
      if (m%2==1)
      {
      	ans++;
      	m++;

      }else{
        m=m/2;
        ans++;
      }

     }
     ans=ans+(n-m);
     cout<<ans<<endl;


	return 0;
}
