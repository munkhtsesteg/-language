#include <stdio.h>
#include <string.h>
int main()
{
	char sen[100], i, count, ch, max=0, vg=0, ih;
	gets(sen);
	for(i = 0, count=0; i < strlen(sen); i++)
	{
		switch(sen[i])
		{
			case 'a':
				count++;
				break;
			case 'e':
				count++;
				break;
			case 'i':
				count++;
				break;
			case 'o':
				count++;
				break;
			case 'u':
				count++;
				break;
			case 'y':
				count++;
				break;
		}
		if(!((sen[i]>=65 && sen[i]<=90) || (sen[i]>=97 && sen[i]<=122)))
			{
				vg++;	
				if(max < count)
				{
					ih=vg;
					max=count;
				}
				count=0;
			}

            
	}
	printf("%d-r vg hamgiin ih %d egshigtei", ih, max);
	return 0;
}