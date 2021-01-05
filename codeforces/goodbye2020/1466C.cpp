#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<stack>
#include<numeric>
#define ll long long int

using namespace std;
bool check(string str) 
{ 
    int l = 0; 
    int h = str.size() - 1; 
    if(h==0)
    return 0;
    while (h > l) 
    { 
        if (str[l++] != str[h--]) 
        { 
            return 0; 
        } 
    } 
//        cout<<str<<endl;
    return 1;
}
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
		ll q=1,cnt=0;
		ll m[26]={0};
		for(ll i=0;i<s.size();i++)
		m[int(s[i])-97]=1;
		for(ll i=0;i<26;i++)
		{
			if(m[i]==0)
			{q=i;break;}
		}
		for(ll i=0;i<s.size();i++)
		{
			for(ll j=s.size()-1;j>=i+1;j--)
			{
				string s2=s;
				if(check(s2.substr(i,j)))
				{
					s[((i+j)/2)-1]=char(q+97);
					m[s[((i+j)/2)-1]-97]=1;
					cnt++;
			for(ll k=i;k<26;k++)
		{
			if(m[k]==0)
			{q=k;break;}
		}
					//cout<<i<<" "<<j<<" "<<s<<endl;
				}
			}
		}
		cout<<s<<" "<<cnt<<endl;
			
			
	}
    return 0;
}
