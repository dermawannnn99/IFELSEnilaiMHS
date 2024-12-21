#include <iostream>
using namespace std;

int main () {
    while (true) {
    int nilai;

    cout << "MASUKAN NILAI ANDA (1-100) : ";
    cin >> nilai;

    if ( nilai <0 || nilai >100 ) {
        cout << "Nilai Eror! Masukan antara rentang 1-100" << endl;
    }
    else if ( nilai >= 85 ) {
        cout << "DAPET A LU COY" << endl;
    }
    else if ( nilai >= 55) {
        cout << "DAPET B LU COY" << endl;
    }
    else {
        cout << "GOBLOK GA LULUS" << endl;
    }
}
    return 0;
}