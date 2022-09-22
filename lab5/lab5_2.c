/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
long int factorial(int n);
int main()
{
    int n;
    printf("buhel eyreg too orluul :");
    scanf("%d",&n);
    printf("%d tooni factirial ni: %ld",n,factorial(n));
    return 0;
}
long int factorial(int n){
    int s;
    if(n>=1){
        s=n*factorial(n-1);
        return s;
    }
    else{
         
        return 1;
    }
   
    
}