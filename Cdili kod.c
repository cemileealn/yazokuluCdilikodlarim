                                            
#include <stdio.h>
#include <stdlib.h>
#include<math.h>


/*1  kullanıcıdan alınan sayıların toplamını bulan program kodu*/
// int toplam(int s1,int s2){
//     return(s1 +s2);
// }

// int main(){
//     int s1,s2;
//     printf("tolamini hesaplamak istediginiz iki sayiyi giriniz=");
//     scanf("%d%d",&s1,&s2);
//     printf("s1 ve s2 sayilarinin toplami=%d",toplam(s1,s2));
//     return 0;
// }


/* 2 girilen sayinin kupunu bulan progran kodu*/
// int kupbul(int sayi){
//     int sonuc=sayi*sayi*sayi;
//     return sonuc;
// }
// int main(){
//     int s;
//     printf("sayi=");
//     scanf("%d",&s);
//     printf("sonuc=%d",kupbul(s));
//     return 0;
// }


/* 3 kısa ve uzun boy bilgisine gore dıkdoerken cızdıren program kodu*/
// void sekil(int kisa,int uzun){
//     int i,j;
//     for (i=0;i<uzun;i++){
//         for (j=0;j<kisa;j++){
//             if (i==0 || i==uzun-1){        // if ve sonrası ortasında * olmaması ıcın yazıldı 
//                 printf("*");
//             }
//             else{
//                 if( j==0 || j==kisa-1){
//                     printf("*");
//                 }
//                 else{
//                     printf(" ");
//                 }
//             }
//         }
//     printf("\n");
//     }
// }
// int main()
// {
//     int kisa,uzun;
//     printf("kisa kenar=");
//     scanf("%d",&kisa);
//     printf("uzun  kenar=");
//     scanf("%d",&uzun);
//     sekil(kisa,uzun);
//     return 0;
// }



/* 4  kullanıcıdan yari cap bilgisi alarak daırenin alanını hesaplayan program kodu*/
// double alan( int yaricap){
//     return 3.14* yaricap*yaricap;
// }
// int main(){
//     int r;
//     printf("yaricap=");
//     scanf("%d",&r);
//     printf("alan=%5.2lf",alan(r));
//     return 0;

// }



/* 5   1 den kullanıcınn gırıdıgı sayıya kadar olan sayıların toplamını bulan program kodu*/
// int toplam(int x){
//     int i,sonuc=0;
//     for(i=1;i<=x;i++){
//         sonuc+=i;
//     }
//     return sonuc;
// }
// int main()
// {
//     int x,sonuc;
//     printf("bir sayi giriniz=");
//     scanf("%d",&x);
//     sonuc=toplam(x);
//     printf("1 den girmis oldugunuz sayiya kadar olan sayilarin tolami=%d\n",sonuc);
//     return 0;
// }



/*  6  kullanıcıdan alınan sayi poz ise p neg ise n sifir ise s gösteren kod*/
// char tip(){
//     int x;
//     printf("sayi giriniz:");
//     scanf("%d",&x);
//     if (x>0)
//         return 'p';
    
//     else if (x<0)
//         return 'n';
    
//     else
//         return 's';
            
// }
// int main(){
//     printf("sayi tipi:%c",tip());
//     return 0;

// }



/* 7  kullanıcının gırdıgı sayının kac basamaklı oldugunu bulan program kodu*/
// int basamak_bul( int sayi){
//     int sayac=0;
//     while(sayi!=0){
//         sayi/=10;
//         sayac++;
//     }
//     return sayac;
// }
// int main(){
//     int sayi,t;
//     printf("sayi giriniz:");
//     scanf("%d",&sayi);
//     t=basamak_bul(sayi);
//     printf("basamak sayisi:%d",t);
//     return 0;
// }


/* 8  x ussu y degerını hesaplayan program kodu*/
// int  carp(int x, int y){
//     return pow(x,y);
// }
// int main(){
//     int sonuc,x,y;
//     printf("sayi giriniz x:");
//     scanf("%d",&x);
//     printf("sayi giriniz y:");
//     scanf("%d",&y);
//     sonuc=carp(x,y);
//     printf("sonuc:%d",sonuc);
//     return 0;

// }



