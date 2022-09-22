#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *p, *m;
    p = fopen("wikiMongolia.txt", "r");
    if (p == NULL){
        printf("aldaa garlaa");
        return 0;
    }
    int count=0, useg=0, max=0, maxi;
    char c;
    while ((c= fgetc(p))!=EOF){
        if (c!=' ') {
            useg++;
        }
        else if (c==' '){
            count++;
            if(max<useg){
                max=useg;
                maxi=count;
            }
            useg=0;
        }
    }
    fclose(p);
    m = fopen("Count.txt","w");
    fprintf(m,"niit %d dahi ug hamgin urt ug bna", maxi);
    fclose(m);
    return 0;
}