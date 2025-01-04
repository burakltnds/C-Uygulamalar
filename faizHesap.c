#include <stdio.h>

int main(){

    int zaman,prim;
    double oran=0.07,anaP;
    printf("Yatirmak istediginiz tutar:");
    scanf("%lf",&anaP);
    
    do{
    printf("Kac ay vade ile(12 aydan fazla olamli):");
    scanf("%d",&zaman);
    }while(zaman<=12);
    double faiz=anaP*(oran*zaman);
    if(zaman>20){
        printf("\nPrim almaya hak kazandiniz\n");
        prim=(zaman-20)*200;
    anaP=anaP+ (anaP*oran*zaman)+prim;
        printf("Hak Edilen Prim:%d\nFaiz Getirisi:%lf\nSon Toplam:%lf\n",prim,faiz,anaP);
    }else{
        anaP+=(anaP * (zaman*oran));
        printf("Faiz Getirisi:%lf\nSon Toplam:%lf",faiz,anaP);
    }

    
    


    return 0;
}
