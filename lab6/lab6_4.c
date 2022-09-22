/*******************************nuutsulsun sanah oid hereglegchees utga avch hadgalah
 * hamgin ih bolon hamgin baga utga oruulah 
 * hereglegches oruulsan utguudas utga haih  ***********************************/

#include <stdio.h>
#include <stdlib.h>

void read(int *data, int size);
void max_min(int *data, int size, int *max, int *min);
int find(int *data, int size, int x);
int main()
{
    int *data, size, x, max, min,a;
    
    printf("Enter number: ");
    scanf("%d", &size);
    
    data = (int*)malloc (size * sizeof(int)); // dinamic sanah oin nuutslult

if (data == NULL){
    printf("Error!!");
    exit(0);
}
read(data, size);
max_min(data, size, &max, &min);
    printf("max: %d\n",max);
    printf("min: %d ",min);
    
a=find(data, size, x);

    if(a==1){
        printf("ene utga bain ");
    }
    else printf("ene utga baihgu");

return 0;
}
//---------------------------------------------------------------------------//
//hereglegchees utga avch hadgalah function
//---------------------------------------------------------------------------//
void read(int *data, int size){
    for(int i = 1; i <= size; i++){
    printf("Enter element: ");
    scanf("%d", data+i);
}
}
//---------------------------------------------------------------------------//
//hereglegchees avsan utgaas hamgin ih bolon bagig oloh 
//---------------------------------------------------------------------------//
void max_min(int *data, int size, int *max, int *min){
    *max=*data;
   *min=*data;
    for(int i=0; i<=size; i++){
        if(*(data+i)>*max){
            *max=*(data+i);
            
        }
        if((*data+i)<*min){
            *min=*(data+i);
           
        } 

}}
//---------------------------------------------------------------------------//
//garas ugsun too hererglchin oruulsan utganaas haih
//---------------------------------------------------------------------------//
int find(int *data, int size, int x){
    printf("haih utgig oruulah: ");
    scanf("%d", &x);
     int n = 0; 
    for(int i = 1; i <= size; i++){
         
          if(*(data+i) == x)
            n = n+1;
            else ;      
}
if(n == 0) return 0;
            else return 1;
}