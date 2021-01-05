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
		ll x[n],a[51]={0},cnt=0;;
		for(ll i=0;i<n;i++)
		cin>>x[i];
		for(ll i=0;i<n;i++)
		{
			for( ll j=i+1;j<n;j++)
			{
				ll k=x[j]-x[i];
					if(a[k]==0){
						a[k]=1;
					cnt++;
				}
			}
		}
		cout<<cnt<<endl;
				
	}
    return 0;
}
