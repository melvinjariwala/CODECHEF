#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define max 1000000
int main(){
	long long int t;
	while (t--)
	{
		//char *s1, *s2, *x;
		char *s1 = (char*)malloc (sizeof (char) * (int) pow(10,100));
		char *s2 = (char*)malloc (sizeof (char) * (int) pow(10,100));
		char *x = (char*)malloc (sizeof (char) * (int) pow(10,100));
		scanf("%s", s1);
		scanf("%s", s2);
		scanf("%s", x);
		int size1 = sizeof(s1)/sizeof(s1[0]);
		int size2 = sizeof(s2)/sizeof(s2[0]);
		int sizex = sizeof(x)/sizeof(x[0]);
		printf("%d\t%d\t%d", size1, size2, sizex);
		free(s1);
		free(s2);
		free(x);
	}
	
}