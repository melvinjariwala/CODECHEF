#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define pro 1000000
#define max 10000000
long long int a[max];
void sieveof(int y){
	for (int i = 0; i < y; i++)
	{
		a[i] = 1;
		printf("First Loop");
	}
	
	for (int i = 2; i <= sqrt(y); i++)
	{
		printf("Second Loop");
		if (a[i] == 1)
		{
			for (int j = i*i; j < max; j=j+i)
			{
				
				a[i] == 0;
			}	
		}
	}
}
int main(){
	long long int x, y, t;
	
	scanf("%d", &t);
	
	for (int i = 0; i < t; i++)
	{
		int count = 0;
		scanf("%d %d", &x, &y);
		sieveof(y);
		for (int j = x; j < y; j++)
		{
			if (a[j+2] == 1)
			{
				j++;
				count++;
			}
			else
			{
				count++;
			}
			
			
		}
		printf("%d\n", count);
	}
	
	
}