#include <stdio.h>;

int main(){ 
      
      float bpay;
      float bonus;
      float elevence;
      float netcharge;
   
      printf("BASIC PAY   =");
      scanf("%f",&bpay);
      
      bonus    =bpay*10/100;
      elevence =bpay*7.5/100;
      netcharge  =bpay+bonus+elevence+netcharge; 
 
      printf("BONUS AMOUNT=%.2f\n",bonus);
      printf("TRAVEL ELEVENCE=%.2f\n", elevence);
      printf("NETCHARGE=%2.f\n", netcharge);

}