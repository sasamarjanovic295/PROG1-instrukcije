#include<stdio.h>

/*
PRONACI I ISPRAVITI POGRESKE U SLJEDECEM TEKSTU PROGRAMA
int flipSign(int []a, int n){
    for(i = 0; i < n; ++i)
        a[i]= -a[i];
}

int main(void){
    int p[10]; int i;
    for(i = 0; i<= 10; i++)
        scanf("%f", p+i);
    flipSign(p);
}
*/

void flipSign(int a[], int n){
    for(int i = 0; i < n; ++i){
        a[i]= -a[i];            //-1*a[i]
    }
}

int main(void){
    int p[10]; int i;
    for(i = 0; i < 10; i++)
        scanf("%d", p+i);       //&p[i]
    flipSign(p,10);

    for(i = 0; i < 10; i++)
        printf("%d\t",p[i]);

    return 0;
}

/*
int a,b,c=3,d=5;
a=++c;
b=d++;
printf("a: %d\nc: %d\nb: %d\nd: %d",a,c,b,d);
*/