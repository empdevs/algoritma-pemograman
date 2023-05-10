#include <iostream>
#include <conio.h>
using namespace std;

main(){

    const int array_size = 7;
    int temp;
    int data[] = {12, 32, 11, 9, 4, 100, 66, 30};
    std::cout << "Data sebelum diurutkan "<<std::endl;

    for(int i = 0; i <= array_size; i++){
        std::cout<<data[i]<<" ";
    }
    std::cout << ""<<std::endl;
    std::cout << ""<<std::endl;
    for(int k=1; k <= array_size; k++){
        for(int i=array_size; i >= k; i--){
            if(data[i] < data[i-1]){
                temp = data[i];
                data[i] = data[i-1];
                data[i-1] = temp;
            }
        }
    }

    std::cout << "Data setelah diurutkan "<<std::endl;
    for(int i = 0; i <= array_size; i++){
          std::cout<<data[i]<<" ";
    }

}


// {12, 32, 11, 9, 4, 100, 66, 30}; data awal

// looping ke 1 {

    // {12, 32, 11, 9, 4, 100, 30, 66}; -> looping 7
    // {12, 32, 11, 9, 4, 30, 100, 66}; -> looping 6
    // {12, 32, 11, 9, 4, 30, 100, 66}; -> looping 5
    // {12, 32, 11, 9, 4, 30, 100, 66}; -> looping 4
    // {12, 32, 11, 4, 9, 30, 100, 66}; -> looping 3
    // {12, 32, 4, 11, 9, 30, 100, 66}; -> looping 2
    // {12, 4, 32, 11, 9, 30, 100, 66}; -> looping 1
    // {4, 12, 32, 11, 9, 30, 100, 66}; -> looping 0
// }
// looping ke 2 {

    // {12, 32, 11, 9, 4, 100, 30, 66}; -> looping 7
    // {12, 32, 11, 9, 4, 30, 100, 66}; -> looping 6
    // {12, 32, 11, 9, 4, 30, 100, 66}; -> looping 5
    // {12, 32, 11, 9, 4, 30, 100, 66}; -> looping 4
    // {12, 32, 11, 4, 9, 30, 100, 66}; -> looping 3
    // {12, 32, 11, 4, 9, 30, 100, 66}; -> looping 2
    // {12, 11, 32, 4, 9, 30, 100, 66}; -> looping 1
    // {11, 12, 32, 4, 9, 30, 100, 66}; -> looping 0

// }

