#include<stdio.h>
int main(){
  int old;
  double weight;
  char text[50];

  printf("あなたは何歳ですか? >");
  scanf("%d", &old);  /* oldにキーボードからの数字を代入。&が必要 */
  printf("すると、10年後は%d歳ですね。\n", old+10);

  printf("あなたの体重はいくつですか? >" );
  scanf("%lf",&weight );
  printf("%fですか\n",weight );

  printf("あなたは誰ですか? >" );
  scanf("%s",text);
  printf("%cですね\n",*text);

  return 0;
}
