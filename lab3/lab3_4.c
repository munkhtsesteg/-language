#include <stdio.h>
#include <math.h>
int convert(long long);
int main() {
    long long n;
    
    printf("Enter a binary number: ");    //binary codig unshina
    scanf("%lld", &n);
    printf("%lld in binary = %d in    decimal", n, convert(n)); //binary aravt ru shiljuuleh
    return 0;
    
}
int convert(long long n) {
    
    if(n==0) {
        return 0;   //herev ugsun utga 0 bol hariu shuud 0 garna
    }
    else{
        int dec = 0, rem;
        rem = n % 10;   //ugsun utgig 10t huvaaj uldegdelig n avna uldegdel 0 esvel 1 garna
        dec = rem +2*convert(n / 10);    //uldegdel der 
        return dec;
    }
    }
   
    
