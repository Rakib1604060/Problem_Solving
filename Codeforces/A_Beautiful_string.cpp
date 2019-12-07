#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	string word;
	bool isposible=true;

	char prev,next,curr;


	for (int j = 0; j < n; ++j)
	{
		cin>>word;


		 for (int i = 0; i < word.length(); i++)
		 {

             curr=word.at(i);


             if (i-1>=0)
            	 prev=word.at(i-1);
            	else 
            		prev='e';

            if (i+1<word.length())
            	next=word.at(i+1);
            else 
            	next='e';

            if ((next==curr||prev==curr)&& next!='?')
            {
            	
            	 cout<<-1<<endl;
            	 isposible=false;

            	 break;
            }

            if (curr=='?')
            {

            	
            	switch(prev){
            		case 'a':
            		  	if (next=='c'||next=='e'||next=='?')word.at(i)='b';
            			else if (next=='b'||next=='e'||next=='?')word.at(i)='c';
            			else if (next=='a'||next=='e'||next=='?')word.at(i)='b';

                    	break;
                    case 'b':
                     	if (next=='c'||next=='e'||next=='?')word.at(i)='a';
            		  	else if (next=='a'||next=='e'||next=='?')word.at(i)='c';
            		  	else if (next=='b'||next=='e'||next=='?')word.at(i)='a';
                      	break;
            		 case 'c':
                     	if (next=='a'||next=='e'||next=='?')word.at(i)='b';
            		  	else if (next=='b'||next=='e'||next=='?')word.at(i)='a';
            		  	else if (next=='c'||next=='e'||next=='?')word.at(i)='b';
                      	break;
                      case 'e':
                       if (next=='a'||next=='e'||next=='?'||next=='c')word.at(i)='b';
            		   else if (next=='b'||next=='e'||next=='?'||next=='c')word.at(i)='a';
            		   else if (next=='a'||next=='e'||next=='?'||next=='b')word.at(i)='c';
            		   else {word.at(i)='c';}
                       break;
            	
            	}
            	
         }
           
            
			 

		}
         if (isposible)
         {
         	cout<<word<<endl; 
         }else
           isposible=true;
		 
	}
	return 0;
}