#include <stdio.h>
#include <stdlib.h>
int *find(int *begin, int *end, int x);
int main () {
int a[5] = {3, 7, 1, 2, 4}; 
int *p, x;
printf("xaix too: "); 
scanf("%d", &x);
p = find(a, a + 5, x); 
if (p == NULL)
printf("%d too oldsongui\n", x); 
else
printf("%d too %d bairlald oldloo\n", x, p - a); 
return 0;
}

*find(int*begin,int*end,int x){
for(int i=0;begin+i<end;++i){
if(*(begin+i)==x){
   
return (begin+i);
}
}
return NULL;
}
