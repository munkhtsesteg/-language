#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
        char name[30];
        int age;
        float gpa;
};
typedef struct Student Student;

int sortB(Student a[], int n);
//int sortI(Student a[], int n);
//int sortS(Student a[], int n);

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

       sortB(a, n);
       // sortI(a,n);
        //sortS(a,n);
        m = fopen("Test.txt","w");
        for (i = 0; i < n; i++)
                fprintf(m,"%3.1f\t%d\t%s\n", a[i].gpa, a[i].age, a[i].name);
                fclose(m);

        return 0;
}
int sortB(Student a[], int n){
         
        Student tmp;
        for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
        if(a[i].gpa>a[j].gpa){
                tmp = a[i];
                a[i]=a[j];
                a[j]=tmp;
        }
        }
        }
}
/**int sortI(Student a[], int n){
         int i, key, j, nas;
         Student a[];
         for (i = 1; i < n; i++) {
        key = a[i];
        strcpy(ner, a[i].name);
        j = i - 1;
        while (j >= 0 && a[j].gpa > key.gpa) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}**/
/**int sortS(Student a[], int n){
     int i, j, min_idx, tmp, nas;
     Student a[];
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (a[j].gpa < a[min_idx].gpa)
            min_idx = j;
        tmp= a[min_idx].gpa;
        nas = a[min_idx].age;
        strcpy(ner, a[min_idx].name);
        a[min_idx].gpa=a[i].gpa;
        a[min_idx].age=a[i].age;
        strcpy(a[min_idx].name, a[i].name);
        a[i].gpa=tmp;
        a[i].age = nas;
        strcpy(a[i].name, ner);
        
    }
}**/


