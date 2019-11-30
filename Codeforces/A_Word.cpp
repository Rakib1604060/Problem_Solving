#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string myname;
	cin>>myname;
	int lower=0;
	

	for (int i = 0; i < myname.size(); ++i)
	{
		 if (islower(myname.at(i)))
		 	        lower++;
		}

	 
	 if (lower>=(myname.size()-lower)){
	        for (int i = 0; i < myname.size(); ++i)
              myname.at(i)= tolower(myname.at(i));
	 }
	 else{
	 	for (int i = 0; i < myname.size(); ++i)
	 	    myname.at(i)= toupper(myname.at(i));
	 }

	 cout<<myname<<endl;

	   
   

	return 0;
}