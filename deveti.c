#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

/*
Napisati funkciju koja odredjuje i vraca znak koji se najcesce pojavljuje u predanom 
joj stringu. Ako string sadrzi vise takvih znakova, funkcija vraca prvi pronadjeni.
U svrhu testiranja u funkciji main() dinamicki zuzeti memoriju za 30 podataka tipa
char(u potpunosti rukovati memorijom). Omoguciti korisniku unos string(osigurati da
ne premasi velicinu prethodno zauzetog polja). Iskoristiti navedeni string u 
pozivu napidane funkcije te ispisati na ekran povratnu vrijednost. Dodatno pozvati 
fukciju sa stringom "This is easy!"" i na ekran ispisati povratnu vrijednost.
*/

char najcesci(char s[], int n)
{
    char naj=s[0];
    int maxPon=1;
    int trenPon=0;
    for(int i=0; i<n; i++){
        trenPon=0;
        for(int j=0; j<n; j++){
            if(s[i]==s[j])
                trenPon++;
        }
        if(maxPon<trenPon){
            naj=s[i];
            maxPon=trenPon;
        }
    }
    return naj;
}

int main(){
    char *s;
    s=(char*)malloc(30*sizeof(char));
    if(s==NULL)
        return 1;
    fgets(s,31,stdin);
    for(int i=0; i<30; i++)
        printf("%c",s[i]);
    printf("\n%c\n",najcesci(s,30));
    printf("%c",najcesci("This is easy!",13));
    free(s);
    return 0;
}