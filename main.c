#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j=1;
    int *jp1,*jp2=&j;

    jp1 = jp2; ///ikisi de ayni adresi g�steriyorr jp2nin adresi

    i = ++(*jp2); ///jp2nin g�sterdi�i adresteki de�eri i ye artt�r�p atadik
    *jp2 = *jp1+i;  ///jp1in g�sterdi�i adresteki de�er ile i yi toplay�p jp2nin g�sterdi�i adresteki de�ere atad�k


    printf("i=%d,j=%d,*jp1=%d,*jp2=%d\n",i,j,*jp1,*jp2);
    return 0;
}
