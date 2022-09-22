
   
#include <stdio.h>
#include <string.h>
int main()
{
	char a[100], i;
	gets(a);
	for(i=0 ; i < strlen(a); i++)
	{
		if(a[i]==32)
			printf("\n");
		else
			printf("%c", a[i]);
		
	}
}