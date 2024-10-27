#include <stdio.h>
int main()
{
    int age;
    scanf("%d",&age);
    
    if(age>=18 && age<=100)
    {
        printf("ELIGIBLE TO VOTE");
    }
    else if(age<=17 && age>=0)
    {
        printf("NOT ELIGIBLE TO VOTE");
    }
    else if(age>100 || age<0)
    {
        printf("INVALID AGE");
    }
    return 0;
}
