#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ll t, n, mid, dif1, dif2, beauty, move;
	cin>>t;
	while (t--){
		cin>>n;
		ll a[n];
		for (ll i = 0; i < n; i++){
			cin>>a[i];
		}
		sort(a, a+n);
		if (n == 2){
			cout<<"0"<<"\n";
		}
		mid = (n-1)/2;
		dif1 = (a[mid])-(a[0]);
		dif2 = (a[n-1])-(a[mid+1]);
		if (dif1 < dif2){
			move = dif2 - dif1;
		}
		else if (dif2 < dif1){
			move = dif1 - dif2;
		}
		else if (dif1 == dif2){
			move = 0;
		}
		cout<<move<<"\n";
	}
	return 0;
}