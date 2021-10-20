#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    vector<ll>v;
	    v.push_back(1);
	    ll d=n-1;
	    for(ll i=n-2;i>=0;i--){
	        if(a[i]*a[i+1]<0)
	        v.push_back(d-i+1);
	        else{
	        v.push_back(1);         
	        d=i;
	        }
	    }
	    reverse(v.begin(),v.end());
	    for(int i=0;i<v.size();i++)
	    cout<<v[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
