#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long
int main(){
	int t;
	cin>>t;
	while (t--){
		string n;
		cin>>n;
		ll sum = 0;
		for (int i = 0; i < n.size() ; i++){
			sum = sum + (int)n[i] - 48;
		}
		cout<<sum<<endl;
	}
	return 0;
}