//Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
using namespace std;
bool comp(int a, int b) 
{ 
    return (a < b); 
} 

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
    int a[m+1][n+1];
    int b[n+1];
    int maxx=0;
    int c[n+1];
    int counter=0;

    for (int i = 0; i <=n; ++i)
    {
    	 b[i]=0;
    	 c[i]=0;
    }

    for (int i = 0; i < m; ++i)
    {

    	 for (int j = 0; j <n ; ++j)
    	 {
    	 	 int tem;
    	 	 cin>>tem;
    	 	 a[i][j]=tem;
    	 	 b[j]+=tem;

    	 	 if (j>0)
    	 	 {
    	 	 	if(a[i][j]>a[i][maxx])
    	 	 		maxx=j;
    	 	 }

           if (j==n-1)
             {  
             	if (maxx==j)
             	{   cout<<"YES"<<endl;
             		int aa=i+1;
             		c[counter]=aa; 
             		counter++;
             	}
             	maxx=0;
             }
        }
    }




   for (int i = 0; i < n; ++i)
   { 
   	if (i>0)
   	{
   		if (b[i]>b[maxx])
   		{
   			maxx=i;
   		}
   	}
   }


   if (maxx==n-1)
   {
   	cout<<"lagbe"<<endl;
     cout<<counter<<endl;

     for (int k = 0; k <counter; k++)
     {
     	cout<<c[k]<<" ";
     }

   }
   else{
   	cout<<0<<endl;
   	cout<<b[n-1]<<endl;

   }
 
	return 0;
}