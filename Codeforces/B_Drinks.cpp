#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	
    int n;
    cin>>n;
    int array[n+1];
    double percentage;
    double temp=0.00;


    for (int i = 0; i < n; ++i)
    {
    	cin>>array[i];
    	temp+=array[i]/100.00;

     

    }
 
    percentage=(temp/n)*100;
    cout<<fixed<<setprecision(11)<<percentage;

	return 0;
}