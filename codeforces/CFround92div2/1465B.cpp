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
		while(true)
		{
			ll k=n;
			while(k>0)
			{
				ll dig=k%10;
				//cout<<dig<<endl;
				if(dig==0){
					k/=10;
				continue;
			}
				if(n%dig==0){
					k/=10;
				continue;
			}
				else
				break;
			}
			if(k==0)
			break;
			else
			n++;
		}
		cout<<n<<endl;
	}
    return 0;
}
