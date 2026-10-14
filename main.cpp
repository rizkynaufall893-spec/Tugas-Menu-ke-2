#include <iostream>
using namespace std;

int main() {
    string menu[4]={"Soto","Rawon","Es Teh","Kopi"};
    int harga[4]={15000,20000,3000,5000};
    int t;
    int pilihan;
    int porsi[5];
    int total[5];
    int ts=0;
    char ulang;

    for(t=0; t<5; t++){
        cout<<"Menu"<<endl;
        cout<<"1. "<<menu[0]<<endl;
        cout<<"2. "<<menu[1]<<endl;
        cout<<"3. "<<menu[2]<<endl;
        cout<<"4. "<<menu[3]<<endl;

        cout<<"Pilih menu: ";
        cin>>pilihan;

        if(pilihan<1 || pilihan>4){
            cout<<"Pilihan tidak tersedia"<<endl;
            t--;
            continue;
        }

        cout<<"Menu ";
        cout<<menu[pilihan-1]<<endl;
        cout<<"Harga: ";
        cout<<harga[pilihan-1]<<endl;
        cout<<"Masukkan Porsi: ";
        cin>>porsi[t];

        total[t]=harga[pilihan-1]*porsi[t];

        cout<<"Total Anda ";
        cout<<total[t]<<endl;

        ts=ts+total[t];

        cout<<"Apakah ingin menambah pesanan? (Y/T): ";
        cin>>ulang;

        if(ulang=='T' || ulang=='t'){
            break;
        }
    }

    cout<<"Total Semuanya: ";
    cout<<ts;

    return 0;
}
