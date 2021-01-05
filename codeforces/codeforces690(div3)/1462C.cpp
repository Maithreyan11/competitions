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
		ll x;
		cin>>x;
		if(x>45)
		cout<<"-1"<<endl;
		else{
			if(x<=9)
			cout<<x<<endl;
			else if(x<=17)
			cout<<x%9<<"9"<<endl;
			else if(x<=24)
			cout<<x%17<<"89"<<endl;
			else if(x<=30)
			cout<<x%24<<"789"<<endl;
			else if(x<=35)
			cout<<x%30<<"6789"<<endl;
			else if(x<=39)
			cout<<x%35<<"56789"<<endl;
			else if(x<=42)
			cout<<x%39<<"456789"<<endl;
			else if(x<=44)
			cout<<x%42<<"3456789"<<endl;
			else if(x==45)
			cout<<"123456789"<<endl;
		}
		
	}
    return 0;
}
