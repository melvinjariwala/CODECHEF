#include<stdio.h>
int main(){
	int  t, size, k;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		long long int n, l = 0, u = 0;
		scanf("%d", &n);
		long long int a[n], b[n], c[n];
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &b[j]);
		}
		size = sizeof(b) / sizeof(b[0]);
		for (int j = 0; j < size; j++)
		{
			for (k = 0; k < j; k++)
			{
				if (b[j] == b[k])
				{
					break;
				}
				
			}
			if (j == k)
			{
				u++;
			}
		}
		
	}
	
	
}