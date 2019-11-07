#include<stdio.h>

int main(){
    int ary[2] = {1000,2000};
    int *po;

    po = &ary[0];
    printf("po\t = %x\n" , po);

    po++;
    printf("po++\t = %x\n" , po);
    printf("*po++\t = %d" , *po);
    return 0;
}
