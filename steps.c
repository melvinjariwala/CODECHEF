#include<stdio.h>
int prime(int m){
	for(int k = 2; k <= m/2; k++){
		if(m%k != 0){
			continue;
		}
		else{
			return 1;
		}
	}
	return 0;
}
int main(){
	long int t, x, y;
	int flag;
	scanf("%d", &t);
	for (int i = t; i > 0; i--){
		int count = 0;
		scanf("%d %d", &x, &y);
		for (int j = x; j < y; j++){
			flag = prime(j+2);
			if (flag == 0 && ((j+2) != y)){
				j = j + 1;
				count++;
			}
			else if(flag == 1){
				count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}