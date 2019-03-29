#include <stdio.h>
#include <stdlib.h>


int main()
{
    int islem;
    printf("1-Asal sayi bulma\n2-En kucuk sayi bulma.\n3-Cikis");
    printf("\nYapmak istediginiz islemi secin: ");
    scanf("%d",&islem);
    while(islem!=3){
        if(islem==1){
            asalMi();
            printf("\nYapmak istediginiz islemi girin: ");
            scanf("%d",&islem);
        }
        else if(islem==2){
            enKucuk();
            printf("\nYapmak istediginiz islemi girin: ");
            scanf("%d",&islem);
        }
        else{
            printf("Hatali giris. Lutfen tekrar girin: ");
            scanf("%d",&islem);
        }
    }
    printf("Cikis yapiliyor...");

    return 0;
}
void asalMi(){
    int alt,ust;
    printf("Alt sinir ve ust sinir giriniz: ");
    scanf("%d%d",&alt,&ust);
    if(ust<2){
        printf("bu aralikta asal sayi yoktur.");
    }
    else{
        for(alt;alt<ust;alt++){
                int kontrol=0;
                for(int i=2;i<alt;i++){
                    if(alt%i==0){
                        kontrol=1;
                    }
                }
                if(kontrol==0){
                    printf("%d bir asal sayidir.\n",alt);
                }
        }
    }

}
void enKucuk(){
    int a,b,c;
    printf("Uc adet sayi giriniz: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b){
        if(a<c){
            printf("en kucuk sayi %d",a);
        }
        else{
            printf("en kucuk sayi %d",c);
        }
    }
    else{
        if(b<c){
            printf("en kucuk sayi %d",b);
        }
        else{
            printf("en kucuk sayi %d",c);
        }
    }
}
