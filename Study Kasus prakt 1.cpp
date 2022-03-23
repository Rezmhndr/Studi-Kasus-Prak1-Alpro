#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int harga1, harga2, total, diskon, goreng, bakar, afterdisc, bayar, angsul; 	// deklarasi variable type data int
	char p; 																		// deklarasi type data char
	menu: 																			// kode blok menu
		
	cout << "============================";
	cout << "Kedai Ayam Gaskurrr";
	cout << "Daftar menu: " << endl;
	cout << "============================";
	cout << "1. Ayam Bakar: Rp 21.000 " << endl;
	cout << "2. Ayam Goreng: Rp 17.000 " << endl;
	cout << "Berapa potong ayam goreng yang akan anda pesan? "; cin >> goreng;		// input jumlah pesanan
	cout << "Berapa potong ayam bakar yang akan anda pesan? "; cin >> bakar;
	harga1 = 17000 * goreng;														// rumus masing masing total menu
	harga2 = 21000 * bakar;
	
	cout << "apakah anda ingin pesanan lagi? (Y/N)" << endl;
	cin >> p; 																		//bBagian untuk pernyataan mengulang input
	
	if (p == 'Y' || p == 'y'){														// Kondisi inputan karakter
		system ("cls");
		goto menu;
	}
	else{
		system("cls");
	}
	
	total = harga1 + harga2;														// rumus untuk menjumlah kedua harga
	if (total >= 45000){															// kondisi jika total melebihi persyaratan yaitu 45000
		diskon = total * 10/100;
		cout << "Total anda Rp." << total << " Melebihi Rp 45.000, anda berhak mendapat potongan 10%" << endl;
		afterdisc = total - diskon;
		cout << "Biaya yang anda harus bayar adalah: " << afterdisc << endl;
		cout << "Masukkan jumlah: "; cin >> bayar;
		if (bayar == afterdisc){ 													// If berfungsi untuk jika uang yang dimasukan pas
			cout << "Uang anda Pas!"<<endl;
		cout<<"==========================="<<endl;
		cout<<"=    STRUK PEMBAYARAN    ="<<endl;
		cout<<"==========================="<<endl;
		cout<<"Ayam Goreng : "<<goreng<<" - "<<harga1<<endl;
		cout<<"Ayam Bakar  : "<<bakar<< " - "<<harga2<<endl;
		cout<<"Total       : "<<total<<endl;
		cout<<"Diskon      : "<<diskon<<endl;
		cout<<"Pembayaran  : "<<afterdisc<<endl;
		cout<<"Dibayar     : "<<bayar<<endl;
		
		}
		else{																		// else jika uang yang dimasukkan tidak pas / memiliki kembalian
			angsul=bayar-afterdisc;
			cout << "Kembalian anda: " << angsul << endl;
			cout<<"==========================="<<endl;
		cout<<"=    STRUK PEMBAYARAN    ="<<endl;
		cout<<"==========================="<<endl;
		cout<<"Ayam Goreng : "<<goreng<<" - "<<harga1<<endl;
		cout<<"Ayam Bakar  : "<<bakar<< " - "<<harga2<<endl;
		cout<<"Total       : "<<total<<endl;
		cout<<"Diskon      : "<<diskon<<endl;
		cout<<"Dibayar     : "<<bayar<<endl;
		cout<<"Kembalian   : "<<angsul<<endl;
		cout<<"==========================="<<endl;
		}
	}
	else{																			// else jika total tidak memenuhi syarat yaitu 45000
		cout << "Total anda membeli adalah Rp." << total << endl;
		cout << "Masukkan jumlah: "; cin >> bayar;
		if (bayar == total){														// If berfungsi untuk jika uang yang dimasukan pas
			cout << "Uang anda Pas!"<<endl;
		cout<<"==========================="<<endl;
		cout<<"=    STRUK PEMBAYARAN    ="<<endl;
		cout<<"==========================="<<endl;
		cout<<"Ayam Goreng : "<<goreng<<" - "<<harga1<<endl;
		cout<<"Ayam Bakar  : "<<bakar<< " - "<<harga2<<endl;
		cout<<"Total       : "<<total<<endl;
		cout<<"Diskon      : "<<diskon<<endl;
		cout<<"Dibayar     : "<<bayar<<endl;
		cout<<"==========================="<<endl;
		}
		else{                       												// else jika uang yang dimasukkan tidak pas / memiliki kembalian
			angsul=bayar-total;
			cout << "Kembalian anda: " << angsul << endl;
		cout<<"==========================="<<endl;
		cout<<"=    STRUK PEMBAYARAN    ="<<endl;
		cout<<"==========================="<<endl;
		cout<<"Ayam Goreng : "<<goreng<<" - "<<harga1<<endl;
		cout<<"Ayam Bakar  : "<<bakar<< " - "<<harga2<<endl;
		cout<<"Total       : "<<total<<endl;
		cout<<"Diskon      : "<<diskon<<endl;
		cout<<"Dibayar     : "<<bayar<<endl;
		cout<<"Kembalian   : "<<angsul<<endl;
		cout<<"==========================="<<endl;
		}
	}
	
	
	return 0;
}
