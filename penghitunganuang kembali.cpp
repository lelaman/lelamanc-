#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    //------Algortima Menghitung Pecahan Uang Kembalian Pada Kasir------//
    int beli, bayar, kembali, sisa, jumlah;
    
    cout<<"Masukan Jumlah Pembayaran : ";cin>>bayar;

    kembali = bayar-beli;

    sisa = kembali;

    cout<<"Jumlah Uang Kembali : \n"<<kembali;
    cout<<"Pecahan Uang Kembali : \n";

    if(sisa >= 20000)
    {
        jumlah = sisa / 20000;
        cout<<" "<<jumlah;
        cout<<"Lembar 20.000\n";
        sisa = sisa - (jumlah * 20000);
    }
    if(sisa >= 10000)
    {
        jumlah = sisa / 10000;
        cout<<" "<<jumlah;
        cout<<"Lembar 10.000\n";
        sisa = sisa - (jumlah * 10000);
    }
    if(sisa >= 5000)
    {
        jumlah = sisa / 5000;
        printf(" ", jumlah);printf("Lembar 5.000\n");
        sisa = sisa - (jumlah * 5000);
    }

    if(sisa >= 3500)
    {
	
        jumlah = sisa / 3500;
        cout<<" "<<3500;
        cout<<" disumbangkan karena tidak ada pecahan 5000";
        
    
    }
    getch ();
}

