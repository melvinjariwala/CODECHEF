#include <stdio.h>
void main(){
	int t, a, b, c;
	scanf("%d", &t);
	for (int i = 0; i < t; i++){
		scanf("%d %d %d", &a, &b, &c);
		if (a == 7 || b == 7 || c == 7){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}	
	}
}