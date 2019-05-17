//judul : sinau type data lanjutan
//modifikasi : 1 okt 2015
//oleh : mus
//pada kegiatan ini kira mengamati field menjadi variable
//contoh kasusnya type data string
#include "stdio.h"


//kamus
//contoh field nama --> akan menjadi apa aja bos?
//tulis di sini ya
//string
char Nama[25], Tempat_Lahir[10]; //begini cara menulis string di c
              // [] artinya rang / jangkauan karakter


//deskripsi
main()
{
    printf("Sistem pendataan data diri\n");
    printf("Nama panjang : "); scanf("%s", &Nama);
    printf("Hasil inputnya adalah %s\n", Nama); //cara menampilkan isi variabel
    printf("Tempat lahir : "); fflush(stdin); gets(Tempat_Lahir);
    printf("Hasil inputnya adalah %s\n", Tempat_Lahir);
    // terdapat 2 cara untuk input string, yaitu menggunakan scanf dan gets, bisa dilihat perbedaan keduanya
    // fflush(stdin) digunakan jika ada eror ketika penginputan
}
