#include <iostream>
using namespace std;
void kukulka(int ile_kuku);

void kukulka(int ile)
{
    for (int i=0; i < ile; i++){
        cout << endl << i+1 << " x Ku-ku ! " << endl;
    }
}

int main(int argc, char** argv) {
    cout << "Program prezentuje skladnie definicje funkcji\n";
    int ile_kuku;
    cout << "Podaj liczbe kukniec" << endl;
    cin >> ile_kuku;
    kukulka (ile_kuku);
    cout << endl;
    return 0;
//
// Created by jozwi on 21.03.2020.
//

