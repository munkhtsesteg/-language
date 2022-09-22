#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n=0;
    char tsuva[100];
    printf("temdegtig oruul: ");
    scanf("%s",tsuva);
    for(int i = 0; i<strlen(tsuva); i++){
        if (tsuva[i]=='a'|| tsuva[i]=='e'|| tsuva[i]=='i'|| tsuva[i]=='u'|| tsuva[i]=='o'){
            n++;
        }
    }
    printf("niit %d egshig useg bn", n);
}