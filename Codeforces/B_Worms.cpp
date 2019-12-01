#include<bits/stdc++.h>
using namespace std;
int n=0;

int bsearch(int low,int high,int arr[],int item);


int main(int argc, char const *argv[])
{

	cin>>n;
	int a[n];
	int j=0;
	int m=0;


	for (int i = 0; i < n; i++)
	{
		int tem;
		cin>>tem;
		if (i==0)
		{
		  a[i]=tem;	 
		}
        else 
        {

         a[i]=a[i-1]+tem;
        }
        
	}



  cin>>m;
  for (int i = 0; i < m; ++i)
  {
  	int temp;
  	cin>>temp;
  	cout<<bsearch(0,n,a,temp)<<endl;


  }


	return 0;
}

int bsearch(int low,int high,int arr[],int item){

    int mid=low+(high-low)/2;
    

   if (low>=high)
    {

    return low+1;
    }

	if (arr[mid]>item)
	{
		
		if ((mid-1)!=0&&arr[mid-1]<item)
	         return mid+1;
	     else
	       bsearch(low,mid,arr,item);

		
	}
	else if (arr[mid]==item)
	{ 		

		return mid+1;
	}
	else if (arr[mid]<item)
	{
				

		if (mid+1<=n&&arr[mid+1]>=item)
	         return mid+2;
	     else
	       bsearch(mid,high,arr,item);
	}


}

