#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
        char name[30];
        int age;
        float gpa;
};
typedef struct Student Student;


int sortGpa(Student a[], int n);

int main()
{
        Student a[200];
        FILE *fin = NULL, *m;
        fin = fopen("students.txt", "r");
        if (!fin) {
                printf("input file error!\n");
                exit(-1);
        }
        int i, n;
       fscanf(fin, "%d", &n);

        for (i = 0; i < n; i++) {
                fscanf(fin, "%s%d%f", a[i].name, &a[i].age, &a[i].gpa);
        }
        fclose(fin);

       // sortB(a, n);
       // sortI(a,n);
        sortGpa(a,n);
        m = fopen("Test.txt","w");
        for (i = 0; i < n; i++)
                fprintf(m,"%3.1f\t%d\t%s\n", a[i].gpa, a[i].age, a[i].name);
                fclose(m);
        //        sortGPA(a, n) хийсэн үр дүнг файлд бичиж хадгалах,Тэгэхдээ дүнг нь эхний багананд хадгалах



        return 0;
}
int sortGpa(Student a[], int n){
         
        int  nas;
        char ner[30];
        float tmp;
        for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
        if(a[i].gpa>a[j].gpa){
                tmp = a[i].gpa;
                nas = a[i].age;
                strcpy(ner, a[i].name);
                a[i].gpa=a[j].gpa;
                a[i].age=a[j].age;
                strcpy(a[i].name, a[j].name);
                a[j].gpa=tmp;
                a[j].age=nas;
                strcpy(a[j].name, ner );
        }
        }
        }
}