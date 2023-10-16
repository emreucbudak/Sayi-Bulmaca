/******************************************************************************

                            Emre Üçbudak

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    jump:
    int x = rand() % 9 + 2;
    int y;
    jump1:
    printf ("Sayı Girin = ");
    scanf("%d",&y);
    if (y==x)
    {
        printf ("Tebrikler Doğru Bildiniz\ \n");
        printf("Yeniden Oynamak İster misiniz? \n");
        printf ("evetse 1 / hayırsa 0 \n");
        int z;
        scanf ("%d",&z);
        if (z==1)
        {
            goto jump;
        }
        
    }
    else
    {
        printf("Yanlış Bildiniz!\n");
        printf("Tekrar Deneyin\n");
        goto jump1;
        
    }
    return 0;
}
