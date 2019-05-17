#include <stdio.h>

int main()
{
    char jenis;
    int gaji,jam,totalgaji,lembur,bonus,total;
    printf("Pilih dengan mengetikkan a,b,c, atau d\n");
    printf("a. Pekerja Tetap\n");
    printf("b. Pekerja Kontrak\n");
    printf("c. Pekerja Part Time\n");
    printf("d. Magang\n");
    printf("Masukan Jenis Pekerjaan: ");
    scanf("%s",&jenis);
    switch(jenis){
    case 'a':   printf("Pekerja Tetap\n");
                gaji=50000;
                printf("\nMasukan Jam Kerja: ");
                scanf("%d",&jam);
                if(jam>6){
                lembur= jam-6;
                bonus=10000*lembur;
                }
                else{
                bonus=0;
                } break;
    case 'b':   printf("Pekerja Kontrak\n");
                gaji=35000;
                printf("\nMasukan Jam Kerja: ");
                scanf("%d",&jam);
                if(jam>8){
                lembur=jam-8;
                bonus=5000*lembur;
                }else{
                bonus=0;
                } break;
    case 'c':   printf("\nPekerja Part Time\n");
                gaji=15000;
                printf("\nMasukan Jam Kerja: ");
                scanf("%d",&jam); bonus=0; break;
    case 'd':   printf("\nMagang\n");
                gaji=5000;
                printf("\nMasukan Jam Kerja: ");
                scanf("%d",&jam); bonus=0; ;break;
    default : printf("Invalid"); return(0); break;
    }
    totalgaji=gaji*jam;
    total=totalgaji+bonus;
    printf("\nGaji : %d\n\n",totalgaji);
    printf("\nBonus : %d\n\n",bonus);
    printf("\nTotal : %d\n\n",total);
}
