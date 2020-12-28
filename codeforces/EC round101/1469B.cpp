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
		ll r[n],sum1[n]={0},s=0;
		for(ll i=0;i<n;i++)
		{
			cin>>r[i];
			s+=r[i];
			sum1[i]=s;
		}
		ll m;
		cin>>m;
		ll b[m],sum2[m]={0};
		s=0;
		for(ll i=0;i<m;i++)
		{
			cin>>b[i];
			s+=b[i];
			sum2[i]=s;
		}
		ll maxx1=0;
		for(ll i=0;i<n;i++)
		{
			if(sum1[i]>maxx1)
			maxx1=sum1[i];
			//cout<<maxx1<<endl;
		}
		ll maxx2=0;
		for(ll i=0;i<m;i++)
		{
			if(sum2[i]>maxx2)
			maxx2=sum2[i];
			//cout<<maxx2<<endl;
		}
		cout<<maxx1+maxx2<<endl;
			
		
		
	}
    return 0;
}
