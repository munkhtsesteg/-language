#include <stdio.h>

int main()
{
    //hicheelin dungin dundaj oloh
    int math, english, mongol; //hicheelin nersiig oruulj ugnu
    float avg;
    printf("suragchin dungin dundaj oloh\n");    //yu oloh gr=ej baigaaga zarlana
    printf("math=");      //math gesen huvisagch oruulna
    scanf("%d",&math);     //math gesen huvisagchig unshina
    printf("english=");    //english gesen huvisagch oruulna
    scanf("%d",&english);   //english gesen huvisagchig unshina
    printf("mongol=");    //mongolia gesen huvisagch oruulna
    scanf("%d",&mongol);   //mongolia gesen huvisagchig unshina    
    avg=(math+english+mongol)/3;   //dundjig olno
    printf("dundaj dun %f",avg);   //dundaj utgig tsonhond gargana
    return 0;
}