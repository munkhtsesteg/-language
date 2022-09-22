/************Undur jil oloh*********************/
#include <stdio.h>

int main()
{
   int year;
    printf("enter year:");
    scanf("%d", &year);
    if(year%400==0 ){
        printf("%d bol undur jil", year); // herbee jil 400 d huvaagdaj baival undur jil
    }
    else if (year%4==0 && year%100==0){
        printf("%d bol undur jil bish", year);    //hervee jil 100 d huvaagdagch 400d huvaagdaggu bol undur jil bish
    }
    else if (year%4==0){
        printf("%d bol undur jil", year);    //hervee jil 4 t huvaagddag bol undur jil
    }
    else{
        printf("%d bol undur jil bish", year);    //busad tohioldold undur jil bish
    }
    return 0;
}
