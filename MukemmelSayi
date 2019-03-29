#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    mukemmelSayi(sayi);
    return 0;
}
void mukemmelSayi(int sayi){
    int toplam=0;
    for(int i=1;i<sayi;i++){
        if(sayi%i==0){
                toplam+=i;
        }
    }
    if(toplam==sayi){
        printf("%d mukemmel sayidir.",sayi);
    }
    else{
        printf("%d mukemmel sayi degildir.",sayi);
    }
}
