#include <iostream>
#include <math.h>
using namespace std;
 int main ()
 {
     float a;
     float b;
     float c;
     cout << "Porgram liczacy pierwiastek rownania kwadratowego" << endl;
     cout << "Podaj a" << endl;
     cin >>  a;
     if (a == 0)
     {
         cout << "Parametr 'a' musi byc rozny od 0" << endl;
         cout << "Ponownie podaj parametr a" << endl;
         cin >> a;
     }
     cout << "Podaj b" << endl;
     cin >>  b;
     cout << "Podaj c" << endl;
     cin >>  c;
     float delta = (b*b)-4*a*c;
     if (delta == 0)
     {
         float x1 = -b/2*a;
         cout <<  x1 << endl;
     }
     else if (delta < 0)
     {
         cout << "Funkcja nie posiada rozwiazan" << endl;
     }
     else if (delta > 0)
     {
         float x2= -b-sqrt(delta)/2*a;
         float x3= -b+sqrt(delta)/2*a;
         cout <<  x2 << endl;
         cout <<  x3 << endl;
     }
     return 0;
 }
//
// Created by jozwi on 21.03.2020.
//

