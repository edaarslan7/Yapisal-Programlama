#include <stdio.h>
#include <stdlib.h>
///20 kisilik sinifta girilen notlarin ort. en dusuk en yuksek not yazdirma

int main()
{
    int sinif[20];
    int eks, ebs, not, toplam=0;
    float ortalama;
    for(int i=0;i<20;i++){
        printf("Notu giriniz: ");
        scanf("%d",&not);
        sinif[i]=not;
        toplam += sinif[i];
    }
    sirala(sinif);
    eks=sinif[0];
    ebs=sinif[19];
    ortalama=(float)toplam/20;
    printf("toplam: %d ortalama: %f\nen dusuk not: %d\nen yuksek not: %d",toplam,ortalama,eks,ebs);
    return 0;
}
void sirala(int dizi[20]){
    int temp;
    for(int i=19;i>=0;i--){
        for(int j=0;j<i;j++){
            if(dizi[j]>dizi[j+1]){
                temp=dizi[j+1];
                dizi[j+1]=dizi[j];
                dizi[j]=temp;
            }
        }

    }
}
