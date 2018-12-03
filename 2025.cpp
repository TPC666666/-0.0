#include<stdio.h>
#include<string.h>
int main()
{
	char a[999],max;
	while(~scanf("%s",a))
	{
		int i,j=0;
		max='A';
		for(i=0;i<=strlen(a)-1;i++)
		{
			if(a[i]>=max)
			max=a[i];
			
		}
		for(i=1;i<=strlen(a);i++)
		{
			printf("%c",a[i]);
			if(a[i]==max)
			printf("(max)");
		}
		printf("\n");
	
	}
}
