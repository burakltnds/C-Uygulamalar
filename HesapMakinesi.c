#include <stdio.h>

int main()
{
    
    int sayi1,sayi2,toplam,fark,carpim,mod;
    float bolum;
    
  printf("iki sayi giriniz:");
  scanf("%d%d",&sayi1,&sayi2);
  
  toplam=sayi1+sayi2;
  
  if(sayi2>=sayi1){
  fark=sayi2-sayi1;
  }else{
      fark=sayi1-sayi2;
  }
  
  
  carpim=sayi1*sayi2;
  mod=sayi1%sayi2;
  
  bolum=(float)sayi1/sayi2;
 printf("TOPLAM:%d\nFARK:%d\nÇarpım:%d\nBölüm:%f\nMod:%d" , toplam,fark,carpim,bolum,mod);
}