#include<stdio.h>
int main()
{
   int num;
   scanf("%d",&num);
   
   if(num>0)
   {
       printf("%d is Positive number",num);
   }
   else if (num<0)
   {
       printf("%d is Negative number",num);
   }
   else if (num==0)
   {
       printf("%d is Zero",num);
   }
   return 0;
}
