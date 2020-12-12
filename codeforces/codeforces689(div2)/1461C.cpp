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
		double ans=0.0;
		ll x,flag=-1;
			for(ll i=n-1;i>=0;i--)
			{
				//cout<<"hai"<<endl;
				if(a[i]!=i+1){
				flag=i;
				break;
			}
		}
		double p,y=1.0;
		while(m--)
		{
			cin>>x>>p;
			if(x-1>=flag)
			{
				//cout<<y<<" "<<p<<endl;
				ans+=y*p;
				y=1.0-ans;
			}
			//cout<<ans<<endl;
		}
		//cout<<flag<<endl;
		if(flag==-1)
		{
			ans=1.0;
		}
		cout<<ans<<endl;
			
	}
    return 0;
}
