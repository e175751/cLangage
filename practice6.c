#include <stdio.h>
int main(){
  int i;
  for(i=0;i<100000; i++){
    i*=i;
  }
  printf("%d",i);
}
