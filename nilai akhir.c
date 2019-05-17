#include "stdio.h"

//kamus
int tgs, uts, uas;
float nilaiAkhir;

//deskripsi
main()
{
    printf("Masukkan nilai tugas\t : "); scanf("%d", &tgs);
    if(tgs<0 || tgs>100){printf("\ninvailid\n\n");}
    if(tgs<0 || tgs>100){return 0;}

    printf("Masukkan nilai UTS\t : "); scanf("%d", &uts);
    if(uts<0 || uts>100){printf("\ninvailid\n\n");}
    if(uts<0 || uts>100){return 0;}

    printf("Masukkan nilai UAS\t : "); scanf("%d", &uas);
    if(uas<0 || uas>100){printf("\ninvailid\n\n");}
    if(uas<0 || uas>100){return 0;}

    printf("\nNilai tugas = %.2f\n", tgs*0.30);
    printf("Nilai uts = %.2f\n", uts*0.35);
    printf("Nilai uas = %.2f\n", uas*0.35);

    nilaiAkhir=(tgs*0.30)+(uts*0.35)+(uas*0.35);

    if(nilaiAkhir>100){printf("\ninvailed\n\n");}
    else if(nilaiAkhir>84){printf("\nNilai anda A\n\n");}
    else if(nilaiAkhir>69){printf("\nNilai anda B\n\n");}
    else if(nilaiAkhir>59){printf("\nNilai anda C\n\n");}
    else if(nilaiAkhir>49){printf("\nNilai anda D\n\n");}
    else if(nilaiAkhir>0){printf("\nNilai anda E\n\n");}
    else {printf("\ninvailid\n\n");}

    return 0;
}
