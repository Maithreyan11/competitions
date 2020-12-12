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
    ll d1,v1,d2,v2,p;
    cin>>d1>>v1>>d2>>v2>>p;
    ll sum=0,i=1;
    ll flag=0,nxt=0;
    while(sum<p)
    {
		if(flag==1)
		sum+=v1;
		if(i%d1==0&&flag==0)
		{
			sum+=v1;
			flag=1;
		}
		if(nxt==1)
		sum+=v2;
		if(i%d2==0&&nxt==0)
		{
			sum+=v2;
			nxt=1;
		}
		i++;
	}
	cout<<i-1;
    return 0;
}
