#include <iostream>
#include <conio.h>
using namespace std;

main(){

    const int array_size = 6;
    // data harus terurut dari kecil ke besar
    int data[array_size] = {12, 13, 30, 40, 50, 66};
    int x, mid, bottom=0, top=5;
    string enumPil;
    bool find = false;
    
    do{
        
        // system("cls");
        for(int i=0; i < array_size; i++ ){
            // std::cout <<data[i]<<" "<<std::endl;
            std::cout <<data[i]<<" ";
        }

        std::cout<<" "<<std::endl;
        std::cout << "Masukkan nilai yang akan dicari : ";
        std::cin>>x;

        while ((!find) && (bottom <= top)){
            mid = (bottom + top) / 2;
            if(data[mid] == x){
                find = true;
            }else if(data[mid] < x){
                bottom = mid + 1;
            }else{
                top = (mid - 1);
            }
        }

        if(find){
            std::cout << "data ditemukan pada index ke - " <<mid<<std::endl;
        }else{
            std::cout << "data tidak ditemukan" << std::endl;
        }

        std::cout<< "apakah anda ingin menghitung kembali ? Y / N"<<std::endl;
        std::cin>>enumPil;

    } while(enumPil == "y");
    // getch();
}
