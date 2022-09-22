#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Student {
char fname[20] , lname[20] , id [10 ] ;
float gpa;
};
typedef struct Student Student ;

void read_students (Student a[ ] , int n){
int i,j,k,m,s;

    for(i=0;i<n;++i){
        printf("%d-dugeer suragchiin medeelliig oruulna uu\n",i);
        puts("fname");
        scanf("%s", &a[i].fname);
        puts("lname");
        scanf("%s",&a[i].lname);
        puts("id");
        scanf("%s",&a[i].id);
    puts("gpa");
    float b;
    scanf("%f", &b);
    a[i].golch = b;
}
}
void print_students (Student a[ ] , int n){
    int i,j,m,s;
    for(i=0;i<n;++i){
        puts(a[i].fname);
        puts(a[i].lname);
        puts(a[i].id);
        printf("%.1f\n",(a[i].gpa));
    }
}
void print(Student st ){
    puts(st.fname);
    puts(st.lname);
    puts(st.id);
    printf("%.1f\n",(st.gpa));
}
int search_by_fname(Student a[ ] , int n, char fname[ ] ){
    int i,j,m;
    for(i=0;i<n;++i){
        m=strcmp(a[i].fname,fname);
        if(m==0) return i;
    }
return "-1";
}
int search_by_lname(Student a[ ] , int n, char lname[ ] ){
    int i,j,m;
    for(i=0;i<n;++i){
        m=strcmp(a[i].lname,lname);
        if(m==0){
            return i;
            break;
        }
    }
return"-1";
}
int search_by_id(Student a[ ] , int n, char id [ ] ){
    int i,j,m;
    for(i=0;i<n;++i){
        m=strcmp(a[i].id,id);
        if(m==0){
            return i;
            break;
        }
    }
return"-1";
}
int search_by_gpa(Student a[ ] , int n, float gpa){
    int i,j,m;
    for(i=0;i<n;++i){
        if(a[i].gpa==gpa){
        return i;
        break;
    }
    }
return"-1";
}
void sort_by_gpa (Student a[ ] , int n){
    int i,j,s,d;
    struct Student temp;
    for(i= 0; i< n- 1; i++){
        for(j= 0; j < n-i-1; j++){
            if(a[i].gpa>a[j+ 1].gpa){
                temp = a[j];
                a[j]= a[j+ 1];
                a[j+1] = temp;
            }
        }
    }
     print_students(a, n) ;
}
void sort_by_id (Student a[ ] , int n){
int i,j,s,d;
struct Student temp;
    for(i= 0; i< n- 1; i++){
        for(j= 0; j < n-i-1; j++){
            if(strcmp(a[i].id,a[j+ 1].id)>0){
                temp = a[j];
                a[j]= a[j+ 1];
                a[j+1] = temp;
            }
        }
    }
     print_students(a, n) ;
}
void sort_by_fname (Student a[ ] , int n){
    int i,j,s,d;
    struct Student temp;
    for(i= 0; i< n- 1; i++){
        for(j= 0; j < n-i-1; j++){
            if(strcmp(a[i].fname,a[j+ 1].fname)>0){
                temp = a[j];
                a[j]= a[j+ 1];
                a[j+1] = temp;
            }
        }
    }
     print_students(a, n) ;
}
