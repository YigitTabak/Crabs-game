#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int zar1,zar2,zartoplam,yedek,atis=2;
    srand(time(NULL));
    printf("Oynanis \n1-Ilk seferde zarlarin toplami 7 veya 11 ise kazanirsin , 2  3  12 ise kaybedersin\n2-Ilk atislarinda toplamlarin bu sayilardan biri degilse kazanmak icin attigin toplami tekrar atmalisin\n3-Tekrar atislarda 7 gelirse kaybedersin");
    printf("\n          ---Zarlari atmak icin herhangi bir tusa basip ardindan ENTER'a basiniz---\n");
    getchar();
    zar1=1+rand()%6;
    zar2=1+rand()%6;
    zartoplam=zar1+zar2;
    printf("\n1.zar atisi---->   zar1= %d     zar2= %d   zarlar toplami=%d\n",zar1,zar2,zartoplam);
    yedek=zartoplam;
    
    if ((zartoplam==7)||(zartoplam==11))
    {
        printf("\nKazandiniz");
    }
    else if((zartoplam==2)||(zartoplam==3)||(zartoplam==12))
    printf("\nKaybettiniz");
    else
    {
        printf("\n----------KAZANMAK icin sonraki zarlar toplami %d olmali-----------\n",yedek);
        for(atis;atis<999;atis++)
        {
        printf("Zarlari atmak icin herhangi bir tusa basiniz ardindan ENTER'a basiniz\n");
        getchar();
        zar1=1+rand()%6;
		getchar(); 
        zar2=1+rand()%6;
        zartoplam=zar1+zar2;
        printf("\n%d.zar atisi---->   zar1= %d     zar2= %d    zarlar toplami=%d\n",atis,zar1,zar2,zartoplam);
        if (zartoplam==7)
        {
            printf("\nKaybettiniz");
            break;
        }
        else if (zartoplam==yedek)
        {
            printf("\nKazandiniz");
            break;
        }
        }   
    }   
}
