#include <stdio.h>

int main(){

int szam;
int darab=0;
do{
    printf("Adjon meg egy egész számot (vege:0): ");
    scanf("%d",&szam);
    if(szam!=0){
        darab++;
    }

}while(szam!=0);
printf("\n");
printf("A beolvasott elemek száma: %d\n",darab);
return 0;

}