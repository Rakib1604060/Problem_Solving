#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	string game;
	cin>>n>>game;
	int anton=0;

    for (int i = 0; i < game.size(); ++i)
    {
    	if (game.at(i)=='A')
    	    anton++;

    }

   if (anton==(n-anton))
      cout<<"Friendship"<<endl;
   else if (anton>(n-anton))
      cout<<"Anton"<<endl;
   else
   	cout<<"Danik"<<endl;
   

	return 0;
}