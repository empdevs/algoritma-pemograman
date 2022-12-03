#include <iostream>
using namespace std;

// initialize function 
// void getValue();//for show value because have keywoed void
// int getValue2();//for return value becaouse have keyword int
// int a; //global variabel

// first function running
// main(){
//     // int a = 99; //local variable
//     a = 99; //local variable
//     getValue();
//     cout<<getValue2()<<endl;
// }
// void getValue(){
//     // int a = 20; //local variable
//     a = 20; // using global variable
//     cout<<a<<endl;
// }
// int getValue2(){
//     // int a = 40; //local variable
//     a = 40; //using global variable
//     return a;
// }


void getValue3();
main(){
    getValue3();
    getValue3();
    getValue3();
}

void getValue3(){
    // variabel ber keyword static merupakan variabel local dan menyimpan nilainya ketika 
    // function di panggil berkali kali karena initialize variabel static hanya dipanggil sekali
    static int a = 1;
    cout<<a<<endl;
    a++;
    // ++ = increment
    // -- = decremenet
}