#include <stdio.h>
#include <stdlib.h>
/// Klavyeden girilen 3 basamakli bir tam sayinin onlar basamagindaki rakami ve bu rakamin tek
///mi çift mi olduðunu ekrana yazdiran bir C programi
int main()
{
    int sayi;
    int obr;
    printf("bir sayi giriniz:");
    scanf("%d",&sayi);
    if(99>sayi || sayi>999)
    {
        printf("\n !!! hatali deger girdiniz !!! ");
    }
    else{
        obr=((sayi-sayi%10)/10)%10;
        printf("%d \n",obr);
        if(obr%2==0)
        {
            printf("onlar basamagindaki rakam cift...");
        }
        else
        {
            printf("onlar basamagindaki rakam tek...");
        }

    }
    return 0;
}
