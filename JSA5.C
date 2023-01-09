#include<stdio.h>
#include<conio.h>
#include<string.h>
//deklarasi fungsi
void TLulus(void);
int tl; //tahun lulusan

main()
{
 int i,j,JL[2][5],jl,sem;
 clrscr();
 tl=2015;
 sem=0;
 puts("DATA LULUSAN STUDI SISTEM INFORMASI");
 puts("FAKULTAS TEKNIK DAN ILMU KOMPUTER UNIVERSITAS KOMPUTER INDONESIA");
 for(i=0;i<5;i++){ //baris sebagai TAHUN
  tl++;
  for(j=0;j<2;j++){ //kolom sebagai semester
   sem++;
   printf("Tahun Lulusan %d Semeseter %d = ",tl,sem);
   scanf("%d",&JL[j][i]);
   if(j==1){
    sem=0;
   }
  }
 }

 printf("\n");
 printf("Mau menampilkan lulusan tahun berapa ? "); scanf("%d",&tl);
 printf("Semester berapa? "); scanf("%d",&sem);
 TLulus();
 //proses menampilkan
 for(i=0;i<5;i++){ //baris tahun
  for(j=0;j<2;j++){
   if(tl==j && (sem-1)==i){
    jl=JL[j][i];
   }
  }

  printf("Jumlah lulusan adalah %d\n",jl);
  jl=0;
  printf("Mau menampilkan lulusan tahun berapa ? ");
  scanf("%d",&tl);
  TLulus();
  for(i=0;i<5;i++)
  { //baris
   for(j=0;j<2;j++)
   { //kolom
    if(tl==i)
     jl=jl+JL[j][i];
   }
  }
  printf("Jumlah lulusan adalah %d\n",jl);

 }

 getch();
 return 0;
}
//definisi fungsi
void TLulus(void){
 if (tl==2016) tl = 0;
 else if (tl==2017) tl=1;
 else if (tl==2018) tl=2;
 else if (tl==2019) tl=3;
 else tl=4;
}





