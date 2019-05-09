#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j=1;
    int *jp1,*jp2=&j;

    jp1 = jp2; ///ikisi de ayni adresi gösteriyorr jp2nin adresi

    i = ++(*jp2); ///jp2nin gösterdiði adresteki deðeri i ye arttýrýp atadik
    *jp2 = *jp1+i;  ///jp1in gösterdiði adresteki deðer ile i yi toplayýp jp2nin gösterdiði adresteki deðere atadýk


    printf("i=%d,j=%d,*jp1=%d,*jp2=%d\n",i,j,*jp1,*jp2);
    return 0;
}
