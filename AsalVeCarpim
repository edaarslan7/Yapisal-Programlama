#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
    int islem;
    printf("1-Asal sayi bulma\n2-Sayi carpimi\n3-Cikis");
    printf("\nYapmak istediginiz islemi secin: ");
    scanf("%d",&islem);
    while(islem!=3){
        if(islem==1){
            asalMi();
        }
        else if(islem==2){
            srand(time(NULL));
            int a=1+rand()%20;
            int b=2+rand()%99;
            printf("Sayi1 = %d Sayi2 = %d Carpim = %d",a,b,sayiCarpim(a,b));
        }
        else{
            printf("Hatali giris.");
        }
        printf("\nYapmak istediginiz islemi seciniz: ");
        scanf("%d",&islem);
    }
    printf("Cikis yapiliyor...");
    return 0;
}
void asalMi(){
    int sayi;
    printf("Bir sayi girin: ");
    scanf("%d",&sayi);
    if(sayi%2==0){
        if(sayi==2){
            printf("%d asaldir.",sayi);
        }
        else{
            printf("%d asal sayi degildir.",sayi);
        }
    }
    else{
        int i=3;
        while(i<=sqrt(sayi)){
            if(sayi%i==0){
                printf("%d asal sayi degildir.",sayi);
                break;
            }
            else{
                i+=2;
            }

        }
        if(sayi%i!=0){
            printf("%d asaldir",sayi);
        }

    }

}
int sayiCarpim(int a,int b){
    return a*b;

}
