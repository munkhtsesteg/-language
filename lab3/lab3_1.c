#include<stdio.h>
void func_1();
void func_2();
int n=0, m=10;
int main()
{
    printf("Global n =%d\n",n);
    printf("Global m =%d\n",m);
    
    func_1();    //func_1 duudaj bga
    func_2();    //func_1 duudaj bga
    
    return 0;    //uildel duusni daraa butsaj ireh
}
void func_1()
{
    printf("From func_1() Global n =%d\n",n);    //n ig hevleh
    printf("From func_1() Global m =%d\n",m);    //m ig hevleh
}
void func_2()
{ 
    int n=5;    //n d 5 gesen utga onooh
    printf("Inside func_2() n =%d\n",n);    //n ig hevleh
}
