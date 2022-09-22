#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char text[30];
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);
    for(int i=0; i<strlen(text); i++){
        if(text[i]==" ")
        printf("\n");
        else printf("%c", text[i]);
    }
    
    return 0;
}