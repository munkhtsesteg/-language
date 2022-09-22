#include <stdio.h>
#include <string.h>
int main()
{
	char sen[100], i, j, vg[100], urt, ehlel, tugsgul, a[100], count=0;
	gets(sen);
	gets(vg);
	for(i = 0; i < strlen(sen); i++)
	{
		for(j = 0, ehlel = i; sen[i] == vg[j]; j++, i++);
		tugsgul = i;
		if(j == strlen(vg) && !(sen[i]>=97 && sen[i]<=122))
		{
			printf("%d-%d hvrtel temdegtuud bn\n", ehlel+1, tugsgul);
			count++;
		}
	}
	count == 0 && puts("-1");
	return 0;
}