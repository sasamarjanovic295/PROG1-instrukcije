#include<stdio.h>
#include<stdlib.h>
#include<time.h>


/*
Napisati deklaraciju funkcije koja popunjava dano polje realnih 
brojeva pseudo slucajnim brojevima iz [-1, 1]cR.
*/

void fillArray(float num[], int n);

//PROVJERA:

int main(void){
    float p[10];
    srand((unsigned)time(NULL));
    fillArray(p,10);
    for(int i = 0; i < 10; i++)
        printf("%f\t", p[i]);
    printf("\n%p",&p[0]);
    return 0;
}

void fillArray(float num[], int n){
    for(int i = 0; i < n; i++)
        num[i] = -1 + (float)rand() / RAND_MAX * (1 + 1);
    printf("%p\n",&num[0]);
}