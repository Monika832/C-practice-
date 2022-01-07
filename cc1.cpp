//https://www.codechef.com/submit/RAMDEV

#include <bits/stdc++.h>
using namespace std;


int main() {
	long long l,b;
	long long N;
	long long L,B;
	cin>>l>>b;
	cin>>N;
	long long ans=0;
	for(int i=0;i<N;i++){
	    cin>>L>>B;
	   
	    ans+=max((L/l)*(B/b),(L/b)*(B/l));
	    
	}
	cout<<ans;
	return 0;
}