#include<stdio.h>
long int a[100000];
void swap(long int *b, long int *c) {
  int t = *b;
  *b = *c;
  *c = t;
}
int partition(long int array[], int low, int high) {
	int pivot = array[high];
	int i = (low - 1);
	for (int j = low; j < high; j++) {
		if (array[j] <= pivot) {
    		i++;
      		swap(&array[i], &array[j]);
    	}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}
void quickSort(long int array[], int low, int high) {
	if (low < high){
		int pi = partition(array, low, high);
    	quickSort(array, low, pi - 1);
    	quickSort(array, pi + 1, high);
	}
}
int main(){
	long int t, n, mid, dif1, dif2, beauty, move;
	scanf("%ld", &t);
	for (int j = t; j > 0; j--){
		scanf("%ld", &n);
		for (int i = 0; i < n; i++){
			scanf("%ld", &a[i]);
		}
		if(n == 2){
		    move = 0;
		    printf("%ld\n", move);
		    break;
		}
		quickSort(a, 0, n-1);
		mid = (n-1)/2;
		dif1 = (a[mid])-(a[0]);
		dif2 = (a[n-1])-(a[mid+1]);
		if (dif1 < dif2){
			move = dif2 - dif1;
		}
		else if (dif2 < dif1){
			move = dif1 - dif2;
		}
		else if (dif1 == dif2){
			move = 0;
		}
		else{
		    move = 0;
		}
		printf("%ld\n", move);
	}
	return 0;
}