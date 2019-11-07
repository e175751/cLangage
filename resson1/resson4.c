#include<stdio.h>
int main(){
    int old;
    float weight;

    printf("How old are you? >");
    scanf("%d",&old);
    printf("すると、10年後は%d歳ですね\n",old+10);

    printf("あなたの体重は何キロ? >");
    scanf("%f",&weight);
    printf("ふーん、そうなんだ\n");

    return 0;
}

