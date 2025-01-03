#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void SetColor(int textColor)
{
	cout << "\033[" << textColor << "m";
}
void ResetC() { cout << "\033[0m"; }

int main() {
	double angka1, angka2, hasil;
	char admin,pilihan;
	
	do {
		SetColor(94);
		cout << "-------------------------------------------------------------------\n";
		ResetC();
		cout << "selamat datang di kalkulator c++ \n";
		SetColor(36);
		cout << "-------------------------------------------------------------------\n";
		ResetC();
		cout << "masukan jummlah bilangan yang anda inginkan misal (2323+423423): \n";
		SetColor(96);
		cout << "-------------------------------------------------------------------\n";
		SetColor(31);
		cout << "WARNING : JANGAN MEMASUKAN INPUT HURUF AGAR TIDAK ERROR \n";
		ResetC();
		cout << "-------------------------------------------------------------------\n";
		cin >> angka1 >> admin >> angka2;

		switch (admin) {
			//ini adalah bagian tambah
		case '+':
			hasil = angka1 + angka2;
			cout << "Hasilnya Adalah " << hasil << endl;
			break;
			//ini adalah bagian kurang
		case '-':
			hasil = angka1 - angka2;
			cout << "Hasilnya Adalah " << hasil << endl;
			break;
			//ini adalah bagian kali
		case 'x':
			hasil = angka1 * angka2;
			cout << "Hasilnya Adalah " << hasil << endl;
			break;
			//ini adalah bagian bagi
		case '/':
			if (angka2 != 0) {
				hasil = angka1 / angka2;
				cout << "Hasilnya Adalah " << hasil << endl;
			} else {
				SetColor(31);
				cout << "Ga Ada Pembagian dengan 0" << endl;
				ResetC();
				cout << "Coba Lagi!" << endl;
			}
			break;
			//ini adalah bagian modulus
		case '%':
			if (static_cast<int>(angka1) == angka1 && static_cast<int>(angka2) == angka2) 
			{
				if (static_cast<int>(angka2) != 0) {
					hasil = static_cast<int>(angka1) % static_cast<int>(angka2);
					cout << "Hasilnya Adalah " << hasil << endl;
				}
				else {
					SetColor(31);
					cout << "Operasi Tidak Normal" << endl;
					ResetC();
					cout << "Coba Lagi!" << endl;
				}
			}
			break;
		}
		ResetC();
		cout << "apakah anda ingin operasi tetap dilanjutkan (y/t?)\n";
		cin >> pilihan;
		cout << endl;
	} 
	while (pilihan == 'y');
	cout << "Terima kasih telah menggunakan kalkulator ini!" << endl;
	return 0;
}