/*9    kullanıcının ıstegıne gore karenın veya daırenın alanını hesaplayan program kodu*/
// int menu(){
//     int tercih;
//     printf("1.Kare\n");
//     printf("2.Daire\n");
//     printf("3.Bitir\n");
//     printf("secegeninizi giriniz:");
//     scanf("%d",&tercih);
//     return tercih;
// }
// int kare(int kenar){
//     return kenar*kenar ;
// }
// double daire(double yaricap){
//     return yaricap*yaricap*3.14 ;
// }
// int main(){
//     int x,kenar;
//     double yaricap;
//     x=menu();
//     if(x==1){
//         printf("kenar=");
//         scanf("%d",&kenar);
//         printf("alan:%d\n",kare(kenar));
//     }
//     else if (x==2){
//         printf("yaricap:");
//         scanf("%lf",&yaricap);
//         printf("alan:%lf\n",daire(yaricap));
// }
//     else
//         printf("DUR");
//     return 0;        
// }



/*10  gırılen n ve r degerlerı ıle kombınasyon hesaplayan program kodu*/
// int fak(int sayi){
//     int i,s=1;
//     for(i=1;i<=sayi;i++)
//         s*=i;
//     return s;
// }
// int kombinasyon(int n,int r){
//     int s;
//     s=fak(n)/(fak(r)*fak(n-r));
//     return s;
// }
// int main(){
//     int n,r,cevap;
//     printf("n ve r sayilarini giriniz:");
//     scanf("%d%d",&n,&r);
//     cevap=kombinasyon(n,r);
//     printf("kombinasyon:%3d",cevap);
//     return 0;
// }




/* 11  gırılen tam sayının basamakları toplamını bulan program kodu */  /* sayfa 202  8.soru*/
// int basamak(int sayi)
// {
//     int toplam;
//     toplam=sayi%10+(sayi/10)%10+sayi/100;
//     return toplam;
// }
// int main(){
//     int sayi, t;
//     printf("sayi:");
//     scanf("%d",&sayi);
//     t=basamak(sayi);
//     printf("basamak toplami:%d",t);
//     return 0;
// }



/* 12  kullanıcının belırledıgı katsayılar ıle olusturulan denklemın koklerını bulan program kodu*/    /* sayfa 202  9.soru*/
// void bul(int a,int b,int c){
//     double delta,x1,x2;
//     delta=b*b-4*a*c;
//     if (delta>0){
//         x1=(-b+sqrt(delta))/2*a;
//         x2=(-b-sqrt(delta))/2*a;
//         printf("2 kok vardir:\n x1=%5.2lf\n x2=%5.2lf",x1,x2);
//     }
//     else if (delta<0){
//         x1=(-b+sqrt(delta))/2*a;
//         x2=(-b-sqrt(delta))/2*a;
//         printf("2  kok vardir:\n x1=%5.2lf.%e\n x2= %5.2lf.%e",x1,x2);
//     }
//         else
//         {
//             x1=x2=-b/2*a;
//             printf("2  esit kok vardir: x1=%5.2lf ",x1);
//         }
// }
// int main(){
//     int a,b,c;
//     printf("a,b,c degerlerini giriniz:");
//     scanf("%d%d%d",&a,&b,&c);
//     bul(a,b,c);
//     return 0;
// }



/* 13 her islem icin ayrı bır fonksıyon yuruten hesap makınası yapımı*/        /* sayfa 203  10.soru*/

// int topla(int a, int b){
//     return a+b;
// }
// int carp(int a, int b){
//     return a*b;
// }
// int bol(int a, int b){
//     return a/b;
// }
// int cikar(int a, int b){
//     return a-b;
// }
// void  menu(){
//     printf("1. + TOPLA\n");
//     printf("2. * CARP\n");
//     printf("3. / BOL\n");
//     printf("4. - CIKART\n");
//     printf("5. DUR\n");
// }
// int main(){
//     int a,b,sonuc;
//     char secim;
//     menu();
//     printf("seciminiz:");
//     scanf("%c",&secim);
//     printf("iki sayi giriniz:");
//     scanf("%d%d",&a,&b);
//     if (secim=='+'){
//         sonuc=topla(a,b);
//         printf("%d+%d=%d",a,b,sonuc);
//     }
//     else if (secim=='*'){
//         sonuc=carp(a,b);
//         printf("%d.%d=%d",a,b,sonuc);
//     }
//     else if (secim=='/'){
//         sonuc=bol(a,b);
//         printf("%d/%d=%d",a,b,sonuc);
//     }
//     else if (secim=='-'){
//         sonuc=cikar(a,b);
//         printf("%d-%d=%d",a,b,sonuc);
//     }
//         else 
//             printf("PROGRAM KAPATIIYOR.........");
//     return 0;

