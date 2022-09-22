#include <stdio.h>
#include <stdlib.h>
#include "Student.h"
int main( )
{
Student a[100];
int n, cmd, idx ;
printf("Oyutnii too:") ;
scanf( "%d" ,&n) ;
read_students(a, n) ;
print_students(a, n) ;
char fname[20] , lname[20] , id [20 ] ;
float golch ;
while (1) {
printf ( "1: Nereer xaix , 2: Ovgoor xaix , 3: ID−aar xaix , 4: Golchoor xaix , 5: Golchoor erembelex , 6: Nereer erembeleh,7:Id-gaar ermbeleh , 8: Garax\n" ) ;
scanf( "%d" , &cmd) ;
if (cmd == 1) {
printf( "Xaix ner : " ) ;
scanf( "%s" , fname) ;
idx = search_by_fname(a, n, fname);
if(idx == "−1")
printf( "errror \n" ) ;
else
print(a[idx ] ) ;
}
else if(cmd == 2) {
printf ( "Xaix ovog: " ) ;
scanf( "%s" , lname) ;
idx = search_by_lname(a, n, lname) ;
if(idx == "−1")
printf( "errror \n" ) ;
else
print(a[idx ] ) ;
}
else if(cmd == 3) {
printf( "Xaix id : " ) ;
scanf( "%s" , id ) ;
idx = search_by_id(a, n, id ) ;
if(idx == "−1")
printf( "error \n" );
else
print(a[idx ] ) ;
}
else if(cmd == 4) {
printf("Xaix golch:" );
scanf("%f",&golch) ;
idx=search_by_golch(a,n, golch) ;
if(idx =="−1")
printf("error\n" ) ;
else
print(a[idx ] ) ;
}
else if(cmd == 5)
sort_by_golch(a,n) ;
else if(cmd == 6)
sort_by_fname(a, n);
else if(cmd==7)
    sort_by_id( a, n);
else
    break;
}
return 0;
}
