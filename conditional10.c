#include<stdio.h>
int main()
{
    int num1,num2;
    scanf("%d%d%d",&num1,&num2);
    if(num1<num2)
    {
      printf("%d is smallest number ",num1);
    }
    else if(num2<num1)
    {
      printf("%d is smallest number ",num2);
    }
    return 0;
}
