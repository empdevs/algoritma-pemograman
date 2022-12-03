#include <iostream>
#include <conio.h>

// function linear search
int linear_search(int[], int, int);

main(){

    const int array_size = 10;
    int array[array_size] = {25, 36, 2, 48, 0, 69,  14, 22, 7, 19 };
    std::cout << "Isi dari array adalah : " << std::endl; 
    // std::cout <<array<< std::endl; 
    for(int i = 0; i < array_size; i++){
        std::cout << "array["<<i<<"] = "<<array[i]<< std::endl;
    }
    
    int searching_element = 0;
    int flag = 0;
    std::cout << "\n\n masuukan data yang anda cari : " << std::endl;
    std::cin>>searching_element;

    std::cout << "ini array: "<<array << std::endl;
    std::cout << "ini size array: "<<array_size << std::endl;
    std::cout << "ini nilai yang lu masukkin: " <<searching_element << std::endl;

    // call function linear search
    flag = linear_search(array, array_size, searching_element);

    if(flag != 1){
        std::cout << "\ndata tersebut ditemukan pada posisi: array["<<flag<<"] bernilai "<<searching_element<< std::endl;
    }else{
        std::cout << "\ndata tersebut tidak ditemukan" << std::endl;
    }
    getch();
}

int linear_search(int array[], int array_size, int element){
    int flag = 1;
    for(int i = 0; i < array_size; i++){
        if(element == array[i]){
            flag = i;
            break;
        }
    }
    return flag;
}