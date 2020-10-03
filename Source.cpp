#include <iostream>
#include <conio.h>
#include <cstdlib>

/* Created by Rizky Khapidsyah */

using namespace std;

void input_array(int bil[], int banyak_data) {
	int i;

	for (i = 0; i < banyak_data; i++)
	{
		cout << "Nilai Bil[" << i + 1 << "]  = ";
		cin >> bil[i];
	}
}

int jumlah_elemen(int bil[], int banyak_data) {
	int i, jumlah = 0;

	for (i = 0; i < banyak_data; i++)
	{
		jumlah = jumlah + bil[i];
	}

	return jumlah;
}

int main() {
	int bil[100];
	int banyak_data, jumlah;

	cout << "Masukkan Banyak Elemen Yang Diinginkan  : ";
	cin >> banyak_data;

	cout << endl;

	input_array(bil, banyak_data);
	jumlah = jumlah_elemen(bil, banyak_data);

	cout << endl;
	cout << "Hasil Penjumlahan Elemen  = " << jumlah << endl << endl;

	_getch();
	return 0;
}