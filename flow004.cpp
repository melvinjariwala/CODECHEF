#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;
	string n;
	cin>>t;
	while (t--){
		cin>>n;
		ll len = n.size();
		cout<<n[0]+n[len-1]-96<<endl;
	}
	return 0;
}