#include <stdio.h>
#include <stdlib.h>
///hasta mi saglikli mi kontrolu
int main()
{
    int kanb;
    int yas;
    int test1;
    printf("yasi kan basincini ve test1 sonucunu giriniz: ");
    scanf("%d\n%d\n%d",&yas,&kanb,&test1);
    if(kanb<100)
    {
        printf("saglikli...");
    }
    else
    {
        if(yas>50 && test1>=100)
        {
            printf("hasta corban tasta...");
        }
        else if(yas>35 && test1>150)
        {
            printf("hasta...");
        }
        else if(yas<=35 && test1<100)
        {
            printf("saglikli...");
        }
        else
        {
            printf("saglikli...");
        }
    }
    return 0;
}
