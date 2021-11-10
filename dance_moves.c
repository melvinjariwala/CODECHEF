#include<stdio.h>
int main(){
	long int t;
	scanf("%ld", &t);
	while(t--){
		long int x, y, ans;
		scanf("%ld %ld", &x, &y);
		long int dif = y - x;
		if(x < y){
    		if((dif)%2==0){
    			ans = (dif)/2;
    		}
    		else if((dif)%2!=0){
    			ans = ((dif)/2)+2;
    		}
		}	
		else if(x==y){
		    ans = 0;
		}
		else{
		    ans = dif;
		}
	printf("%ld\n", ans);
    }
	return 0;
}