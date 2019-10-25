#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(int argc, const char * argv[]) {
	vector<vector<string>> senjata{ { "Boomerang","5" },{ "Tombak", "10" },{ "Laser","15" } ,{ "Bazoka","20" }, {"Nuklir","25"} };
	vector<vector<string>> inventory;
	vector<vector<string>>::iterator iterator1;
	vector<string>::iterator iterator2;

	int MaxInventory = 0;
	int MaxItem = senjata.size();
	int pilih = 0;
    int SenjataTerpilih = 0;
	int JmlInventory = 0;
	int hapus = 0;
	char ulang = 'y' || 'Y';

	cout << "Senjata Tersedia Sejumlah : " << MaxItem << endl;
	cout << "Ingin menggunakan berapa senjata : ";
	cin >> MaxInventory;
	cout << endl;

	while (ulang == 'y' || 'Y') {
		hapus = 0;
        cout << "Masukkan pilihan Anda : " << endl;
        cout << "1. Tambah item" << endl;
		cout << "2. Hapus item" << endl;
        cout << "3. Tampilkan inventory " << endl;
		cout << "Pilih : ";
		cin >> pilih;

		switch (pilih) {
		case 1:
		{
		    if (JmlInventory >= MaxInventory) {
				cout << "Inventory FULL " << endl;
			}
			else {
				srand((unsigned)time(0));
				SenjataTerpilih = (rand() %MaxItem);
				cout << "Anda mendapatkan sebuah Senjata: " << senjata[SenjataTerpilih][0] << "Energy : " << senjata[SenjataTerpilih][1] << endl;
				inventory.push_back(vector<string>({ senjata[SenjataTerpilih][0] }));
				inventory[JmlInventory].push_back(senjata[SenjataTerpilih][1]);
				JmlInventory++;
				cout << "Jumlah senjata anda sekarang adalah : " << JmlInventory << endl;
			}
			break;
		}

		case 2:
		{
			if (JmlInventory <= 0) {
				cout << "Anda Belum Memiliki Senjata" << endl;
			}
			else {
				cout << "Hapus Senjata ke  : ";
				cin >> hapus;
				if (hapus > JmlInventory) {
					cout << "Tidak ada senjata yang bisa dihapus" << endl;
				}
				else {
					inventory.erase(inventory.begin() + (hapus - 1));
					JmlInventory--;
					cout << "Total senjata anda : " << JmlInventory << endl;
				}
			}
			break;
		}

		case 3:
		{
			if (inventory.empty()) {
				cout << "Anda belum memiliki senjata" << endl;
			}
			else {
				cout << "Inventory Anda: " << endl;
				for (iterator1 = inventory.begin(); iterator1 != inventory.end();iterator1++) {
					for (iterator2 = iterator1->begin(); iterator2 != iterator1->end(); iterator2++) {
						cout << *iterator2 << " ";
					}
					cout << endl;
				}
			}

			break;
		}
		}
        cout <<""<<endl;
		cout << "Masih ingin menggunakan menu inventory Y/N ";
		cin >> ulang;

	}
	return 0;
}
