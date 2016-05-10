/************************************************
training 5-2
*************************************************/


#include<stdio.h>

char line[10];
float radius;
float volume;

const float pi = 3.14151;

int main(void){

  printf("please type ball's radius : ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f",&radius);

  volume = 4 / 3 * pi * radius * radius * radius;

  printf("volume = %f\n",volume);

  return 0;
}
    
  

