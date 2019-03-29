#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
///sayi tahmin etme oyunu

int main()
{
    srand(time(NULL));
    int sayi=rand()%100;
    int tahmin;
    int cikis=1;

    while(cikis!=-1)
    {
        printf("tahmininizi giriniz: ");
        scanf("%d",&tahmin);
        while(tahmin!=sayi)
        {
            if(tahmin<sayi){
                printf("\ndaha buyuk tahmin et");
            }
            else if(tahmin>sayi)
            {
                printf("\ndaha kucuk tahmin et");

            }
            printf("\ntekrar tahmin ediniz: ");
            scanf("%d",&tahmin);
        }
        printf("\ntebrikler!\n");
        printf("devam(1) cikis(-1)");
        scanf("%d",&cikis);

    }
    return 0;
}
