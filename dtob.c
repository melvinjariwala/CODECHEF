#include<stdio.h>
void main(){
	int dec, bin[10], i = 0;
	printf("Enter decimal : ");
	scanf("%d", &dec);
	while (dec > 0)
	{
		bin[i] = dec % 2; 
		dec = dec / 2;
		i++;
	}
	printf ("Binary : ");
	for ( i = i - 1; i >= 0; i--)
	{
		printf("%d", bin[i]);
	}
	printf("\n");
}