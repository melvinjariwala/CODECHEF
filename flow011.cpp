#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define ll long long
int main(){
	int t;
	ll salary;
	cin>>t;
	while (t--){
		cin>>salary;
		if (salary < 1500){
			cout<<2*salary<<endl;
		}
		else if (salary >= 1500){
			cout<<std::fixed<<std::setprecision(2)<<500+(salary*1.98)<<endl;
		}
	}
	return 0;
}