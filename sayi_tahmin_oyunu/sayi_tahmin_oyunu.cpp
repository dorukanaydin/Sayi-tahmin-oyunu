#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
 
using namespace std;
//Bilgisayarın belirlediği random sayıyı 10 veya daha az deneme ile tahmin etme oyunu.

int main()
{
    int sayi;
    int rsayi=0;
    char secim,e,h;
    int sayac=1;

    srand(time(NULL));
    rsayi = rand() % 1000 + 1;
    
    
    while (1)
    {
       
       cout<< sayac << ". hak : 1-1000 arasi bir sayi giriniz: " ; 
       cin >> sayi;
       
       
       if (sayi == rsayi && sayac <= 10 )
       {
           cout << "Tebrikler sayiyi 10 tahminden daha erken bildiniz." << endl;
           cout << "Yeniden oynamak ister misiniz? (e:evet h:hayir) : " ;
           cin >> secim;
           
           secim = getch();

           if (secim == 'e')
           {
               return main();
           }
           else
           {
               exit(0);
           }
            
       }

       if (sayi < rsayi && sayac <= 10)
       {
           cout << "Girdiginiz sayi asil sayidan kucuktur." << endl;
       }
       
       if (sayi > rsayi && sayac <= 10)
       {
           cout << "Girdiginiz sayi asil sayidan buyuktur." << endl;
       }
       sayac++;
       if (sayac > 10)
       {
           cout << "10 tahmin hakkiniz doldu.Tekrar deneyiniz." << endl;
           cout << "Yeniden oynamak ister misiniz? e:evet h:hayir ";
           cin >> secim;
           secim = getch();

           if (secim == 'e')
           {
               return main();
           }
           else
           {
               exit(0);
           }
       }
       
    }
    
    

}