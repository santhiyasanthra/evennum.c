#include <stdio.h>

int main(void) {


   int num, rnum=0, rem,temp;
  
   scanf("%d", &num);

   temp=num;
   while(temp!=0)
   {
      rem=temp%10;
      rnum=rnum*10+rem;
      temp/=10;
   } 

  
   if(rnum==num) 
      printf("yes");
   else
      printf("no");
   return 0;
}
