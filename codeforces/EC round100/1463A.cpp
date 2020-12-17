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
		ll a,b,c,k,m=1;
		cin>>a>>b>>c;
		ll sum=a+b+c;
		k=sum/9;
		k=max(m,k);
		if(a>=k&&b>=k&&c>=k&&sum%9==0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
    return 0;
}
