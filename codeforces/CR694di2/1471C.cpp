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
		ll n,m;
		cin>>n>>m;
		ll a[n];
		for(ll i=0;i<n;i++)
		cin>>a[i];
		sort(a, a+ n, greater<int>());
		ll b[m];
		for(ll i=0;i<m;i++)
		cin>>b[i];
		ll j=0;
		ll sum=0;
		for(ll i=0;i<n;i++)
		{
			if(b[a[i]-1]<=b[j])
			{sum+=b[a[i]-1];}
			else
			{sum+=b[j];j++;}
		}
		cout<<sum<<endl;
	}
    return 0;
}
