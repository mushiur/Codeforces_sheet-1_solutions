#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;cin>>a>>b>>c;

	if(a<=b && a<=c)
	{
		cout<<a<<endl;
		(b<c)?cout<<b<<endl<<c<<endl:cout<<c<<endl<<b<<endl;
	}
	else if(b<=a && b<=c)
	{
		cout<<b<<endl;
		(a<c) ?cout<<a<<endl<<c<<endl:cout<<c<<endl<<a<<endl;		
	}
	else if(c<=a && c<=b)
	{
		cout<<c<<endl;
		(a<b)?cout<<a<<endl<<b<<endl:cout<<b<<endl<<a<<endl;
	}


	cout<<"\n"<<a<<endl<<b<<endl<<c<<endl;
	return 0;
}