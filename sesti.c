#include<stdio.h>
#include<stdlib.h>
#include<time.h>


/*
Omoguciti korisniku unos dimenzija kvadratne matrice (2-D polja) mxm, gdje
je m neparan i 9<= m <= 19. Popuniti matricu pseudo slucajnim brojevima iz 
[-5,5] \ [0,1] c R(vrijednosti iz [0,1] nisu dozvoljene). Pronaci najvecu 
vrijednost na sporednoj dijagonali. Ukoliko je vise takvih uzeti prvu. Potom
postaviti elemente retka u kojem se nalazi ta pronadjena vrijednost na 0,
a zatim elemente stupca u kojem se ona nalazi na 1. Pronadjenu najvecu 
vrijednost ne mijenjati
*/

void ispisMat(float mat[19][19], int m);

int main(void)
{
    int m;
    do{
        scanf("%d",&m);
    }while(m<9 || m>19 || m%2==0);

    float mat[19][19];
    int i,j;
    srand((unsigned)time(NULL));
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            do{
                mat[i][j]= -5 + (float)rand()/RAND_MAX * 10;
            }while(0 <= mat[i][j] && mat[i][j]<= 1);
        }
    }

    ispisMat(mat,m);

    float max=mat[0][m-1];
    int maxi=0, maxj=m-1;
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            if(max<mat[i][j] && i+j == m-1){//< osigurava da uzmemo samo prvu najvecu
                max=mat[i][j];
                maxi=i;
                maxj=j;
            }
        }
    }

    printf("\n%d %d\n",maxi,maxj);

    for(j=0;j<m;j++){
        if(j!=maxj)
            mat[maxi][j]=0;
    }

    for(i=0;i<m;i++){
        if(i!=maxi)
            mat[i][maxj]=1;
    }

    printf("\n\n");
    ispisMat(mat,m);

    return 0;
}

void ispisMat(float mat[19][19], int m){
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            printf("%f\t", mat[i][j]);
        }
        printf("\n");
    }
}