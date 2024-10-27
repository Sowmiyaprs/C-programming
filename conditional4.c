#include <stdio.h>
int main()
{
   int tam,eng,mat,sci,so,total;
   int marks;
   float average;
   scanf("%d%d%d%d%d",&tam,&eng,&mat,&sci,&so);
    if (tam>100||tam<0||eng>100||eng<0||mat>100||mat<0||sci>100||sci<0||so>100||so<0)
   {
       printf("INVALID MARKS");
   }
   total=tam+eng+mat+sci+so;
   printf("TOTAL=%d\n",total);
   average=(tam+eng+mat+sci+so)/5;
   printf("AVAERAGE=%.2f\n",average);
   
   if(tam<50||eng<50||mat<50||sci<50||so<50)
   {
       printf("FAILED THE EXAM ");
   }
   else if(average>=100 &&average<=91)
   {
       printf("O grade");
   }
   else if (average>=90 &&average<=81)
   {
       printf("A+ graade");
   }
   else if(average>=80 &&average<=71)
   {
       printf("A grade");
   }
   else if (average>=70 &&average<=61)
   {
       printf("B+ graade");
   }
   else if(average>=100 &&average<=91)
   {
       printf("O grade");
   }
   else if (average>=90 &&average<=81)
   {
       printf("A+ graade");
   }
}

