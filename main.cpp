// 1. make an array, which contains: netto price, vat, name of product
 // use loop 'for' to print

#include <iostream>

using namespace std;


 double brutto [5]{36000 ,55000 ,13900 ,100000 , 120000 };
 int vat [5] {23 ,23 ,23 ,23 ,23 };
 string model [5] {"Rapid ","Mondeo ","Fabia ", "Octavia ", "Superb "};


 void Informations (string car_model, double price_brutto, double tax_vat);

 int i;

 int main()

{
    for (i=0;i<5;i++)

        {
        Informations (model[i],brutto[i],vat[i]);
        }

    return 0;
}


 void Informations (string car_model, double price_brutto, double tax_vat)

 {
     cout << "-----------------------\n";
     cout << "Model: " << car_model << endl;
     cout << "Cena brutto: " << price_brutto<< " zl"<< endl;
     cout << "Podatek Vat: " <<tax_vat<< " %"<< endl;
     cout << "Cena netto:  "<<price_brutto/1.23 << endl;

 }

