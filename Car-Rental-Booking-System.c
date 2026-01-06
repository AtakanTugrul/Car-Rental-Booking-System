#include <stdio.h>

typedef struct{
    char plaka[10];
    char marka[20];
    char model[20];
    int kiralanmis;

}Arac;

typedef union{
    int gunluk;
    char bitisTarihi[22];

}KiralamaBilgisi;


typedef struct{
    char isim[20];
    char soyad[20];
    char ehliyetNo[15];
    int kiralamaTuru;

    Arac kiralananArac;
    KiralamaBilgisi kiralamaDetay;
    
    
}Musteri;


int main(){
    Musteri musteriler[2];

    FILE *dosya;
    dosya = fopen("kiralama_bilgileri.txt", "w");

    for(int i = 0; i<2; i++){
        printf("MUSTERI %d Bilgilerini giriniz: \n", i+1);

        printf("Isim: ");
        scanf("%s", musteriler[i].isim);

        printf("Soyad: ");
        scanf("%s", musteriler[i].soyad);


        printf("Ehliyet No: ");
        scanf("%s", musteriler[i].ehliyetNo);

        printf("\nKiralanan Arac Bilgileri:\n");
        printf("Plaka");
        scanf("%s", musteriler[i].kiralananArac.plaka);

        printf("Marka: ");
        scanf("%s", musteriler[i].kiralananArac.marka);

          printf("Model: ");
        scanf("%s", musteriler[i].kiralananArac.model);

        printf("Kiralama turunu seciniz(1: Gunluk, 2: Uzun Sureli)");

        scanf("%d", &musteriler[i].kiralamaTuru);

        if(musteriler[i].kiralamaTuru == 1){
            printf("Kac gunlugune kiralandi?");
            scanf("%d",&musteriler[i].kiralamaDetay.gunluk);
        }else{
            printf("Bitis tarihi nedir (GG//AA/YYYY)");
            scanf("%s", musteriler[i].kiralamaDetay.bitisTarihi);

        }

        


        

        

    }

for(int i = 0; i<2; i++){
    fprintf(dosya, "\n---Musteri %d Bilgileri\n---", i+1);

    fprintf(dosya, "Isim: %s\nSoyisim: %s\n", musteriler[i].isim, musteriler[i].soyad);

    fprintf(dosya, "Ehliyet no: %s\n", musteriler[i].ehliyetNo);
    fprintf(dosya, "Kiralanan arac: %s\n %s\n %s\n", musteriler[i].kiralananArac.marka,musteriler[i].kiralananArac.model,musteriler[i].kiralananArac.plaka);


         if(musteriler[i].kiralamaTuru == 1){
            fprintf(dosya, "kiralama suresi: %d gun\n", musteriler[i].kiralamaDetay.gunluk);
        }else{
           fprintf(dosya, "Kiralama bitis tarihi: %s\n", musteriler[i].kiralamaDetay.bitisTarihi);

        }

}

fclose(dosya);



    return 0;
}