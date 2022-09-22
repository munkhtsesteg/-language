/***********************dasgal1*************************/
//husnegt uusgeh 1 
#include <stdio.h>

int main()
{
    int a[100][100];
    int row,col,i,j;
    printf("row:");
    scanf("%d",&row);
    printf("col:");
    scanf("%d",&col);
    
    for (i=1; i<=row;++i){
        for(j=1; j<=col;++j){
            a[i][j]=i;  
            
        }
        printf("\n");
        }

     for(i=1; i<=row; i++)
    {
        for(j=1; j<=col; j++)
            printf("%d ",a[i][j]);   // husnegtin utguudig hevlej gargana
        printf("\n");
    }
}

/****************dasgal2*********************/
#include<stdio.h>
int main()
{
    int n,i,p,l=1,a[100][100];
    printf("husnegtin hemjeeg oruul:");
    scanf("%d",&n);    //husnegtin hemjeeg oruulna
    for(i=0; i<n; i++)    //bagana 
    {
        for(p=0; p<n; p++, l++) //murig shat ahih tusam 1 er nemj toolno
        {
            if(l>n)
                a[i][p] = n-(l-n);      //hemjeenees hetervel       
            else
                a[i][p] = l;           //hemjeenes baga bol
        }
        l=i+2; 
    }
    
    for(i=0; i<n; i++)
    {
        for(p=0; p<n; p++)
            printf("%d ",a[i][p]);
        printf("\n");
    }
}
/****************dasgal3*********************/
#include <stdio.h>

int main()
{
    int a[100][100],b[100][100],c[100][100];
    int n,m,k,s,i,j,l=1;
    
    printf("n:");
    scanf("%d",&n);
    printf("m:");
    scanf("%d",&m);
    printf("k:");
    scanf("%d",&k);
    printf("negdugeer matrits\n");
    for (i=1; i<=n;++i){
        for(j=1; j<=m;++j){
            scanf("%d",&a[i][j]); //negdugeer husnegtin utga oruulah
            
        }
        printf("\n");
        }
        printf("hoyrdugaar matrits\n");
    for (i=1; i<=m;++i){
        for(j=1; j<=k;++j){
            scanf("%d",&b[i][j]);   //hoyrdugaar husnegtin utga oruulah
        }
        printf("\n");
        }
     for(i=1; i<=n; i++)
    {
        for (l=1; l<=k; l++){
            s=0;
        for(j=1; j<=m; j++ ){
            s=s+a[i][j]*b[j][l];  // urjver oloh
        }
        c[i][l]=s;
        printf("%d ",c[i][l]); 
       
        }
        printf("\n");
    }
}