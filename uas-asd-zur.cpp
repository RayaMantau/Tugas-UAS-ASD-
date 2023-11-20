#include <iostream>
#include <string>

using namespace std;


const int maximal_produk = 50;

struct Produk {
    string nama,deskripsi;
    int stok;
    long harga;
};


Produk produk[maximal_produk];


int banyakproduk = 0;


void tmbhProduk() {
    if (banyakproduk < maximal_produk) {
        cout << "Masukkan nama produk: ";
        cin.ignore();
        getline(cin,produk[banyakproduk].nama);
        cout << "Masukkan deskripsi produk : ";
        getline(cin,produk[banyakproduk].deskripsi);
        cout << "Masukkan harga produk: ";
        cin >> produk[banyakproduk].harga;
        cout << "Masukkan banyak barang: ";
        cin >> produk[banyakproduk].stok;
        banyakproduk++;
        cout << "Produk berhasil ditambahkan " << endl;
    } else {
        cout << "Stok sudah ful tidak bisa ditambah." << endl;
    }
}

void ubahstok() {
    string nmp;
    if(banyakproduk == 0){
            cout << "Belum ada produk yang ditambahkan!" << endl;
    }else if(banyakproduk > 0){
        cout << "Masukkan nama produk yang ingin di update: ";

        cin >> nmp;

        for (int i = 0; i < banyakproduk; i++) {
            if (produk[i].nama == nmp) {
                int banyak;
                cout << "Ubah Jumlah Barang : ";
                cin >> banyak;
                produk[i].stok += banyak;
                cout << "Stok sudah diubah" << endl;
                return;
            }else{
                cout << "Produk tidak ditemukan. " << endl;
            }
        }
    }
}

void lihatstok() {
    if (banyakproduk > 0) {
        cout << endl;
        cout << "Stok barang: " << endl;
        for (int i = 0; i < banyakproduk; i++) {
            cout << "--------------------------" << endl;
            cout << "Nama produk : " << produk[i].nama << endl;
            cout << "Deskripsi Produk : " << produk[i].deskripsi << endl;
            cout << "Harga : Rp. " << produk[i].harga << endl;
            cout << "Banyak : " << produk[i].stok << endl;
            cout << "-------------------------" << endl;
        }
    } else {
        cout << "tidak ada produk di dalam stok." << endl;
    }
}

int main() {
    int pilih;
    string pass;
    cout << "Masukkan Password Untuk Menjalankan Program : ";
    cin >> pass;
    while(pass != "24248"){
            cout << "Password Salah!!" << endl;
    cout << "Masukkan lagi : " << endl;
    cin >> pass;}
    while (true) {
        cout << "\nManajemen Toko ZUR " << endl;
        cout << "1. Tambah Produk " << endl;
        cout << "2. Ubah Stok Produk " << endl;
        cout << "3. Lihat stok toko " << endl;
        cout << "4. Keluar " << endl;
        cout << "Pilihan: ";
        cin >> pilih;

        switch (pilih) {
            case 1:
                tmbhProduk();
                break;
            case 2:
                ubahstok();
                break;
            case 3:
                lihatstok();
                break;
            case 4:
                cout << "Program Dihentikan " << endl;
                return 0;
            default:
                cout << "Anda salah menginput, pilih lagi " << endl;
            }
        }





    return 0;
}


