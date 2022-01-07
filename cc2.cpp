//https://www.codechef.com/submit/CARSELL

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define modl  1000000007
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll ans=0;
	    vector<ll> v(n);
	    for(ll i=(ll)0;i<n;i++){
	        cin>>v[i];
	    }
	    sort(v.begin(),v.end(),greater<ll>());
	    for(ll i=(ll)0;i<n;i++){
	      ans+=max((ll)0,v[i]-i);  
	      ans%modl;
	    }
	    cout<<ans<<endl;
	   
	}
	return 0;
}