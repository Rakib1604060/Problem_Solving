#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  std::vector<int> p;
  std::vector<int> q;

  for (int i = 0; i < n; ++i)
    { 
  	int a;
  	cin>>a;

  	p.push_back(a);
  	cin>>a;
  	q.push_back(a);
 	}
 	int count=0;
   for (int i = 0; i <p.size(); ++i)
   {

   	 if (q[i]-p[i]>=2)
   	 {
   	 	count++;
   	 }

   }
   cout<<count;

}