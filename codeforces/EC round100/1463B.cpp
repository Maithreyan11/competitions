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
		ll a[n],o=0,b[n],e=0;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=a[i];
			if(i%2==0)
			e+=a[i];
			else
			o+=a[i];
		}
		if(e>o)
		{
			for(ll i=1;i<n;i+=2)
			b[i]=1;
		}
		else
		{
			for(ll i=0;i<n;i+=2)
			b[i]=1;
		}
		for(ll i=0;i<n;i++)
		cout<<b[i]<<" ";
		cout<<endl;
		
	}
    return 0;
}
