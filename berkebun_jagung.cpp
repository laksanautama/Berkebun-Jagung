
#include <iostream>
#include <map>
#include <string>
#include <set>

using namespace std;

//<--------dilarang menambahkan kode di atas batas ini ----->>

int bisa_ditanam_jagung(int lahan[], int n, int x) {
    for (int i = 0; i < n; ++i) {
        // Cek jika petak kosong dan memastikan petak sebelumnya juga kosong atau di tepi awal
        if (lahan[i] == 0 && (i == 0 || lahan[i-1] == 0)) {
            // Menanam jagung
            x--;
            if (x <= 0) return true; // Semua jagung bisa ditanam

            lahan[i] = 1; // Menandai telah ditanami jagung untuk menghindari penanaman bersebelahan langsung
        }
    }
    return x <= 0; // Jika semua jagung bisa ditanam atau tidak ada lagi ruang yang cukup
}

int main() {
    // Contoh penggunaan fungsi
    int lahan[] = {0, 1, 0, 0, 1, 0}; // Contoh array lahan
    int n = sizeof(lahan) / sizeof(lahan[0]); // Ukuran lahan
    int x = 2; // Jumlah bibit jagung yang tersedia

    if (bisa_ditanam_jagung(lahan, n, x)) {
        cout << "Bisa ditanam" << endl;
    } else {
        cout << "Tidak bisa ditanam" << endl;
    }

 return 0;
}

