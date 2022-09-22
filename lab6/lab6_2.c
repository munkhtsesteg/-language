/*******************************Нөөцөлсан санах ойд хэрэглэгчээс 
 * утгуудыг авч хадгалах
 * хэрэглэгчийн функц бич. *dataнь санах ой
 * нөөцөлсөнхаягын заагчбуюухаяган хувьсагч, sizeнь санах ойн хэмжээ буюу 
Nилгээх аргумент байна. void read(int *data, int size)***********************************/
#include <stdio.h>
#include <stdlib.h>

void read(int *data, int size);
int main()
{
    int *data, size;
    
    printf("Enter number: ");
    scanf("%d", &size);
    
    data = (int*)malloc (size * sizeof(int)); // dinamic sanah oin nuutslult

if (data == NULL){
    printf("Error!!");
    exit(0);
}
read(data, size);
return 0;
}

void read(int *data, int size){
    for(int i=1; i<=size; i++){
    printf("Enter element: ");
    scanf("%d", data+i);
}
}
