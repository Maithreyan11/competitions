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
		ll x[n];
		for(ll i=0;i<n;i++)
		cin>>x[i];
		unordered_map<ll,ll> mp;
		ll cnt=0;
		for(ll i=0;i<n;i++)
		{
			mp[x[i]]++;
		}
		ll q=0;
		for(ll i=0;i<n;i++)
		{
			if(mp[x[i]]!=-1)
			{
				if(mp[x[i]]==1)
				{
					cnt++;
					mp[x[i]]=-1;
					if(i!=0&&x[i]==q)
					q=x[i]+1;
				}
				if(mp[x[i]]>=2)
				{
					if(x[i]==q)
					{
						cnt++;
						q=x[i]+1;
						mp[x[i]]=-1;
					}
					else
					{
						cnt+=2;
						q=x[i]+1;
						mp[x[i]]=-1;
					}
				}
			}
		}
		cout<<cnt<<endl;
	}
    return 0;
}
