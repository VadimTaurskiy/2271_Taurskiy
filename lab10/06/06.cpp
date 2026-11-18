#include <iostream>
int main(){
char x = 0;
char *d = &x;
std::cout << "d = " << reinterpret_cast<size_t>(d) << std::endl;
std::cout << "d + 4 = " << reinterpret_cast<size_t>(d + 4) << std::endl;
std::cout << "d - 4 = " << reinterpret_cast<size_t>(d - 4) << std::endl;
std::cout << reinterpret_cast<size_t>(d + 4) - reinterpret_cast<size_t>(d - 4) << std::endl;
}