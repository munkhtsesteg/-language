#include <stdio.h>
#include <stdlib.h>
void reverse(int *begin , int *end);
int main () {
int a[5] = {3, 7, 1, 2, 4}; 
reverse(a, a + 3);
printf("urvuu garts bol: " );
for (int i = 0; i < 5; i++)
printf("%d ",a[i]); return 0;
// 1 7 3 2 4
}
void reverse(int *begin, int *end){
     int urt;
    urt = end - begin;
    for(int i=0;i<urt/2;i++){
    int temp = *(end-i);
    *(end-i)=*(begin+i);
    *(begin+i) = temp;
    }
    return;
}