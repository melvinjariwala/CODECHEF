#include<stdio.h>
int main(){
	long int t, n, x, p;
	scanf("%d", &t);
	while (t--){
		scanf("%d %d %d", &n, &x, &p);
		int marks = (3*x) - (n-x);
		if (marks >= p){
			printf("PASS\n");
		}
		else{
			printf("FAIL\n");
		}
	}
	return 0;
}