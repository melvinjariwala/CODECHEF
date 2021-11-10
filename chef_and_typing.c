#include<stdio.h>
#include<string.h>
int main(){
	int t, n;
	
	char str[20];
	scanf("%d", &t);
	for (int i = 0; i < t; i++){
		scanf("%s", str);
		int len = strlen(str);
		printf("%d\n", len);
		int time = 0;
		for (int j = 0; j < 4; j++){
			if (j=0)
			{
				time = time + 2;
				continue;
				
			}
			else if (str[j-1] == 'd' && str[j] == 'j')
			{
				time = time + 2;
				continue;
				
			}
			else if (str[j-1] == 'f' && str[j] == 'j')
			{
				time = time + 2;
				continue;
				
			}
			else if (str[j-1] == 'd' && str[j] == 'k')
			{
				time = time + 2;
				continue;
				
			}
			else if (str[j-1] == 'f' && str[j] == 'k')
			{
				time = time + 2;
				continue;
				
			}
			else if (str[j-1] == 'j' && str[j] == 'd')
			{
				time = time + 2;
				printf("\n2\t%d", time);
				
			}
			else if (str[j-1] == 'k' && str[j] == 'd')
			{
				time = time + 2;
				printf("\n2\t%d", time);
				
			}
			else if (str[j-1] == 'j' && str[j] == 'f')
			{
				time = time + 2;
				printf("\n2\t%d", time);
				
			}
			else if (str[j-1] == 'k' && str[j] == 'f')
			{
				time = time + 2;
				printf("\n2\t%d", time);
				
			}
			else if ((str[j-1] == 'd' || str[j-1] == 'f') && (str[j] == 'd' || str[j] == 'f'))
			{
				time = time + 0.400000;
				printf("\n3\t%d", time);
				
			}
			else if ((str[j-1] == 'j' || str[j-1] == 'k') && (str[j] == 'j' || str[j] == 'k'))
			{
				time = time + 0.400000;
				printf("\n4\t%d", time);
				
			}
		}
		printf("%d", time);
	}
	return 0;
}