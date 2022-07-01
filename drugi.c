#include<stdio.h>

/*
IZVODJENJEM SLJEDECEG DIJELA PROGRAMSKOG KODA, KOJI ELELEMENT CE BITI 
PROMJENJEN TE KOJU CE VRIJEDNOST POPRIMITI
*/

int main(void){
    int nums[] = {2, 3, 5, 7, 9, 11, 13};
    int *p = nums + 3;
    *(p - 1) -= *(p + 1);

    //ispis
    for(int i = 0; i < 7; i++)
        printf("%d ",nums[i]);
}