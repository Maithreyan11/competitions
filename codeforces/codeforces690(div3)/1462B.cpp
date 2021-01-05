#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<stack>
#include<numeric>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
		ll n;
		cin>>n;
		string s;
		cin>>s;
		ll flag=0;
		if(s[0]=='2')
		{
				if(s[n-3]=='0'&&s[n-2]=='2'&&s[n-1]=='0')
				flag=1;
				if(s[1]=='0'&&s[n-2]=='2'&&s[n-1]=='0')
				flag=1;
				if(s[1]=='0'&&s[2]=='2'&&s[n-1]=='0')
				flag=1;
				if(s[1]=='0'&&s[2]=='2'&&s[3]=='0')
				flag=1;
			}
			else{
				if(s[n-4]=='2'&&s[n-3]=='0'&&s[n-2]=='2'&&s[n-1]=='0')
				flag=1;
			}
			
		if(flag==1)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
    return 0;
}
