#include<bits/stdc++.h>

using namespace std;
int dp[20];

int get_fibo(int n){

 if (n==0)return 0;
 if (n==1) return 1;

 if (dp[n]!=-1)
 {	cout<<dp[n]<<" Save Theke"<<endl;
 	return dp[n];
 
 }
 else {
 	dp[n]= get_fibo(n-1)+get_fibo(n-2);
 	cout<<dp[n]<<endl;
 	return dp[n];
    
 }

}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	for (int i = 0; i < 20; ++i)
	{
		dp[i]=-1;
	}

	get_fibo(n);
	int fibo=get_fibo(n);
	cout<<fibo<<endl;
	return 0;
}
