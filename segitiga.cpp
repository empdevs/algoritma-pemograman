#include <iostream>
#include <string>
using namespace std;


string name = "Haekal Arif Rozikin";
string kelas = "v108 / 01TPLE007";
string nim = "221011400325";

// initial main
int main(){
	
    int a, t, luas;
   
    cout << "Input alas segitiga: ";
    cin >> a;
    cout << "Input tinggi segitiga: ";
    cin >> t;
    // cout << endl;
    // convert into decimal 1/2 -> 0.5
    luas = 0.5 * (a * t);
    cout << "Luas segitiga adalah "<< luas << endl;
    system("pause");
    return 0;
       
}

