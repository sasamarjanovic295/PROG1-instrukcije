#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*
Napisati funkciju koja vraca udio znamenki koje predstavljaju proste brojeve u 
predanom joj cjelom broju. U svrhu testiranja u funkciji main() omoguciti korisniku
unos iskljucivo vrijednosti manjih od -50(ako unos ne zadovoljava uvijet ponoviti ga)
u cijelobrojno polje od 15 elemenata. Pozvati napisanu funkciju sa svakim elementom
polja redom kao argumentom i ispisati na ekran povratnu vrijednost ako je veca od 0.5.
*/

float udioProstihZnamenki(int n){
    if(n == 0)
        return 0;
    if(n < 0)
        n = -1 * n;
    int znam,brZnam=0, brPros=0;
    while(n>0){
        znam = n % 10;
        n = n/10;
        if(znam == 2 || znam == 3 || znam == 5 || znam == 7)
            brPros++;
        brZnam++;
    }
    return (float)brPros/brZnam;
}

int main(void){
    int p[15];
    for(int i=0; i<15; i++){
        do{
            scanf("%d",&p[i]);
        }while(-50 <= p[i]);
    }

    for(int i=0; i<15; i++)
        printf("Broj: %d, udio prostih znamenki: %f\n",p[i],udioProstihZnamenki(p[i]));

    return 0;
}