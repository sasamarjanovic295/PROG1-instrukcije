#include<stdio.h>

/*
Napisati definiciju funkcije koja odredjuje i vraca broj elemenata u danom
polju realnih brojeva koji nisu manji od aritmeticke sredine
svih elemenata tog polja.
*/

int CountLessThenArithmeticMean(float numbers[], int n){
    float avg, count=0, sum=0;

    for(int i = 0; i < n; i++)
        sum += numbers[i];
    
    avg = sum/n;

    for(int i = 0; i < n; i++){
        if(numbers[i] >= avg )
            count++;
    }

    return count;
}

int main(void){
    int n;
    scanf("%d", &n);
    float numbers[n];

    for(int i = 0; i < n; i++)
        scanf("%f", &numbers[i]);

    printf("%d", CountLessThenArithmeticMean(numbers,n));
    return 0;
}