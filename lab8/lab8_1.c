#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char fname[100], iname[100], 
     dob[100], color[100],hobby[100],ftime[100], her[100];
int year, age;
printf("Tani ovog?");
    scanf("%s", fname);
    printf("tani ner?");
    scanf("%s", iname);
    printf("tani tusun on sar");
    scanf("%s", dob);
    printf("durtai ungu?");
    scanf("%s", color);
    printf("hobby yu ve?");
    scanf("%s", hobby);
    printf("chuluut tsagaaraa yu hiideg ve");
    scanf("%s", ftime);
    //printf("year");
    // scanf("%d", &year);
    for(int i =0; i<4; i++){
        her[i] = dob[i];
    }
    //year = atoi(her);
    age = 2022-atoi(her);
    printf("%s ovogtoi %s ni %s udur tursun. Odoo %d nastai. Tuuni durtai ungu bol %s. Ter chuluut tsagaaraa %s hiideg. Tuuni hobby dkl %s.", fname, iname, dob, age, color, ftime, hobby);
}