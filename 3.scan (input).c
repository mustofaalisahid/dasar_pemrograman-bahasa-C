//judul : pertemuan 2
//oleh : mus
//dibuat : 21 sept 2015
#include "stdio.h"
#include "stdlib.h"

//kamus
int angka1; //variabel int buat bil bulat
int angka2; //gak boleh ada spasi lho
float pecahan1, pecahan2, jml; //2 langsung bisa, trs float buat masukin pecahan / desimal

//deskripsi
int main()
{
    //bilangan bulat
    angka1=10; //angka dalam variabel
    angka2=20;
    jml=angka1+angka2;

    //input
    printf("Lihat angka 1 =\n");
    scanf("%d", &angka1); // ini dibaca : input kedalam variabel angka1 yang bertipe int (nanti ketika di run, maka bisa di input nilai int / bilangan bulat)
    //tampilan
    printf("Angka 1 = %d\n", angka1);
    //%d digunakan buat km pengen naruh variabelnya dimana, buat int
    //,angka1 itu berati variabel yg pengen mbok munculin yg mana
    printf("Lihat angka 2 =\n");
    scanf("%d", &angka2);
    printf("Angka 2 = %d\n", angka2);

    printf("Jumlah angka =\n");
    scanf("%f", &jml); // ini dibaca : input kedalam variabel jml yang bertipe float (nanti ketika di run, maka bisa di input nilai float / desimal)
    printf("Angka 1 + Angka 2 = %.2f\n", jml);
    //jangan lupa titik koma yaa



    //pecahan
    pecahan1=12.5;
    pecahan2=7.75;

    printf("Lihat pecahan 1 =\n");
    scanf("%f\n", &pecahan1);
    //%f digunakan buat km mau naruh variabelnya dimana, buat float
    printf("Lihat pecahan 2 =\n");
    scanf("%f\n", &pecahan2);
    printf("Jumlah pecahan =\n");
    scanf("%f\n", &jml);
    //tulisan .2 itu buat nentuin ada 2 angka belakang koma

    return 0;
}
