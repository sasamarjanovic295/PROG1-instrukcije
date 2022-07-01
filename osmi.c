#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

/*
Napisati funkciju koja odredjuje i vraca element polja realnih brojeva koji je 
po vrijednosti najblizi nuli. U svrhu testiranja u funkciji main() dinamicki zauzeti 
memoriju za 50 podataka tipa float(u potpunosti rukovati memorijom) i naknadno ga 
ispuniti pseudo slucajnim brojevima [-10,5]cR. Iskoristiti navedeno polje u pozivu
napisane funkcije te ispisati na ekran povratnu vrijednost
*/

float najbliziNuli(float p[],int n){
    float najBlizi = p[0];
    float minUd = fabs(0 - p[0]);
    for(int i = 0; i < n; i++){
        if(minUd > fabs(0 - p[i])){
            minUd = fabs(0 - p[i]);
            najBlizi = p[i];
        }
    }
    return najBlizi;
}

int main(void){
    float *p;
    p = (float*)malloc(50 * sizeof(float));
    if(p==NULL)
        return 1;

    srand((unsigned)time(NULL));
    for(int i = 0; i < 50; i++){
        p[i] = -5 + (float)rand()/RAND_MAX * 15;
        printf("%f ", p[i]);
    }

    printf("\n%f", najbliziNuli(p, 50));

    free(p);

    return 0;
}