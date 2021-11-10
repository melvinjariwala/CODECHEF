#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll t, n, k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		if (k==0){
			cout<<"YES"<<endl;
			cout<<"0"<<endl;
			continue;
		}
		if (k%2==0){
			cout<<"NO"<<endl;
			continue;
		}
		ll m = 0;
		for (ll i = 31; i >= 0; i--){
			if (((1<<i)&k)!=0){
				m = i + 1;
				break;
			}
		}
		k = (k + (1<<m)-1)/2;
		cout<<"YES"<<endl;
		cout<<m<<endl;
		int ans = 1;
		vector<int> a;
		for (int i = m - 2; i >= 0; i--){
			if (((1<<i)&k)!=0){
				a.push_back(ans);
				ans+=(1<<i);
			}
			else{
				ans-=(1<<i);
				a.push_back(ans);
			}
		}
		for (int i = m - 2; i >= 0; i--){
			cout<<a[i]<<endl;
		}
		cout<<ans<<endl;
	}
}