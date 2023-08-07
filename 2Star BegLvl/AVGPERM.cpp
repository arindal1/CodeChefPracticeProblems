#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x=1;
		cin>>n;
		if(n==3)
		{
			cout<<"1 2 3\n";
			continue;
		}
		int a[n];
		for(int i=0;i<n;++i)
		{
			a[i]=0;
		}
		a[0]=n;
		a[n-1]=n-1;
		a[n-2]=n-2;
		a[1]=n-3;
		for(int i=0;i<n;++i)
		{
			if(a[i]==0)
			{
				a[i]=x;
				x++;
			}
		}
		for(int i=0;i<n;++i)
		{
			cout<<a[i]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
