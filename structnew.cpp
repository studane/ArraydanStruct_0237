#include <iostream>
using namespace std;
struct detailAlamat
{
    string desa;
    string kota;
};
struct Orang 
{
    string nama;
    detailAlamat alamat;
    int umur;
};

int main () {
    Orang mhs;
    // Mengisi data
    cout << "Mengisi Data" << endl;
    cout << "Nama : " ;
    cin >> mhs.nama;
    cout << "desa : " ;
    cin >> mhs.alamat.desa;
    cout << "kota : " ;
    cin >> mhs.alamat.kota;
    cout << "Umur : " ;
    cin >> mhs.umur;
    cout << endl;

}