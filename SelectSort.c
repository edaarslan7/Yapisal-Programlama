#include <stdio.h>
#include <stdlib.h>

int main()
{
    int boyut;
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d",&boyut);
    int dizi[boyut];
    for(int i=0;i<boyut;i++){
        printf("Elemanlari giriniz: ");
        scanf("%d",&dizi[i]);
    }
    printf("Algoritma calismadan once: ");
    for(int i=0;i<boyut;i++){
        printf("%d ",dizi[i]);
    }
    printf("Algoritma calistiktan sonra: ");
    function(dizi,boyut);
    for(int i=0;i<boyut;i++){
        printf("%d ",dizi[i]);
    }
    return 0;
}
void function(int dizi[],int boyut){
    int temp;
    int min;
    for(int i=0;i<boyut-1;i++){
        min=i;
        for(int j=i+1;j<boyut;j++){
            if(dizi[j]<dizi[min]){
                min=j;
            }
        }
        if(dizi[i]>dizi[min]){
            temp=dizi[i];
            dizi[i]=dizi[min];
            dizi[min]=temp;
        }
    }

}
