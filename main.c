#include <stdio.h>
#include <stdlib.h>
///Atmde 10 20 50 ve 100luk paralar var cekilmek istenen parayi bolustur
int main()
{
    int para, yuzluk, ellilik, yirmilik, onluk;
    printf("Cekmek istediginiz miktari giriniz: ");
    scanf("%d",&para);
    if(para%10!=0){
        printf("En kucuk 10 TL'lik banknot mevcut...");
    }
    else{
        yuzluk=para/100;
        para-=yuzluk*100;
        ellilik=para/50;
        para-=ellilik*50;
        yirmilik=para/20;
        para-=yirmilik*20;
        onluk=para/10;
        if(yuzluk!=0) printf("%d adet 100luk",yuzluk);
        if(ellilik!=0) printf("\n%d adet 50lik",ellilik);
        if(yirmilik!=0) printf("\n%d adet 20lik",yirmilik);
        if(onluk!=0) printf("\n%d adet 10luk",onluk);
    }



    return 0;
}
