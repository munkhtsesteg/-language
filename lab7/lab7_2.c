int size(int *begin , int *end);
int main(){
int i, n;
scanf("%d", &n);
int a[n];
printf("%d\n", size(a, a + n)); // n-ii utgiig xewlene.
return 0; }
int size(int *begin, int *end){
    int i=0;
    for(begin; begin< end; begin++){
        i++;
    }
    return i;
}