#include <iostream>

using namespace std;

int main(){
    struct rumah {
        string tipe_rumah;
        int jumlah_kamar;
    };
    
    rumah rumah1;
    cout <<"Tipe Rumah   : " << &rumah1.tipe_rumah <<endl;
    cout <<"Jumlah Kamar : " << &rumah1.jumlah_kamar <<endl;
}
