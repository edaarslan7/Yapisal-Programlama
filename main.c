#include <stdio.h>
#include <stdlib.h>


int main()
{

    srand(time(NULL));
    int sayi=rand()%100;
    int tahmin;
    int secim=1;

    while(secim!=-1)
    {
        printf("1-Oyuna Basla <1>\n2-Oyunu Bitir <-1>");
        printf("\nSecim girin: ");
        scanf("%d",&secim);
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
        scanf("%d",&secim);

    }
    return 0;
}
