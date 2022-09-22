 #include <stdio.h> 
 #include <stdlib.h>
 //enehuu functs n gerin daalgavrin neges 
 //yalgarah ontslog n hevleh bolon garas unshih functig tus tusad n functs bolgon zarlasan 
 void read(int *begin , int *end); 
 void print(int *begin , int *end);
 int main(){
int i,a[100],n;
printf("element:");
scanf("%d", &n);
read (a, a+n ) ; //garas untga avah functs
print (a, a+n) ; //hevleh
return 0;
    }
void read (int *begin, int *end ){ 
    printf("husnegtin medeellig oruulah:\n");
    for(int i=0; begin+i < end; ++i)
    scanf("%d", begin+i);//uildel
    }
void print (int *begin , int *end){
    printf("husnegtin medeellih hevleh:\n");
    for(int i=0; begin+i < end; ++i)
    printf("%d\n", *(begin+i));//uildel
    }