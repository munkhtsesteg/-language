#include <stdio.h>
#include <stdlib.h>

void read(int *data, int size);
void max_min(int *data, int size, int *max, int *min);
int main()
{
    int *data, size, max, min;
    
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
free(data);
return 0;
}

void read(int *data, int size){
    for(int i=0; i<size; i++){
    printf("Enter element: ");
    scanf("%d", data+i);

}
}
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
    }

}