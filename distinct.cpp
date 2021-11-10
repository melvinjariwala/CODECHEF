#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cout.tie(0);

bool cmp(pair<long,long> & a, pair<long,long> &b){
	return a.second < b.second;
}
void solve(){
	long long n;
	cin>>n;
	vector<pair<long,long>> array;
	for (int i = 0; i < n; i++)
	{
		long long k;
		cin>>k;
		array.push_back(make_pair(k,i));
	}
	sort(array.begin(), array.end());
	long long x = 0;
	for (int i = 0; i < n; i++)
	{
		if (array[i].first>x)
		{
			array[i].first = x;
			x++;
		}
		else if (x==array[i].first)
		{
			array[i].first = x;
		}
		
	}
	sort(array.begin(), array.end(), cmp);
	for (int i = 0; i < n; i++)
	{
		cout<<array[i].first<<" ";
	}
	cout<<"\n";
}
int main(){
	IOS;
	int t;
	cin >> t;
	int tc = 0;
	while (t--)
	{
		solve();
	}
	return 0;
}