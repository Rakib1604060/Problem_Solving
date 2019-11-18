#include<bits/stdc++.h>

using namespace std;
int check_prime(int n);


 int check_number (long long num){

  double sr=sqrt(num);
  
  if (sr-floor(sr)==0)
  {

     check_prime(sr);

  }else{
  	cout<<"NO"<<endl;
  	return 0;
  }
}

int check_prime(int n){

    if (n <= 1){
    	 cout<<"NO"<<endl;
        return 0;
    } 
       

    if (n <= 3) {
    	  cout<<"YES"<<endl; 
        return 0;
    }
      
 
    if (n % 2 == 0 || n % 3 == 0){
         cout<<"NO"<<endl;
    	 return 0;
    } 
       
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) {
        	cout<<"NO"<<endl;
            return 0; 
        }
  
    cout<<"YES"<<endl;;
    return 0;
} 




int main(int argc, char const *argv[])
{
  int n;
  cin>>n;
  int array[n];

  for (int i = 0; i < n; ++i)
  {
  	long long temp;
  	cin>>temp;
  	check_number(temp);
  }

	return 0;
}

