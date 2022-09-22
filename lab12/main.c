#include <stdio.h>
#include <stdlib.h>
#include "array.h"

int main()
{
    printf("tim bha\n");
    int n=0, x;
    scanf("%d",&n);
    read(array,n);
    print(array,n);
    printf("hamgin ih too bol: %d\n", maxA(array,n));
    printf("hamgin baga too bol: %d\n", minA(array,n));
    printf("dundaj bol: %f\n", average(array, n));
    printf("haih too: ");
    scanf("%d",&x);
    if(searchA(array,n,x)==0) printf("ene too bna\n");
    else if(searchA(array, n, x)==1) printf("ene too bhgu bna\n");
    printf("erembleh\n");
    sortA(array, n);
    for(int i=0; i<n; i++){
        printf("%d\n", array[i]);
    }
    return 0;
}
