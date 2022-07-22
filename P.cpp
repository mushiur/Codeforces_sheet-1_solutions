#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,s;
    cin>>n;
    while(n>=10)
    {
       n = n/10;
    }
    (n%2==0)?cout<<"EVEN":cout<<"ODD";
    return 0;
}
