#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, n;
	cin>>t;
	while (t--){
		cin>>n;
		int ans = 0;
		if (n%2==0){
			for (int i = 2; i <= n; i+=2){
				ans = ans + (i*i);
			}
		}	
		else{
			for (int i = 1; i <= n; i+=2){
				ans = ans + (i*i);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}