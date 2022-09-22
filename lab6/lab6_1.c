/*******************************хэрэглэгчээс N тоог авч, И ширхэг
 * бүхэл тоо хадгалах анах ойг динамик санах ойн нөөцлөлтийг
 * ашиглах нөөцлөх***********************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N, *data;
    
    printf("Enter number: ");
    scanf("%d", &N);
    
    data = (int*)malloc (N * sizeof(int)); //dinamic sanah oin nuuts

if (data == NULL){
    printf("Error!!");
    exit(0);
}
for(int i=1; i<=N; i++){
    printf("Enter element: ");
    scanf("%d", data+i);
}
free(data);
}
