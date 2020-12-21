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
		ll cnt=0;
		for( ll i=n-1;i>=0;i--)
		{
			if(s[i]==')')
			cnt++;
			else
			break;
		}
		//cout<<cnt<<endl;
		if(cnt>(n-cnt))
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
    return 0;
}
