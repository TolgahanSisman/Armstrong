#include <stdio.h>

int Armstrong(int baslangic,int bitis){
    int sayi, toplam, basamak, sayac;
    sayac = 0;
    printf("\n%d ile %d araligindaki Armstrong sayilari: \n",baslangic,bitis);
    for (int n = baslangic; n < bitis; n++) {
        sayi = n;
        toplam = 0;
        while (sayi != 0) {
            basamak = sayi % 10;                    // Basamağı buluyoruz.
            toplam += basamak * basamak * basamak;  // Basamağın kübünü alıp topluyoruz.
            sayi = sayi / 10;                       // Aldığımız basamağı siliyoruz.
        }
        if (n == toplam){
            printf("\t%d Armstrong sayisidir. \n", n);
            sayac += 1;
        }
    }
    if (sayac == 0){
        printf("%d ile %d araliginda Armstrong sayisi yoktur. \n",baslangic,bitis);
    }
    return 0;
}

int main() {
    int baslangic, bitis;
    printf(" Lutfen araligin alt limitini giriniz: ");
    scanf("%d",&baslangic);
    printf("Lutfen araligin ust limitini giriniz: ");
    scanf("%d", &bitis);

    while(baslangic<100 || bitis>999){
        printf("Lutfen 100-999 arasi bir deger giriniz. \n");
        printf("_____________________________________\n");
        printf(" Lutfen araligin alt limitini giriniz: ");
        scanf("%d",&baslangic);
        printf("Lutfen araligin ust limitini giriniz: ");
        scanf("%d", &bitis);
    }
    Armstrong(baslangic, bitis);
    return 0;
}
