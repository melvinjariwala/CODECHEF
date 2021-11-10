#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n, k, ans;
		scanf("%d %d", &n, &k);
		ans=(2*n-k-1)/2;
		printf("%d\n", 2*ans);
	}
	return 0;
}