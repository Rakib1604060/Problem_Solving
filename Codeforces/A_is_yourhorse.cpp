#include<bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
	 std::map<long, int> mmap;
	 for (int i = 0; i < 4; ++i)
	 {
	 	 long a;
	 	 cin>>a;
	 	 mmap.insert(pair<long,int>(a,i));

	 }
	 cout<<4-mmap.size();
  
	return 0;
}