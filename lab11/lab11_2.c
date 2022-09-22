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
    int count=0;
    char c;
    while ((c= fgetc(p))!=EOF){
        if (c=='.') {count++;}
    }
    fclose(p);
    m = fopen("CountSentence.txt","w");
    fprintf(m,"niit %d uguulber bna", count+1);
    fclose(m);
    return 0;
}