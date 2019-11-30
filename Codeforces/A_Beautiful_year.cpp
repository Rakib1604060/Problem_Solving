#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int year;
	cin>>year;
	
	int a,b,c,d;
	while(true){
	
        year++;
        a=year%10;
        b=year/10%10;
        c=year/100%10;
        d=year/1000;
        if (a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
        {
        	break;
        }

	}
	cout<<year<<endl;
  
	

	return 0;
}