/**************************dasgal1*************************************/
//ugugdsun husnegtuudin ogtloltsol oloh
#include<stdio.h>
int main()
{ int i, j, n,m, a[100], b[100], c[200],k[200],A=0,d;
printf("n=");
scanf("%d", &n);
printf("m=");
scanf("%d", &m);
for(i=1; i<=n; i++)
    {
	 printf("a[%d]=",i);
	 scanf("%d", &a[i]);    //husnegtin utga oruulah
	c[i]=a[i];    //c[i] husnegted a[i]
	}    
for(j=1; j<=m; j++)
{      printf("b[%d]=",j);
 	 scanf("%d", &b[j]);    //b[] husnegted utga oruulah
 	c[i+j]=b[j];      //c[] husnegted a[] hoish toolj b[]utga oruulna
 	}
 	
 	  for (i=0; i<n+m; i++)
  {
    for (d=0;d<A;d++)
    {
      if(c[i] == k[d])    //davhtssan utgig hasaj ugnu
        break;
    }
    if (d == A)
    {
      k[A] = c[i];     //k[] d davhtsaagui utgig hadgalj ugnu
      A++;  
    }
  }
for(i=1; i<A; i++)
{
	printf("%d ", k[i]);   // ogtloltslig hevlene
}return 0;
}
/**************************dasgal2*************************************/
#include<stdio.h>
int main()
{
	int n,i,j,s=0,a[100][100];
	printf("husnegtin hemjeeg oruul: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]); //husnegtin medeellig oruulna
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)  
	{
	
	for(j=1;j<=n;j++)
	{
	 s=s+a[i][j];  //tuhain murni niilber oloh
	}
	printf(" %dr mur niilber=%d\n",i,s);
	s=0;
}
for(j=1;j<=n;j++)
{ 
	for(i=1;i<=n;i++)
	{
		s=s+a[i][j];   //tuhain bagani niilber
	}
	printf("%dr bagana niilber=%d\n",j,s);
	s=0;
}
	for(i=1;i<=n;i++)
	{
	
	for(j=1;j<=n;j++)
	{
	 if(i==j) 
	 s=s+a[i][j];   // zuun buyu mur bagana tentsu
	}
	
} 
printf(" zvvn diognalin niilber=%d\n",s);
s=0;

	for(i=1;i<=n;i++)
	{ 
	
	for(j=1;j<=n;j++)
	{     
	    if ((i + j) == (n + 1)) 
	    s=s+a[i][j];     //baruun buyu mur bagani niilber undsen husnegtin hemjeenes negeer ih bh tooni niilber 
	}
	
}
printf(" baruun diognalin niilber=%d\n",s);

}
/**************************dasgal3*************************************/
#include<stdio.h>
int main()
{ int M, N, K, i=1, j=1, l=1, z; //l ni heddugeer ortsig zaah, j ni heddugeer davhar, i ni ailin dugaarig zaaj bga
int a[100][100][100];
printf("ail M=");
scanf("%d", &M);
printf("orts K=");
scanf("%d", &K);
printf("davhar N=");
scanf("%d", &N);
  for( l; l<=K; l++)
    { 
        for(j=1 ; j<=N; j++)
        { 
            for(z=1; i<=M*N*K; i++,z++)
            { 
                if(z>M) 
                break;
	            printf("%d %d %d\n", l, j, i);
}
}
}
return 0;
}