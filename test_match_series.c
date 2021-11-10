#include<stdio.h>
int main(){
	int t, r[5]; 
	scanf("%d", &t);
	for (int i = 0; i < t; i++){
		int count0 = 0, count1 = 0, count2 = 0;
		for (int j = 0; j < 5; j++){
			scanf("%d", &r[j]);
			if (r[j] == 0){
				count0++;
			}
			else if (r[j] == 1){
				count1++;
			}
			else if (r[j] == 2){
				count2++;
			}
		}
		if (count1 > count2 && count1 > count0){
			printf("INDIA\n");
		}
		else if (count2 > count1 && count2 > count0){
			printf("ENGLAND\n");
		}
		else if (count1 == count2 || count0 > count1 || count0 > count2){
			printf("DRAW\n");
		}
	}
	return 0;
}