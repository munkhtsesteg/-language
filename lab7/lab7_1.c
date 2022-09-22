#include <stdio.h>
#include <stdlib.h>
int main () {
int a[100];
for (int i = 0; i < 5; i++){
    printf("unshih: \n");
scanf("%d", a + i); } //garas utga unshih uildel
for(int i=0; i < 5; i++){
    printf("hevleh: \n");
 printf("%d\n", *(a+i));} //garas unshsan utgig hevleh uildel
 return 0;
}