#include<stdio.h>

/*
KAKO CE IZGLEDATI I STO CE BITI ISPISANO NA EKRANU IZVODJENJEM 
SLJEDECEG DIJELA PROGRAMSKOG KODA?
*/

int main(void){
    int i, p[] = {0, 1, 2, 0, 2, 3, 0, 4, 5, 0, 5, 6};
    for(i = 9; i >= 4; --i){
        printf("%d\t", p[i+1] % 3);
        printf("%d\n", p[i-1] - 5);
    }
}