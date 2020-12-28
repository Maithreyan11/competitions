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
		string s;
		cin>>s;
		if(s.size()%2!=0)
		{
			cout<<"NO"<<endl;
			continue;
		}
		if(s[s.size()-1]=='(')
		{
			cout<<"NO"<<endl;
			continue;
		}
		ll a=0,flag=0,b=0;
		for(ll i=0;i<s.size();i++)
		{
			if(s[i]=='?')
			b++;
			if(s[i]=='(')
			a++;
			if(s[i]==')')
			{
				if(a>0)
			     a--;
			     else
			     b--;
			}
			if(b+a<0)
			{
				flag=1;	
				break;
			}
		}
		if(flag==1)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
    return 0;
}
