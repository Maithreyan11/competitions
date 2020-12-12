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
		ll n,k;
		cin>>n>>k;
		for(ll i=1;i<=k;i++)
		{
			cout<<"a";
		}
		for(ll i=1;i<=n-k;i++)
		{
			cout<<"b";
			i++;
			if(i<=n-k)
			cout<<"c";
			i++;
			if(i<=n-k)
			cout<<"a";
		}
		cout<<endl;
	}
    return 0;
}
