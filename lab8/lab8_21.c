#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char text[30];
    int n=1;
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);
    for(int i=0; i<strlen(text); i++){
        if(text[i]==' ')
        n++;
  }
    printf("niit %d ug bn", n);
    return 0;
}