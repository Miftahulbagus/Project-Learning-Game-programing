#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    string kata;
    int jumlahhrf;
    srand(static_cast<unsigned int>(time(0)));

    cout<<"Masukkan kata : ";
    cin>>kata;
    jumlahhrf=kata.size();
    cout<<"Jumlah huruf dari "<<kata<<"adalah : "<<jumlahhrf<<endl;
    string ngacak=kata;
    for(int i=0;i<jumlahhrf;i++)
    {
        int kata1=(rand()% jumlahhrf);
        int kata2=(rand()% jumlahhrf);
        char temp=ngacak[kata1];
        ngacak[kata1]=ngacak[kata2];
        ngacak[kata2]=temp;
    }
    cout<<"Kata Acak : "<<ngacak<< endl;
    return 0;
}
