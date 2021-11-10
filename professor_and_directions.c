#include<stdio.h>
int main(){
	int t,n;
	scanf("%d", &t);
	for (int i = 0; i < t; i++){
		int cl = 0, cr = 0;
		scanf("%d", &n);
		char str[n];
		scanf("%s", str);
		for (int j = 0; j < n; j++){
			if (str[j] == 'L'){
				cl++;
				cr = 0;
			}
			if (str[j] == 'R'){
				cr++;
				cl = 0;
			}
			if (cr == 2 || cl == 2){
				break;
			}
		}
		if (cr == 2 || cl == 2){
			printf("YES\n");
		}
		else if (cr != 2 || cl != 2){
			printf("NO\n");
		}
	}
	return 0;
}