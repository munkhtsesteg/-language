#include <stdio.h>
#include <stdlib.h>
int *find(int *begin, int *end, int x, int y);
int main () {
int a[5] = {3, 7, 1, 2, 4}; 
int *p, x, y;
printf("xaix too: "); 
scanf("%d", &x);
printf("solih too:");
scanf("%d",  &y);
p = find(a, a + 5, x, y); 
if (p == NULL)
printf("%d too oldsongui\n", x); 
else
printf("%d too %d bairlald oldloo\n", x, p - a); 
for(int i=0; i<5;i++){
    printf("%d\n",*(a+i));
}
return 0;
}
*find(int*begin,int*end,int x, int y){
for(int i=0;begin+i<end;++i){
if(*(begin+i)==x){
    *(begin+i)=y;
return (begin+i);
}
}
return NULL;
}