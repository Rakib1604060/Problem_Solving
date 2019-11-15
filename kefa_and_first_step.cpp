#include<bits/stdc++.h>
using namespace std;

int main(){

 int n;
 std::vector<int> a;
 int tem=0; 
 cin>>n;
 int counter=0;
 int max=0;

 if (n==1)
 {
 	cout<<"1";
 	return 0;
 }


 for (int i = 0; i < n;i++)
 {
     cin>>tem;
 	 a.push_back(tem);

     if (i!=0)
     { 
     
     	if (a[i-1]<=a[i])
     	{  
     		counter+=1;

     		if (max<counter)
     		{
     			max=counter;
     		}
     		
     	}
     else{
     	 counter=0;
     	}
     }

 }
 cout<<max+1;
 return 0;


}