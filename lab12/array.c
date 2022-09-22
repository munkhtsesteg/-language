#include<stdio.h>

void read(int a[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d temdegtig oruul\n", i+1);
        scanf("%d", &a[i]);
    }
}

void print(int a[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d r temdegt bol: %d\n", i+1, a[i]);
    }
}

int maxA(int a[], int n){
    int i,max;
    max=a[0];

    for(i=0; i<n; i++){
        if(max<a[i])
            max=a[i];
    }
    return max;
}
int minA(int a[], int n){
    int i,min;
    min=a[0];

    for(i=0; i<n; i++){
        if(min>a[i])
            min=a[i];
    }
    return min;
}
float average(int a[], int n){
    float avg, sum=0;
    for(int i=0; i<n; i++){
        sum=sum+a[i];
    }
    avg = sum/n;
    return avg;
}
int searchA(int a[], int n, int Svalue){
    int l=0;
    for(int i=0; i<n; i++){
        if(a[i]==Svalue) l++;
    }
    if (l==0) return 1;
    else return 0;
}
void sortA(int a[], int n){
    int tmp;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
        if(a[i]>a[j]){
                tmp = a[i];
                a[i]=a[j];
                a[j]=tmp;
        }}
        }
}