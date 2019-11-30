#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	
	int n,m;
	cin>>n>>m;
	int ara[n];
	int aro[n];
    int mod=m%9;
    int div=m/9;
    int count=0;
    int a=m;

    while(a!=0){
    	a=a/10;
    	count++;
    }
    if (count>n)
    {
    	cout<<-1<<" "<<-1;
    	return 0;
    }else 
    {
    	if (m>(9*n))
    	{
    		cout<<-1<<" "<<-1;
    	    return 0;
    	}
    }
   
    if (m==0||div>n)
    {
         if (m==0&& n==1)
         {
         	cout<<0<<" "<<0;
         	return 0;
         }
    	cout<<-1<<" "<<-1;
    	return 0;

    }

	for (int i = 0; i < n; ++i){
		ara[i]=0;
		
	}

    for (int i = 0; i < div; ++i)
           ara[i]=9;
    
   ara[div]=mod;

    for (int i = 0; i < n; ++i)
    {
    	 aro[i]=ara[i];
    }
  
  

  if (ara[n-1]==0)
  {
  	ara[n-1]=1;
  	int c=div;

     while(ara[c]==0)
    {
	   c--;
    }
    ara[c]=ara[c]-1;
  
  }
 

   for (int i = n-1; i >=0; --i)
   {
     cout<<ara[i];
   }
    cout<<" ";

   for (int i = 0; i < n; ++i)
            cout<<aro[i];
	return 0;
}