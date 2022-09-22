//**** suragchdin dungin niilber bolon dundaj oloh programm****//
#include <stdio.h>

int main()
{
    
   int i,N,dun,S=0;
   float avg;
   printf("N=");    //suragchin toog oruulna
   scanf("%d",&N);    
   for(i=1;i<=N;++i){
       printf("dun%d=",i);    //suragch tus burin dung oruulna
       scanf("%d",&dun);
       S=S+dun;    //suragchdin dung neg negeer n nemj niilberig olno
   }
   avg=(float)S/N;    //suragchdin dungin dundjig olno
   
   printf("S= %d ",S);
   printf("avg= %f",avg);
   
}

