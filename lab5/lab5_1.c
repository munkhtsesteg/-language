/*****************************************erembeleh**************************************************/
#include <stdio.h>
void read( int A[],int n);
void print(int A[],int n);
void sort ( int A[],int n);
int main ()
{
    int husnegt[100],n;
    printf("husnegtin hemjeeg oruul:");
    scanf("%d",&n);
    read(husnegt , n);
    sort (husnegt , n);
    print(husnegt , n);
    return 0;
}
void read( int A[],int n)
{
    printf("husnegtin medeellig oruulah:\n");
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&A[i]);
    }
 
}
void print(int A[],int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%d ",A[i]);
    }
    
}
void sort(int A[],int n)
{
    int i, key, j;
    for (i = 1; i <= n; i++)
    {
        key = A[i];   // key-d anhni utgig ugnu
        j = i - 1;
 
        while (j >= 0 && A[j] > key)   
        {
            A[j + 1] = A[j];   // A[j] key-es ih baival daragin utgand A[j] hadgalj ugnu
            j = j - 1;
        }
        A[j + 1] = key;
    }
        
}