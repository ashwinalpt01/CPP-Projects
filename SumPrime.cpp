/*---------------------------------------------Question---------------------------------------------
 Print the Input No. as Sum of Two Prime Numbers in all possible ways
 ---------------------------------------------------------------------------------------------------*/


#include <iostream>
using namespace std;
int main()
{
	int i,j,k=0,l=0,h,t,n,a[1000],m,p;
	cout<<"Enter your No.(<1000):";
	cin>>n;
	for(i=1;i<=1000;++i)
	{
		k=0;
		for(j=1;j<=i;++j)
		{
			if(i%j==0)
			{
				k+=1;
			}
		}
		if(k==2)
		{
			a[l]=i;
			l++;
		}
	}
	for(h=0;h<l;h++)
	{
		for(t=0;t<l;t++)
		{
			if(n==(a[h]+a[t]))
			{
				if(a[h]>n/2)
				{
					break;
				}
			    cout<<n<<"="<<a[h]<<"+"<<a[t]<<"\n";
			}
		}
	}
	return 0;
}