
/********************************************
プログラム実習8-3
与えられたn個の抵抗を、並列に接続した時の
抵抗値を計算するプログラム。（最大十個まで）

<使い方>
入力を終える際はxを入力する。

********************************************/

#include <stdio.h>


#define MAX 10


int main(void){

  char line[100];
  int resistance_value[MAX];
  int i;

  float result, tmp;
  
  
  for(i = 0; i<MAX; i++){
    printf("%d個目の抵抗値を入力してください。入力の終了はxを入力してください。",i+1);
    fgets(line, sizeof(line), stdin);
    /*
      もし入力が終了した場合は、終了フラグとして0を代入しておく。
    */
    if(line[0] == 'x') {
      resistance_value[i]=0;
      break;
    }

    sscanf(line, "%d", &resistance_value[i]);
    printf("%d %d \n",i,resistance_value[i]);
  }
  for(i = 0 ; i < MAX; i++){
    if(resistance_value[i] == 0) break;
    tmp += 1/(float)resistance_value[i];
  }

  result = 1 / tmp;

  printf("並列接続した時の抵抗値は%fです。\n",result);
  return 0;
    
  

}
  
    
  
