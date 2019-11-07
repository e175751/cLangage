#include <stdio.h>
int main(){
  char neta;

  printf("いらっしゃい、何にしますか？\n" );
  printf("a:黄金の刺身 b:レインボーの刺身 c:イカ臭い刺身 d:5日間置いてあった刺身 e:トロ　>" );
  scanf("%c",&neta );

  switch (neta) {
    case 'a':
     printf("お客さんわかってないね\n" );
     break;
    case 'b':
     printf("それ腐ってますよ\n" );
     break;
    case 'c':
     printf("それ〇〇二ーしたやつだよ\n" );
     break;
    case 'd':
     printf("それ中○産地だよ\n" );
     break;
    case 'e':
     printf("つまんないなお前\n" );
     break;
    default:
     printf("冷やかしなら帰ってくれ\n" );
     break;
  }
  return 0;
}
