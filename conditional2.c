#include <stdio.h>
int main()
{
    int bpay,bonus,travelallow,netsalary;
    scanf("%d",&bpay);
    
    if(bpay>=0 && bpay<=10000)
    {
       bonus=bpay*2/100;
       travelallow=bpay*1/100;
    }   
    else if(bpay>=10001 && bpay<=25000)
    {
        bonus=bpay*5/100;
       travelallow=bpay*2/100;
    }
    else if(bpay>=25001 && bpay<=50000)
    {
        bonus=bpay*10/100;
       travelallow=bpay*3/100;
    }
    else if(bpay>=50001 && bpay<=100000)
    {
        bonus=bpay*15/100;
       travelallow=bpay*5/100;
    }
    else if(bpay>100000)
    {
        bonus=bpay*20/100;
       travelallow=bpay*5/100;
    }
    
    printf("BONUS=%d\n",bonus);
    printf("TRAVELALLOWENCE=%d\n",travelallow);
    netsalary=bpay+bonus+travelallow;
    printf("NETSALARY=%d",netsalary);
}
