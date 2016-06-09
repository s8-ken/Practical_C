/********************************************
数値入出力の練習例
三角形の面積を計算
********************************************/

#include <stdio.h>

int main(void){

  char line[100]; /*入力データの行*/
  int height;  /*三角形の高さ*/
  int width;
  int area;
  printf("Enter the width height? : ");
  fgets(line,sizeof(line),stdin);
  sscanf(line,"%d %d", &width, &height);
  area = (width * height) / 2;
  printf("The area is %d \n",area);

  return 0;
}
  


  
