#include <stdio.h>
#include <string.h>

void print(char a[][10], int size);
void sort(char a[][10], int size);
int search(char a[][10], char *word, int size);

int main()
{
	int n, i, s;
	scanf("%d", &n);
	char a[n][10];
	char *word;
	for(i = 0; i < n; i++)
		scanf("%s", a[i]);
	sort(a, n);
	print(a, n);
	printf("Haih vgee oruulna uu: ");
	scanf("%s", word);
	s = search(a, word, n);
	printf("%d-r vg: %s", s, word);
	return 0;
	
}

void print(char a[][10], int size)
{
	int i;
	for(i = 0; i < size; i++)
		printf("%d. %s\n", i+1, a[i]);
}

void sort(char a[][10], int size)
{
	char tmp[10];
	int i, j;
	for(i = 0; i < size; i++)
		for(j = i + 1; j < size; j++){
			if(strcmp(a[i], a[j]) > 0){
				strcpy(tmp, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], tmp);
			}
		}
}

int search(char a[][10], char *word, int size)
{
	int i, s;
	for(i = 0, s = -1; i < size; i++){
		if(strcmp(word, a[i]) == 0)
			s = s + i + 2;
	}
	return s;
}