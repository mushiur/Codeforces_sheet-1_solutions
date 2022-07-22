#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
	char c;
	cin>>c;
	if(c>='A' and c<='Z')
		cout<<("ALPHA\nIS CAPITAL\n");
	else if(c>='a' and c<='z')
		cout<<("ALPHA\nIS SMALL\n");
	else 
		cout<<"IS DIGIT\n";
	return 0;


}