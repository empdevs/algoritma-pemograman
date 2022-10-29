#include <iostream>

using namespace std;

int main(){

     //deklarasi variabel x dan pointer y dengan tipe data int
     int x , *y, z;
     string name;
     
     name = "Haekal Arif Rozikin";
     x = 99;
     y = &x;
     z = *y;

     cout<<"\t\t===== Contoh program sederhana pointer =====\n\n";

     cout<<"Nama : "<<name<<endl;
     cout<<"Nilai X   \t\t: "<<x<<endl;
     cout<<"Alamat memori X (&X) \t\t: "<<y<<endl;
     cout<<"Mendapatkan nilai dari alamat X \t\t:"<<z<<endl;

     return 0;
}