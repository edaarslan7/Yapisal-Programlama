#include <stdio.h>
#include <stdlib.h>
///100 kapi var kapilar kilitli 1den 20ye kadar anahtar var kapi numarasi anahtar numarasini boluyorsa anahtar kapıyı aciyor
///ya da kapatıyor 20.turun sonunda hangi kapilar acik hangileri kapali


int main()
{
    for(int i=1;i<=100;i++){
        int toplam=0;
        for(int j=1;j<=20;j++){
            if(i%j==0){
                toplam+=1;
            }
        }
        if(toplam%2==0){
            printf("%d. kapi kapali\n",i);
        }
        else{
            printf("%d. kapi acik\n",i);
        }
    }
    return 0;
}
