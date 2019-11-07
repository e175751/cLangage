#include "stdio.h"
int main(){
  int old;
  printf("あなたの年齢はいくつですか?>" );
  scanf("%d",&old );
  if(old<20){
    printf("あなたはまだ未成年ですか\n" );
  }else{
    printf("あなたはお酒飲める年齢ですか\n" );
  }
  return 0;
}
