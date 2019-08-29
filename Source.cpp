#include <iostream>
#include <conio.h>

#define GarisEQ "="
#define GarisMIN "-"


using namespace std;

int i;

void CetakJudul();
void CetakSubjudulMerk();
void CetakGaris1();
void CetakGaris2();
void CetakMenuMerk();
void CetakSubjudulUkuran();
void CetakMenuUkuran();

int main() 
{
	char pilihanMerk, beliLgi, kategoriUkuran[20], ukuran, merk[20];
	int ttlBayar, Kembalian, jmlPembelian, hargaProduk, TotalHarga;

atas:
	
	CetakJudul(); cout << endl;
	CetakSubjudulMerk(); cout << endl;
	CetakMenuMerk(); cout << endl;

	CetakGaris2(); cout << endl;
	cout << "Merek Air Kemasan [1-4] : "; cin >> pilihanMerk;
	
	CetakSubjudulUkuran();
	CetakMenuUkuran();

	CetakGaris2();
	cout << "Ukuran Air Kemasan [1-6] : "; cin >> ukuran;
	cout << "Jumlah Pembelian         : "; cin >> jmlPembelian;
	CetakGaris2();

	switch (pilihanMerk)
	{
	case '1':
		strcpy_s(merk, "Aqua ");
		break;
	case '2':
		strcpy_s(merk, "Club ");
		break;
	case '3':
		strcpy_s(merk, "Vit ");
		break;
	case '4':
		strcpy_s(merk, "Oasis ");
		break;
	default:
		strcpy_s(merk, "Input Anda Salah!");
		break;
	}

	switch (ukuran)
	{
	case '1':
		strcpy_s(kategoriUkuran, "19 Liter");
		hargaProduk = 55000;
		break;
	case '2':
		strcpy_s(kategoriUkuran, "1500 ml");
		hargaProduk = 7000;
		break;
	case '3':
		strcpy_s(kategoriUkuran, "600 ml");
		hargaProduk = 4500;
		break;
	case '4':
		strcpy_s(kategoriUkuran, "380 ml");
		hargaProduk = 3500;
		break;
	case '5':
		strcpy_s(kategoriUkuran, "330 ml");
		hargaProduk = 2000;
	case '6':
		strcpy_s(kategoriUkuran, "240 ml");
		hargaProduk = 500;
		break;
	default:
		strcpy_s(kategoriUkuran, "Input Angka Salah");
		break;
	}

	TotalHarga = hargaProduk * jmlPembelian;

	cout << "Merek Air Kemasan    : " << merk << endl;
	cout << "Ukuran Air Kemasan   : " << kategoriUkuran << endl;
	cout << "Harga Satuan         : Rp. " << hargaProduk << endl;
	cout << "Jumlah Pembelian     : " << jmlPembelian << endl;
	cout << "Total Harga          : Rp. " << TotalHarga << endl;
	CetakGaris2();
	cout << "Total Bayar          : Rp. "; cin >> ttlBayar;

	Kembalian = ttlBayar - TotalHarga;

	cout << "Kembalian            : Rp. " << Kembalian << endl << endl;
	CetakGaris1();
	cout << "Beli kembali produk? [Y/T] : "; cin >> beliLgi; cout << endl;

	if (beliLgi == 'Y' || beliLgi == 'y')
	{
		goto atas;
	}
	else {
		cout << "Terima Kasih Atas Pembelian Produk Kami";
		cout << endl;
	}

	_getch();
	return 0;
}

void CetakJudul()

{
	CetakGaris1();
	cout << "Penjualan Air Minum Kemasan";
	CetakGaris1();
}

void CetakSubjudulMerk()
{
	CetakGaris2;
	cout << "Pilihan Merk:";
	CetakGaris2;
}

void CetakSubjudulUkuran()
{
	CetakGaris2;
	cout << "Ukuran : ";
	CetakGaris2;
}

void CetakGaris1()
{
	for (i = 0; i < 52; i++)
	{
		cout << GarisEQ;
	}
	
	cout << endl;
}

void CetakGaris2()
{
	for (i = 0; i < 52; i++)
	{
		cout << GarisMIN;
	}

	cout << endl;
}

void CetakMenuMerk()
{
	cout << "1. Aqua" << endl;
	cout << "2. Club" << endl;
	cout << "3. Vit" << endl;
	cout << "4. Oasis" << endl;
}

void CetakMenuUkuran()
{
	cout << "1. 19 Liter" << endl;
	cout << "2. 1500 ml" << endl;
	cout << "3. 600 ml" << endl;
	cout << "4. 380 ml" << endl;
	cout << "5. 330 ml" << endl;
	cout << "6. 240 ml" << endl;
}