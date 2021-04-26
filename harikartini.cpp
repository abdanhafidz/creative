//membuat program penanggalan hari kartini
//Oleh Abdan Hafidz
#include<bits/stdc++.h>
using namespace std;
int main(){
    int tgl;
    int bulan;
    int tahun;
    
        cout<<"=== Hmm Pada Saat itu Merupakan hari Kartini yang keberapa ya? === \n";
        cout<<"Tanggal :";
        cin>>tgl;
        cout<<"Bulan :";
        cin>>bulan;
        cout<<"Tahun :";
        cin>>tahun;
        
            if(tgl==21){
                if(bulan==04 or bulan==4){
                    if(tahun>=1879 && tahun<=2021){
                        cout<<"Hari tersebut adalah Hari Kartini yang ke-"<<tahun-1879<<"Tahun";
                        
                    }else if(tahun>2021){
                        cout<<"Wowww Anda Kejauhan Kawan itu sudah di masa depan!";
                    }else if(tahun<1879){
                        cout<<"Waduh saat itu Kartini bahkan belum lahir :(";
                    }
                }else{
                    cout<<"Bulan tsb tidak ditetapkan sebagai Hari Kartini :)";
                }
            }else{
                cout<<"Tanggal tersebut tidak ditetapkan sebagai hari kartini :)";
            }

}