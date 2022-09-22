#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char a[100], b[100];
    printf("ehni temdegt murig oruulah: ");
    scanf("%s", a);
    printf("hoyr dahi temdegt murig oruul: ");
    scanf("%s", b);
    strcat(a, b);
    printf("%s", a );
}