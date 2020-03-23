#include <stdio.h>
#include <math.h>

int main(){
    int a, n, i=1, sayici= 0;

    scanf("%d", &n);

    // n-nin kaç basamaklı olduğunu buluyoruz.
    // a = n yapmamın sebebi n yi bozmamak ve bunu bi kaç kez kullanıcam.
    a = n;
    while(i){
        a = a/10;
        sayici++;
        if(a == 0)
            i=0;
    }

    // n yi basamaklarına ayırıyoruz.
    int basamak[sayici];
    a = n;
    for(i=0; i<sayici; i++){
        basamak[i] = a % 10;
        a /= 10;
    }

    i = sayici - 1;
    for (i;i>=0;i--){

        //basamak[1,4,7] dışlamamın sebebi bunların ondalıklar olmasıdır:
        //    10, 10.000, 10.000.000 gibi

        if(i!=1 && i!=4 && i!=7){
            switch(basamak[i]){
            case 0:
                printf(" ");
                break;

            case 1:
                if(i==0 || i==6 || i==9) //Bu ifin sebebi ise  bir yüz, bir bin
                    printf("bir ");      //denmezken bir milyon veya sadece bir denmesidir.
                break;

            case 2:
                printf("iki ");
                break;

            case 3:
                printf("uc ");
                break;

            case 4:
                printf("dort ");
                break;

            case 5:
                printf("bes ");
                break;

            case 6:
                printf("alti ");
                break;

            case 7:
                printf("yedi ");
                break;

            case 8:
                printf("sekiz ");
                break;

            case 9:
                printf("dokuz ");
                break;
            }
        } else{
            switch(basamak[i]){
            case 0:
                printf(" ");
                break;

            case 1:
                printf("on ");
                break;

            case 2:
                printf("yirmi ");
                break;

            case 3:
                printf("otuz ");
                break;

            case 4:
                printf("kirk ");
                break;

            case 5:
                printf("elli ");
                break;

            case 6:
                printf("altmis ");
                break;

            case 7:
                printf("yetmis ");
                break;

            case 8:
                printf("seksen ");
                break;

            case 9:
                printf("doksan ");
                break;
            }
        }

        //Burada ise ekleri ilave ediyoruz:
        //      beş yüz, beş bin, beş milyon gibi.
        switch(i){
        case 0:
            printf(" ");
            break;

        case 2:
            printf("yuz ");
            break;

        case 3:
            printf("bin ");
            break;

        case 4:
            printf("");
            break;

        case 5:
            printf("yuz ");
            break;

        case 6:
            printf("milyon ");
            break;

        case 7:
            printf("");
            break;

        case 8:
            printf("yuz ");
            break;

        case 9:
            printf("milyar ");
            break;
        }

    }
    return 0;
}
