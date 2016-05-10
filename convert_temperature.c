/************************************************
convert_temparature : training 5-1
date : 2016/5/9
*************************************************/

#include<stdio.h>

char line[10];
float c_temp;
float f_temp;


int main(void){

  printf("please type celsius temperature : ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &c_temp);

  f_temp = (c_temp * 9)/5 + 32;

  printf("f_temp = %f\n",f_temp);

  return 0;
}
    