// }



/* 14  kullanıcının gırdıh-gı n degerıne gore 3 ayrı fonksıyon donduren program kodu*/    /* sayfa 203  11.soru*/
// double f1(int n){
//     double toplam=0;
//     for(int i=1;i<=2*n+1;i+=2){
//         toplam+=1/i;
//     return toplam; 
//     }
// }
// int f2(int n){
//     int  top=0;
//     for( int i=2;i<=2*abs(n);i+=2){
//         top+=i;
//     return top;  
// }
// }
// int f3(int n){
//     int fak=1;
//     for (int i=1;i<=n;i++)
//         fak*=i;
//     return fak;  }
// int main(){
//     int n;
//     double f;
//     printf("sayi giriniz:");
//     scanf("%d",&n);

//     if (n>=30){
//         f=f1(n);
//         printf("SONUC=%.2f",f);
//     }
//     else if(n>10 && n<30){
//         f=f2(n);
//         printf("SONUC=%.2f",f);
//     }
//     else if (n>0 && n<=10){
//         f=f3(n);
//         printf("SONUC=%.2f",f);
//     }
        
    
//     return 0;
// }


/* 15  1 den 100 kadar olan asal sayilari basrıran program kodu */    /* sayfa 203  12.soru*/
// int  asal(int sayi){
//         if (sayi<2){
//             return 0;
//         }
//         for(int i=2;i<sayi/2;i++){
//             if (sayi%i==0){
//             return 0 ;}
            
// }
//         return 1;
// }
// int main(){
//     printf("1 den 100'e kadar olan asal sayilar:\n");
//     for (int sayi=1;sayi<=100;sayi++){
//         if(asal(sayi)){
//             printf("%d\n",sayi);
// }
// }
//     return 0;
// }



/*16  kulanıcıcıdan 4 basamaklı sayı alan ve ab+bc nın karesı sayıya esıt ı degılmı bulan program kodu*/     /* sayfa 203  13.soru*/
// int ilk(int n){
//     return n/100;
// }
// int son(int n){
//     return n%100;
// }
// int main(){
//     int n,a,b;
//     printf("4 basamakli sayi giriniz:");
//     scanf("%d",&n);
//     a=ilk(n);
//     b=son(n);
//     if(pow(a+b,2)==n){
//         printf("%d kurala uyuyor.",n);
//     }
//     else{
//         printf("%d kurala uymuyor!",n);
//     }
//     return 0;
// }

/* 17 saniyeyi saat dk ve sn donusturen program kodu*/
// void hesapla(int sure ,int *saat,int *dakika,int *saniye){
//     *saat=sure/3600;
//     *dakika=(sure%3600)/60;
//     *saniye=sure%60;
// }
// int main(){
//     int sure,saat,dakika,saniye;
//     printf("yolculugunuz kac saniye surucek:");
//     scanf("%d",&sure);
//     hesapla(sure,&saat,&dakika,&saniye);
//     printf("yolculuk %d saat %d dakika %d saniye surecektir.",saat,dakika,saniye);
//     return 0;
// }




/* 18 3 basamkalı sayıynın basamak degerlerını yazdıran program kodu */
// int basamak( int sayi,int *yuzler,int *onlar,int *birler){
//     *yuzler=sayi/100;
//     *onlar=(sayi%100)/10;
//     *birler=sayi%10;
// }
// int main(){
//     int sayi,yuzler,onlar,birler;
//     printf("3 basamakli sayi giriniz:");
//     scanf("%d",&sayi);
//     basamak(sayi,&yuzler,&onlar,&birler);
//     printf("yuzler:%d\nonlar:%d\nbirler:%d\n",yuzler,onlar,birler);
//     return 0;
// }



/*19  dıkdortgenın en ve boy bılgısısnı alaral alan ve cevre hesaplayan program kodu*/
// int hesapla(int en,int boy,int *cevre,int *alan){
//     *cevre=(en+boy)*2;
//     *alan=en*boy;
// }
// int main(){
//     int en,boy,cevre,alan;
//     printf("dikdortgenin en ve boyunu giriniz:");
//     scanf("%d%d",&en,&boy);
//     hesapla(en,boy,&cevre,&alan);
//     printf("dikdortgenin cevresi:%d\ndikdortgenin alani:%d",cevre,alan);
//     return 0;
// }




