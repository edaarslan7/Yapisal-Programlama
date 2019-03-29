#include <stdio.h>
#include <stdlib.h>
///Rakamlari birbirinden farkli uc basamakli sayilari ve adedini ekrana yazdirma

int main()
{

    RakamlariFarkliMi();
    RakamlariAyniMi();
    return 0;
}
void RakamlariFarkliMi(){
    int sayac=0;
    for(int i=100;i<1000;i++){
        int birler=i%10;
        int onlar=(i/10)%10;
        int yuzler=i/100;
        if(birler!=onlar && onlar!=yuzler && yuzler!=birler){
            printf("%d\t",i);
            sayac++;
        }
    }
    printf("\nRakamlari birbirinden farkli olan %d adet sayi vardir.",sayac);

}
void RakamlariAyniMi(){
    int sayac=0;
    for(int i=100;i<1000;i++){
        int birler=i%10;
        int onlar=(i/10)%10;
        int yuzler=i/100;
        if(birler==onlar && onlar==yuzler && yuzler==birler){
            printf("%d\t",i);
            sayac++;
        }
    }
    printf("\nRakamlari ayni olan %d adet sayi vardir.",sayac);

}
