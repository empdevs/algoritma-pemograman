#include <iostream>
#include <string>
using namespace std;

string name = "Haekal Arif Rozikin";
string kelas = "v108 / 01TPLE007";
string nim = "221011400325";

// initial main
int main(){
	
    string status;
    int cases;

    string name, grade;
    int nim, value1, value2, average, rVolumeBola, phi, r, result, R, val1, val2, a, t, luas;
    do
    {

        cout<<"1. Hitung Luas Segitiga"<<endl;
        cout<<"2. Hitung Volume Silinder"<<endl;
        cout<<"3. Hitung Volume Kerucut"<<endl;
        cout<<"4. Hitung Volume Bola"<<endl;
        cout<<"5. Hitung Rata - rata nilai"<<endl;
        cout<<endl;
        cout<<"Silahkan pilih nomor : ";
        cin>>cases;

        switch (cases){
        case 1:
            cout << "Input alas segitiga: ";
            cin >> a;
            cout << "Input tinggi segitiga: ";
            cin >> t;
            cout << endl;
            // convert into decimal 1/2 -> 0.5
            luas = 0.5 * (a * t);
            cout << "Luas segitiga adalah "<< luas << endl;
        break;
        case 2:
            cout<<"Diketahui v = phi r2 t"<<endl;
            cout<<"phi = 1.1429"<<endl;
            cout<<"r = 5"<<endl;
            cout<<"t = 9"<<endl;
            cout<<"R = 6"<<endl;

            phi = 3.1429;
            r = 5;
            t = 8;
        
            result = (double) phi * r * r * t;
            cout<<"<===== Result =====>"<<endl;
            cout<<"Volume Silinder : "<<result<<endl;

        break;
        case 3:
            cout<<"Diketahui v = 1/3 phi (R+r)2 t"<<endl;
            cout<<"phi = 3.14"<<endl;
            cout<<"r = 5"<<endl;
            cout<<"t = 9"<<endl;
            cout<<"R = 6"<<endl;

            phi = 3.143;
            r = 5;
            t = 9;
            R = 6;
            // 1/3
            val1 = (double) 0.3 * phi * t;
            cout<<"Val1 : "<<val1<<endl;
            val2 = (R * R) + ( r * R ) + ( r * r);
            cout<<"Val2 : "<<val2<<endl;
            result = val1 * val2;
            cout<<"<===== Result =====>"<<endl;
            cout<<"Volume Kerucut Terpancung : "<<result<<endl;
        break;
        case 4:
            cout<<"Diketahui v = 4/3 phi r3"<<endl;
            cout<<"phi = 3.14"<<endl;
            cout<<"r = 15"<<endl;
            phi = 3.14;
            r = 15;
            rVolumeBola = r;
            for(int i = 1; i < 3; i++){
                rVolumeBola *= r;
            }
            // 4/3
            result = (double) 1.3 * phi * rVolumeBola;
            cout<<"<===== Result =====>"<<endl;
            cout<<"Volume Bola : "<<result<<endl;

        break;
        case 5:
            cout<<"Masukkan nama : ";
            cin>>name;
            cout<<"Masukkan nim : ";
            cin>>nim;
            cout<<"Masukkan nilai 1 : ";
            cin>>value1;
            cout<<"Masukkan nilai 2 : ";
            cin>>value2;

            average = (value1 + value2) / 2;

            if(average < 60){
                grade = "E";
            }else if(average < 70){
                grade = "C";
            }else if(average < 80){
                grade = "B";
            }else if(average < 90){
                grade = "A";
            }else{
                grade = "Istimewa";
            }
    
            cout<<"<===== Result =====>"<<endl;
            cout<<"Nama : "<<name<<endl;
            cout<<"Nim : "<<nim<<endl;
            cout<<"Rata rata : "<<average<<endl;
            cout<<"Grade : "<<grade<<endl;
            
        break;
        default:
             cout<<"Anda tidak menghitung apapun"<<endl;   
        break;
        }
        cout<<"Apakah anda ingin kembali menghitung ? (y/t)";
        cin>>status;

        /* code */
    } while (status == "y");

	return 0;
}

