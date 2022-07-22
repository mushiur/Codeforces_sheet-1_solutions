#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
	cin>>n;
 
	int y=n/365; n%=365;
	int m=n/30; n%=30;
	int d=n;
	cout<<y<<" years\n"
	<<m<<" months\n"
	<<d<<" days\n";
}