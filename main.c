#include <stdio.h>
#include <stdlib.h>
///Kullan�c�dan girilen sayinin birler ve onlar basamaginin toplami �ift mi tek mi. sayi 4 basamakli olmali.
int main()
{
    int sayi;
    printf("bir sayi giriniz: ");
    scanf("%d",&sayi);
    if(sayi<999 || sayi>10000)
    {
        printf("hatali sayi girdiniz...");
    }
    else
    {
        int birler=sayi%10;
        int onlar=((sayi-birler)/10)%10;
        int toplam=birler+onlar;
        if(toplam%2==0)
        {
            printf("toplam: %d cifttir...",toplam);
        }
        else
        {
            printf("toplam %d tektir...",toplam);
        }
    }
    return 0;
}
