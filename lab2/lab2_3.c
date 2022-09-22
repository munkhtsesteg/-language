/************Oron tooloh*********************/
#include <stdio.h>

int main()
{
   int number, n;
   int a=0;
    printf("enter number:");
    scanf("%d", &number);
    n=number;
    while(n!=0 ){
        n=n/10;
        a=a+1;    //oron tooloh
    }
    printf("N too %d orontoi", a);    //toolson orongoo hevlej gargana
    return 0;
}
