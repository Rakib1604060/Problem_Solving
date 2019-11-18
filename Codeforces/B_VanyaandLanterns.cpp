#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, l;
	cin>>n>>l;
    double diffrence=0.00;
    int roadLight[n+3];
    double roadDist[n+1];
    bool isZero=false;
    bool isLenth=false;

    
	for (int i = 0; i < n; ++i)
	{
		cin>>roadLight[i];
	}
   


  sort(roadLight,roadLight+n);
   if (roadLight[0]==0)
   {
     isZero=true;
   }
   if (roadLight[n]==l)
   {
     isLenth=true;
   }



  for (int i = 0; i < n+1; ++i)
  {
  
   if (i==0&&isZero)
   {
     roadDist[0]=0;
   }else if (i==0&&isZero==false)

   {
     roadDist[0]=roadLight[0]-0;

   }

   if (i!=0&&i!=n)
   {
     roadDist[i]=(roadLight[i]-roadLight[i-1])/2.0;
   }
   if (i==n&&isLenth)
   {
     roadDist[n]=roadLight[n]-roadLight[n-1];
   }else if (i==n&&isLenth==false)
   {
     roadDist[n]=l-roadLight[n-1];
   }


  if (diffrence<roadDist[i])
  {
    diffrence=roadDist[i];
  }
  
  	
  }

cout<<fixed<<setprecision(10)<<diffrence<<endl;
	return 0;
}

