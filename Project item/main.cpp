#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama_item;
    string item_sebelum;
    string item_terkuat;
    string item_terlemah;

    char ulang = 'y';
    float stat=0;
    bool first=true;
    float stat_terkuat;
    float stat_terlemah;



    loop:
    cout << "Masukan Item: " ;
    cin >> nama_item;
    cout << "Masukan Status: " ;
    cin >> stat;
    cout << "Item Anda adalah : " << nama_item << endl;
    cout << "Status Anda adalah : " << stat << endl;

    if(first == true)
    {
        item_sebelum = "Kosong";
        item_terkuat = nama_item;
        item_terlemah = nama_item;
        stat_terkuat = stat;
        stat_terlemah = stat;
    }
    else
    {
        if(stat >= stat_terkuat) {
        stat_terkuat = stat;
        item_terkuat = nama_item;
    }
    else
    {
        if(stat <= stat_terlemah)
         {
            stat_terlemah = stat;
            item_terlemah = nama_item;
         }
    }
    }

    stat_terkuat = stat;
    first = false;
    cout <<"Item terkuat anda adalah :"<< item_terkuat << endl;
    cout <<"Item terlemah anda adalah :"<< item_terlemah << endl;
    cout <<"Input lagi? Y/N " << endl;
    cin >>ulang;
    if(ulang=='y')
    {
        goto loop;
    }else
    {

    }




    return 0;
}
