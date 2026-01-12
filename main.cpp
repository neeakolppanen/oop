#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int game();

int main() {
    int arvaustenMaara = game();
    cout << "Arvasit oikein " << arvaustenMaara << " yrityksella." << endl;
    return 0;
}

int game() {
    srand(time(0));
    int oikea = rand() % 20 + 1;
    int arvaus = 0;
    int laskuri = 0;

    while (arvaus != oikea) {
        cout << "Arvaa luku (1-20): ";
        cin >> arvaus;
        laskuri++;

        if (arvaus < oikea) {
            cout << "Liian pieni!" << endl;
        } else if (arvaus > oikea) {
            cout << "Liian suuri!" << endl;
        } else {
            cout << "Oikein!" << endl;
        }
    }

    return laskuri;
}

