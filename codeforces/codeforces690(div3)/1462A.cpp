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
		ll a[n],b[n];
		ll j=0,k=n-1;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		while(j<=n/2&&k>=n/2)
		{
			if(n%2!=0&&j==n/2)
			{
				cout<<a[j];
				break;
			}
			cout<<a[j++]<<" "<<a[k--]<<" ";
		}
		cout<<endl;
		
	}
    return 0;
}
