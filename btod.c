#include<math.h>
#include<stdio.h>
int main(){
	int bin, dec  = 0, i = 0;
	printf("Enter binary : ");
	scanf("%d", &bin);
	while (bin > 0)
	{
		dec = dec + (bin % 10)*pow(2, i);
		bin = bin / 10;
		i++;
	}
	printf("Decimal : %d", dec);
	return 0;
}