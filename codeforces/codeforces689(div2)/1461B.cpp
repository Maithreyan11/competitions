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
		char a[n][m];
		ll b[n][m+1];
		ll cnt=0;
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<m;j++)
			{
				cin>>a[i][j];
				if(a[i][j]=='*')
				{
					cnt++;
					b[i][j+1]=cnt;
				}
				else
				{
					b[i][j+1]=0;
				}
			}
		}
		ll ans=0;
		for(ll i=0;i<n;i++)
		{
			for(ll j=1;j<=m;j++)
			{
				for(ll k=1;k<n;k++)
				{
					if(b[i][j]!=0&&j+k<=m&&j-k>0&&i+k<n&&(b[i+k][j+k]-b[i+k][j-k]==2*k)){
						//cout<<b[i][j]<<" "<<b[i+k][j-k]<<" "<<b[i+k][j+k]<<endl;
					ans++;}
					else
					break;
				}
			}
		}
		cout<<cnt+ans<<endl;
	}
    return 0;
}
