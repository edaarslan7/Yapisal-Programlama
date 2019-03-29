#include <stdio.h>
#include <stdlib.h>
///Kullanýcýnýn klavyeden girdiði AY numarasýna göre, o ayýn kaç günden oluþtuðunu ekrana yazan bir C programý yazýnýz.
int main()
{
    int ay;
    printf("bir ay giriniz: ");
    scanf("%d",&ay);
    switch(ay)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("%d. ay 31 gun icermektedir.",ay);
            break;
        case 2:
        case 4:
        case 6:
        case 9:
        case 11:
            printf("%d. ay 30 gun icermektedir.",ay);
            break;
        default:
            printf("1 ile 12 arasinda deger giriniz...");
            break;
    }
    return 0;
}
