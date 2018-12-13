#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#define n 20
using namespace std;
int f, r;
typedef struct
{
   char nomer[15];
   char nama[50];
   float posisi;
}pemainbola;
void awal()
{
   f=0;
   r=-1;
}
main()
{
   pemainbola data[n];
   int pilih;
   awal();
   atas:
   cout<<"DATA PEMAIN SEPAKBOLA"<<endl<<endl;
   do{
   cout<<endl<<"1. INSERT DATA"<<endl;
   cout<<"2. DELETE DATA"<<endl;
   cout<<"3. EXIT"<<endl<<endl;
   cout<<"MASUKKAN PILIHAN ANDA : ";
   cin>>pilih;
   switch(pilih)
   {
      case 1 :
         if(r<n-1)
         {
            r++;
            cout<<endl<<"Masukan nomer punggung : ";
            cin>>data[r].nomer;
            cout<<"Masukan Nama : ";
            cin>>(data[r].nama);
            cout<<"Masukan posisi : ";
            cin>>data[r].posisi;
         }
         else
         {
                      cout<<"ANTRIAN PENUH"<<endl;
          }
         break;
          case 2 :
            if(f<r+1)
          {
               cout<<endl<<"DATA YANG DIINPUTKAN"<<endl<<endl;
                cout<<"Nomer Punggung Pemain : "<<data[f].nomer<<endl;
                cout<<"Nama Pemain : "<<data[f].nama<<endl;
                cout<<"Posisi Pemain : "<<data[f].posisi<<endl;
                f++;
                if(f==r+1 && r==n-1)
                {
                   awal();
                }
          }
          else
          {
             cout<<"ANTRIAN KOSONG"<<endl;
          }
               break;
        case 3:
        if(f<r+1)
          {
               cout<<endl<<"DATA YANG DIINPUTKAN"<<endl<<endl;
                cout<<"Nomer Punggung Pemain : "<<data[f].nomer<<endl;
                cout<<"Nama Pemain : "<<data[f].nama<<endl;
                cout<<"Posisi Pemain : "<<data[f].posisi<<endl;
          }
          else
         {
             cout<<"ANTRIAN KOSONG"<<endl;
          }
          goto atas;
               break;
         case 4 :
            cout<<"TERIMA KASIH";
            exit;
            break;
   }
   }
   while((pilih>=1)&&(pilih<=2));
   getch();
}
