//judul : Luas Segitiga, Luas Segitiga
//oleh : mus
#include "stdio.h", "stdlib.h";

//kamus
int a;
int t;
int l;
float r;
float phi;
float L; //tulisan l ada 2, jd harus dibedakan
//float digunakan untuk bilangan desimal
//int digunakan untuk bilangan bulat

int angka1; //variabel int buat bil bulat
int angka2; //gak boleh ada spasi lho
float pecahan1, pecahan2; //2 langsung bisa, trs float buat masukin pecahan

//deskripsi
int main ()
{
    a=18;
    t=90;
    l=810;
    r=10;
    phi=3.14;
    L=314;

    printf("\t\tLuas Segitiga\n");
    printf("\t\t.... ........\n\n");
    printf("Alas\t = %d cm\n", a); // untuk mencetak variabel bertipe int, menggunakan ("%d", variable_yang_akan_ditampilkan)
    printf("Tinggi\t = %d cm\n", t);
    printf("Luas\t = %d cm\n", l);
    printf("============================================================\n");
    printf("\t\tLuas Lingkaran\n");
    printf("\t\t.... .........\n\n");
    printf("Jari-jari\t = %f cm\n", r); // untuk mencetak variabel bertipe float, menggunakan ("%f", variable_yang_akan_ditampilkan)
    printf("phi\t\t = %f cm\n", phi);
    printf("Luas\t\t = %f cm\n", L);
    
    
    //bilangan bulat
    angka1=10; //angka dalam variabel
    angka2=20;

    printf("Lihat angka 1 = %d\n", angka1);
    //%d digunakan buat km pengen naruh variabelnya dimana, buat int
    //,angka1 itu berati variabel yg mana yang akan dimunculkan
    printf("Lihat angka 2 = %d\n", angka2);
    printf("Jumlah angka = %d\n", angka1+angka2);
    //jangan lupa titik koma yaa

    //pecahan
    pecahan1=12.5;
    pecahan2=7.75;

    printf("Lihat pecahan 1 = %f\n", pecahan1);
    //%f digunakan buat km mau naruh variabelnya dimana, buat float
    printf("Lihat pecahan 2 = %f\n", pecahan2);
    printf("Jumlah pecahan = %.2f\n", pecahan1+pecahan2);
    //tulisan .2 itu buat nentuin ada 2 angka belakang koma


    return 0;
}
