#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum);

int main() {
    int maxnum = 40;
    int arvaustenMaara = game(maxnum);
    cout << "Arvasit oikein " << arvaustenMaara << " yrityksella." << endl;
    return 0;
}


int game(int maxnum) {
    srand(time(0));
    int oikea = rand() % maxnum + 1;
    int arvaus = 0;
    int laskuri = 0;

    while (arvaus != oikea) {
        cout << "Arvaa luku (1-" << maxnum << "): ";
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