/*20  girilen ıkı sayının toplamını carpımını farkını ve bolumunu bulan program kodu*/        
// int islemlerihesapla(int sayi1,int sayi2,int *toplam,int *carpim,int *fark,float *bolum){
//     *toplam=sayi1+sayi2;
//     *carpim=sayi1*sayi2;
//     *fark=sayi1-sayi2;
//     *bolum=sayi1/sayi2;
// }
// int main(){
//     int sayi1,sayi2;
//     int toplam,carpim,fark;
//     float bolum;
//     printf("iki sayi giriniz:");
//     scanf("%d%d",&sayi1,&sayi2);
//     islemlerihesapla(sayi1,sayi2,&toplam,&carpim,&fark,&bolum);
//     printf("%d+%d=%d\n",sayi1,sayi2,toplam);
//     printf("%d.%d=%d\n",sayi1,sayi2,carpim);
//     printf("%d-%d=%d\n",sayi1,sayi2,fark);
//     printf("%d/%d=%f",sayi1,sayi2,bolum);
//     return 0;
// }



/* 21 kulanıcının gırdıgı 10 sayıdan en butuk ıkı sayıyı bulan program kodu*/
// int enbuyuk_iki_sayi(int dizi[],int uzunluk,int *enbuyuk1,int *enbuyuk2){
//     *enbuyuk1=*enbuyuk2=dizi[0];
//     for(int i=1;i<uzunluk;i++){
//         if(dizi[i]> *enbuyuk1){
//             *enbuyuk2= *enbuyuk1;
//             *enbuyuk1=dizi[i];
//         }
//         else if (dizi[i]> *enbuyuk2 && dizi[i]!= *enbuyuk1){
//             *enbuyuk2=dizi[i];
//         }
//     }
// }
// int main(){
//     int sayilar[10];
//     int enbuyuk1,enbuyuk2;
//     printf("10 tane sayi giriniz:");
//     for(int i=0;i<10;i++){
//         scanf("%d",&sayilar[i]);
//     }
//     enbuyuk_iki_sayi(sayilar,10,&enbuyuk1,&enbuyuk2);
//     printf("en buyuk sayilar :%d %d\n",enbuyuk1,enbuyuk2);
//     return 0;
// }


/*22  kullanıcıdan alınan bır pozıtıf bır reel sayı degerlerı ıle bır serı hesaplayan program kodu*/
// float seri(int n,float x){
//     float toplam=0;
//     for(int i=1;i<=2*n-1;i+=2){
//         toplam+=i/pow(x,i+1);
//     }
//     return toplam;
// }
// int main(){
//     int n;
//     float x;
//     printf("pozitif sayi giriniz:");
//     scanf("%d",&n);
//     printf("reel sayi giriniz:");
//     scanf("%f",&x);
//     seri(n,x);
//     printf("seri=%6.2f",seri(n,x));
//     return 0;
// }






// /* 23 fahrenheit ve celsius degerleri arasında donusum yapan program kodu*/
// int celsius(int sicaklik){
//     return (sicaklik*9/5.0+32);
// }
// int fahrenheit(int sicaklik){
//     return (sicaklik-32)*5.0/9;
// }
// int main(){
//     int sicaklik;
//     char secim;
//     printf("fahrenheit----->celsius icin C/c\n");
//     printf("celsius------>fahrenheit icin F/f\n");
//     printf("seciminizi giriniz:");
//     scanf("%c",&secim);
//     if(secim=='c'|| secim=='C'){
//         printf("fahrenheit degerini giriniz:");
//         scanf("%d",&sicaklik);
//         printf("celsius degeri:%d",celsius(sicaklik));
//     }
//     else if(secim=='f' || secim=='F'){
//         printf("celsius degerini giriniz:");
//         scanf("%d",&sicaklik);
//         printf(" fahrenheit degeri:%d", fahrenheit(sicaklik));
//     }
//     else
//         printf("yanlis secim yaptiniz");
//     return 0;
// }




// /* 24  girilen sayinin kac masamakli oldugunu bulan program kodu*/
// int basamak_bul(int sayi){
//     int sayac=0;
//     while(sayi>0){
//         sayac++;
//         sayi/=10;
//         }
//     return sayac;
// }
// int main(){
//     int sayi;
//     printf("pozitif sayi giriniz:");
//     scanf("%d",&sayi);
//     while(sayi>0){
//         printf("basamak sayisi:%d\n",basamak_bul(sayi));
//         printf("pozitif sayi giriniz:");
//         scanf("%d",&sayi);
//     }
//     return 0;
// }

