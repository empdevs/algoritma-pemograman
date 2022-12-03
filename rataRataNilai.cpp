#include <iostream>
#include <string>
using namespace std;

string name = "Haekal Arif Rozikin";
string kelas = "v108 / 01TPLE007";
string nim = "221011400325";

// initial main
int main(){
	
    string name, grade;
    int value1, value2, average;

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
    system("pause");
    return 0;
}

