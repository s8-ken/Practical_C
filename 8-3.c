/********************************************
練習問題8-4
n個の数値の平均値を計算するプログラム。
********************************************/

#include <stdio.h>

#define MAX 32

int main(){
  int tmp,sum;
  float result;
  int i;
  char line[128];

  for(i=0; i<MAX; i++){
    printf("値を入力してください。入力を終了する場合はxを入力してください。 : ");
    fgets(line, sizeof(line), stdin);
    if(line[0] == 'x') {
      printf("数値の入力を終了...計算結果を表示します。\n");
      break;
    }
    sscanf(line, "%d", &tmp);

    sum += tmp;
  }

  result = (float)sum/(float)i;
  printf("tmp %d sum %d result %f i %d\n",tmp,sum,result,i);
  printf("与えられた%dコの数字の平均値は%fです。\n",i,result);
  return 0;
}
