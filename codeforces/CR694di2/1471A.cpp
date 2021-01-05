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
		ll n,x;
		cin>>n>>x;
		ll a[n],sum=0,sum2=0;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=ceil(double(a[i])/x);
			sum2+=a[i];
		}sum2=ceil(double(sum2)/x);
		cout<<min(sum2,sum)<<" "<<max(sum2,sum)<<endl;
	}
    return 0;
}
