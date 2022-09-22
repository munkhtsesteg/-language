/*************************avsan onoog usgen temdeglegee bolgoh****************************************/
#include <stdio.h>

float number();   //punkts zarlah heseg

void main(){
    float s=number();    //anhni too mun bish esehig tootsoh
    if (s==1){
        printf("anhni too");
    }
    else{
        printf("anhni too bish");
    }

    return;
}
float number(){    //huvaagchdig tooloh
    int n=0,m,t=1;
    printf("toog oruul:");
    scanf("%d", &m);
    while(m/2!=t){
        if(m%t==0){
            n=n+1;
        }
        ++t;
    }
    return n;
}