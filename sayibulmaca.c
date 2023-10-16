/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

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
