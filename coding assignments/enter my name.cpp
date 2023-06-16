#include <iostream>
#include <string>
using namespace std;

int main(int,char**) {
    std::string name;
    std::cout<< "What is your name?";
    std::cin>> name;
    std::cout<<"Hello "<<name;
    return 0;
}
