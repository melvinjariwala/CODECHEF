#include<bits/stdc++.h>
using namespace std;
#define l long
int main(){
	l n1, n2, ans;
	cin>>n1>>n2;
	if (n1>n2){
		ans=n1-n2;
		cout<<ans;
	}
	else if (n2>n1){
		ans=n1+n2;
		cout<<ans;
	}
	return 0;
}