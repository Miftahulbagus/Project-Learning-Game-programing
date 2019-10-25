#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main()
{
    int maks_angka=0;
    int nyawa=5;
    int kunci=0;
    int tebakan=0;
    char ulang ='y';

    loop:
    cout << "Masukan Nilai (10-100)  : " ;
    cin >> maks_angka;
    if(maks_angka>100)
    {
        cout<<"Angka Terlalu besar Boss!!"<< endl;
        goto loop;
    }
    else if(maks_angka<10)
    {
        cout<<"Angka Terlalu kecil Boss!!"<< endl;
        goto loop;
    }

    cout << "Tebak nilai nya antara 0 sampai "<< maks_angka <<endl;
    srand((unsigned)time(0));
    kunci = (rand()%maks_angka)+1;

    cout << "Cheat anda adalah: "<< kunci<< endl;
    if(nyawa > 0 && tebakan != kunci) {
            loop2:
            cout << "\nMasukkan tebakan Anda : ";
            cin >> tebakan;
            if (tebakan == kunci) {
                cout << "Tebakan Anda benar.\n";
                cout << "Ingin Bermain lagi?";
                cin >> ulang;
                if(ulang=='y')
                {
                    goto loop;
                }
                else
                {

                }

            } else {
                nyawa--;
                if (tebakan > kunci) {
                    cout << "Tebakan Anda terlalu besar.\n";
                } else if (tebakan < kunci) {
                    cout << "Tebakan Anda terlalu kecil.\n";
                }
                cout << "Tebakan Anda salah, nyawa : " << nyawa << endl;
                goto loop2;
                if (nyawa == 0) {
                    cout << "Game over." << endl;
                }
            }
        }

    return 0;
}
