#include <iostream>
using namespace std;

int arr[20];                  // Membuat array dengan panjang data 20
int n;                        // Membuat variabel inputan n

void input() {                // Precedure input
    while (true)
    {
        cout << "Masukan Juamlah Data pada Array : "; // Membuat Inputan jumlah element Arrray
        cin >> n;                                     // Memangggil variabel inputan

        if (n <= 20) {                                // Membuat kondisi n tidak lebih dari 20
            break;
        }
        else
        {
            cout << "\nArray yang anda masukan maksimal 20 elemen.\n"; // Menampilkan pesan jika data lebih dari 20
        }
    }
    cout << endl;                        // Membuat jarak per baris program
    cout << "=====================" << endl; // Membuat tampilan susunan data element array
    cout << "Masukan Element Array" << endl;
    cout << "=====================" << endl;
     
}



int main()
{
    
}

