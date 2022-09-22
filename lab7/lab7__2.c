#include <stdio.h>
#include <stdlib.h>
void read (int *p);
int main(){
int *p,n,A[100];

printf("hemjee: ");
scanf("%d",&n);
for(int i=-2;i<=n;++i){
read((p+i));
}
for(int i=0;i<=4;++i){
    read((p+i));
    printf("%d",*(ptr+i));}
return 0;
}

void read(int *p){
scanf("%d",p+2);
}