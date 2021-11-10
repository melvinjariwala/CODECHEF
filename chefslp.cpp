#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, n, l, r, x;
	cin>>t;
	while (t--)
	{
		cin>>n>>l>>x;
		r = n - l;
		cout<<x * min(l, r)<<endl;
	}
	return 0;
}