//judul : Luas Segitiga, Luas Segitiga
//oleh : mus
#include "stdio.h", "stdlib.h";

//kamus
int a;
int t;
int l;
float r;
float phi;
float L; //tulisan l ada 2, jd harus dibedain

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
    printf("Alas\t = %d cm\n", a);
    printf("Tinggi\t = %d cm\n", t);
    printf("Luas\t = %d cm\n", l);
    printf("============================================================\n");
    printf("\t\tLuas Lingkaran\n");
    printf("\t\t.... .........\n\n");
    printf("Jari-jari\t = %f cm\n", r);
    printf("phi\t\t = %f cm\n", phi);
    printf("Luas\t\t = %f cm\n", L);

    return 0;
}
