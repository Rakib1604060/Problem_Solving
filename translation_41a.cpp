#include<bits/stdc++.h>
using namespace std;

int main(){
 
 string word;
 string second_word;

 cin>>word;
 cin>>second_word;
 int len;
 len=word.length();
 if (len!=second_word.length())
 {
 	cout<<"NO";
 	return 0;
 }
len=len-1;



 for (int i = 0; i < word.length(); ++i)
 {

 	//drow.append(word.at(i));
 	if (word.at(i)!=second_word.at(len-i))
 	{
 		cout<<"NO";
 		return 0;
 	}

 }
 
 cout<<"YES";
 return 0;



}