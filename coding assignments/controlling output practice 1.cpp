#include <iomanip>
#include <iostream>
#include <string>

int main(int,char**) {
    int i=1, j=12, k=123, l=1234;
    std::cout<<setw(3)<<i<<std::endl;
    std::cout<<setw(3)<<j<<std::endl;
    std::cout<<setw(3)<<k<<std::endl;
    std::cout<<setw(3)<<l<<std::endl;
    return 0;
}