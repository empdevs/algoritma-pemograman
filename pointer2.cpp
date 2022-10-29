#include <iostream>
#include <string>

int panjang_kata(char *text) {
 int panjang = 1;
 printf(text);
 while (*(text++) != '\0')
  panjang++;

 return panjang;
}

int main() {
 char string[100];
 std::cout << "Input Nama Anda: ";
 std::cin.getline(string, 100);
 std::cout << "Panjang Kata: " << panjang_kata(string);
 std::cin.getline(string, 100);
 system("pause");
 return 0;
}