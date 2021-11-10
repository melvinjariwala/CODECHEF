#include<stdio.h>
#include<string.h>
int main(){
	int t, x, y;
	char str[30];
	scanf("%d", &t);
	for (int j = 0; j < t; j++){
		int count1 = 0, streak = 0, temp = 0;
		scanf("%d %d", &x, &y);
		scanf("%s", str);
		for (int i = 0; i < 30; i++){
			if (str[i] == '1'){
				count1++;
				temp++;				
			}
			else{
				temp = 0;
			}
			if (temp > streak){
				streak = temp;
			}
		}
		printf("%d\n", (count1*x) + (streak * y));
	}
	return 0;
}