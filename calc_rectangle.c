/************************************************
calc_rectangle : training 4-3
*************************************************/

#include<stdio.h>


int main(void){

  int rct_width = 3;
  int rct_hight = 5;

  int  area;
  int circumference;

  area = rct_width * rct_hight;
  circumference = (rct_width + rct_hight) * 2;

  printf("area = %d\n",area);
  printf("circumference = %d\n",circumference);

  return 0;
}
