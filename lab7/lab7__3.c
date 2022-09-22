#include<stdio.h>
#include<stdlib.h>
int * find (int a [100][100] , int n, int m);
int main(){
    int a[100][100],*pr, n,m;
printf("Mur\n");
scanf("%d",&n);
printf("bagana\n");
scanf("%d",&m);

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        printf("a[%d][%d] husnegt: ", i,j);
        scanf("%d",*(a+i)+j);
        }
}
 printf("hamgin ih utgatai murig hevleh:\n");
    pr=find(a,n,m);
   for(int j=0;j<m;++j)
        printf("%d\n",*(pr+j));
        

}
/**for(i=0;i<n;++i){
   *for(j=0;j<m;++j){
    *printf("a[%d][%d] husnegt", i,j);
       * printf("%d",*(*(arr+i)+j));}
    *printf("\n");
}*/
   


int * find (int a[][100] , int n, int m){
int *s,max=0;
for(int i=0;i<n;++i){
    for(int j=0;j<m;++j){
        if(max<*(*(a+i)+j) && *(*(a+i)+j)%2==0){
            max=*(*(a+i)+j);
            s=*(a+i);
        }
    }
}
return s;
}

