#include<stdio.h>

int main(){

    printf("計算式を入力してください:");
    int num1,num2,result;
    char mark;

    scanf("%d %c %d",&num1,&mark,&num2);

    switch(mark){
        case '+':
            result = Add(num1, num2);
            break;
        case '-':
            result = Sub(num1, num2);
            break;
        case '*':
            result = Mut(num1, num2);
            break;
        case '/':
            result = Div(num1, num2);
            break;
        case 'p':
            result = Fac(num1);
            break;
        default:
            printf("hoge");
            break;
    }
    printf("結果は:%d",result);
    return 0;
}

int Add(int num1, int num2) {
    return num1 + num2;
}

int Sub(int num1, int num2) {
    return num1 - num2;
}

int Mut(int num1, int num2) {
    return num1 * num2;
}

int Div(int num1, int num2) {
    if (num2 == 0) {
        return 0;
    }
    return num1 / num2;
}

int Fac(int num1){
    if (num1 == 1){
        return 1;
    }
    num1 = num1*Fac(num1-1);
    return num1;
}
