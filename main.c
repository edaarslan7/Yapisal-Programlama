#include <stdio.h>
#include <stdlib.h>
/// Klavyeden girilen basari notuna g�re �grencinin harf notu karsiligini yazdiran bir program
int main()
{
    int a;
    printf("bir not giriniz: ");
    scanf("%d",&a);
    switch(a/10)
    {
        case 10:
        case 9:
            printf("AA");
            break;
        case 8:
            if(a<85)
            {
                printf("BB");
                break;
            }
            else
            {
                printf("BA");
            }
        case 7:
            printf("CB");
            break;
        case 6:
            printf("CC");
            break;
        case 5:
            if(a<55)
            {
                printf("DD");
                break;
            }
            else
            {
                printf("DC");
                break;
            }
        case 4:
            printf("FD");
            break;
        case 3:
        case 2:
        case 1:
            printf("FF");
            break;
        default:
            printf("1 ile 100 arasi deger giriniz...");
            break;

    }

    return 0;
}
