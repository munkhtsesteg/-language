#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

struct Student {
char fname[20] , lname[20] , id [10 ] ;
float gpa;
};
typedef struct Student Student ;
int student[100];
void read_students (Student a[] , int n) ;
void print_students (Student a[] , int n) ;
void print (Student st ) ;
int search_by_fname(Student a[] , int n, char fname[ ] ) ;
int search_by_lname(Student a[] , int n, char lname[ ] ) ;
int search_by_id(Student a[] , int n, char id [ ] ) ;
int search_by_gpa(Student a[] , int n, float gpa) ;
void sort_by_gpa (Student a[] , int n) ;
void sort_by_id(Student a[],int n);
void sort_by_fname(Student a[],int n);

#endif // STUDENT_H_INCLUDED
