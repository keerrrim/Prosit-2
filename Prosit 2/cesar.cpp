#include "cesar.h"

void cesar::cryptageCesar(string d)
{
    cout << "Cryptage en cours" << endl;
    this->donneesChiffrees = d; 
    int i = 0;
    while (donneesChiffrees[i] != '\0')
    {
        if (donneesChiffrees[i] >= 'A' && donneesChiffrees[i] <= 'Z') {
            char a = donneesChiffrees[i] - 'A';
            a += 4;
            a = a % 26;
            donneesChiffrees[i] = a + 'A';
        }
        if (donneesChiffrees[i] >= 'a' && donneesChiffrees[i] <= 'z') {
            char a = donneesChiffrees[i] - 'a';
            a += 4;
            a = a % 26;
            donneesChiffrees[i] = a + 'a';
        }
        i++;
    }
    cout << "donnees cryptees avec succes." << endl;
}

void cesar::decryptageCesar(string d)
{
    cout << "Decryptage en cours" << endl;
    this->donneesChiffrees = d;
 
    int i = 0;
    while (d[i] != '\0')

        cout << "decryptage efféctué avec succes" << endl;
}

