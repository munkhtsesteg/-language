/*************************avsan onoog usgen temdeglegee bolgoh****************************************/
#include <stdio.h>

float onoo();   //punkts zarlah heseg

void main(){
    float s=onoo();    //dung usgen dunruu hurvuuleh heseg
    if (100>=s && 90<=s){
        printf("A duntei");
    }
    else if(90>s && 80<=s){
        printf("B duntei");
    }
     else if(80>s && 70<=s){
        printf("C duntei");
    }
     else if(70>s && 60<=s){
        printf("D duntei");
    }
    else{
        printf("F duntei");
    }

    return;
}
float onoo(){    //dung tootsoh heseg
    int n, dun;
    printf("dung oruul:");
    scanf("%d", &n);
    dun=n*100/30;
    return dun;
}