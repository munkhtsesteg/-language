/*****************hereglegchin oruulsan medeellig yalgah******************************/
#include <stdio.h>

int main()
{
  char temdegt;
   
   printf("temdegtig oruul:");    //temdegtig zaralj ugnu
   scanf("%c",&temdegt);    
  
  if(temdegt=='a'|| temdegt=='e'|| temdegt=='i'|| temdegt=='u'|| temdegt=='o'|| temdegt=='A'|| temdegt=='E'|| temdegt=='I'|| temdegt=='O'|| temdegt=='U'){
      printf("%c bol egshig useg ",temdegt);     //egshig useg mun eseh
  }
  else if(temdegt=='1'|| temdegt=='2'|| temdegt=='3'|| temdegt=='4'|| temdegt=='5'|| temdegt=='6'|| temdegt=='7'|| temdegt=='8'|| temdegt=='9'|| temdegt=='0'){
      printf("%c bol too ",temdegt);  //too mun eseh
  }
  else{
      printf("%c bol giiguulegch useg ",temdegt);   //giiguulegch mun eseh
  }
    return 0;
}
