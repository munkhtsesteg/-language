#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
char s[] = "hello";
char s2[20] = "MUIS-iinhaan"; 
//for (i = 0; i < 5; i++)
//s2[i] = s[i];
strcpy(s2,s);
printf("%s", s);
}