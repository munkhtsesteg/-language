#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char neg[100], hoyr[100];
    int n=0;
    printf("ehni ug unshih: ");
    scanf("%s", neg);
    printf("hoyr dahi ug unshih: ");
    scanf("%s", hoyr);
    if (strlen(neg)==strlen(hoyr)){
        for(int i; i<strlen(neg); i++){
            if(neg[i]==hoyr[i]){
                n++;
            }
        }
        if(n==strlen(neg)){
            printf("yg adilhan ug");
        }
        else printf("yg adilhan bish");
    }
}