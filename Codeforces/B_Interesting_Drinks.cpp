#include<bits/stdc++.h>
using namespace std;


int n;

int bsearch(int low, int high,int arr[],int item){
   if (low>=high)
   {
        return low;
   }
 
    int mid=low+(high-low)/2;

    if (arr[mid]>item)
    {
        if (mid-1>=0&&arr[mid-1]<item)
            return mid;
        else
        bsearch(low,mid,arr,item);
    }

    else if (arr[mid]<item)
    {  
        if(mid+1<n&&arr[mid+1]>item)
            return mid+1;
        else
           bsearch(mid,high,arr,item);
    }
    else if (arr[mid]==item)
    {
        return mid+1;
    }
    

}



int main(int argc, char const *argv[])
{
	
	cin>>n;
	int m;
	int a[n+1];

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	cin>>m;
	sort(a,a+n);

   

	for (int i = 0; i < m; i++)
	{
		int aa;
		cin>>aa;
        

        if(aa>=a[n-1])
            cout<<n<<endl;
        else if(aa<a[0])
            cout<<0<<endl;
        else
		    cout<<bsearch(0,n,a,aa)<<endl;
      

	}
	return 0;
}