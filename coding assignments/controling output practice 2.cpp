#include <iomanip>
#include <iostream>
#include <string>

int main(int,char**) {
    float i=1.2, j=1.23, k=1.234, l=1.2345;
    std::cout<<setprecision(3)<<i<<std::endl;
    std::cout<<setprecision(3)<<j<<std::endl;
    std::cout<<setprecision(3)<<k<<std::endl;
    std::cout<<setprecision(3)<<l<<std::endl;
    return 0;
}