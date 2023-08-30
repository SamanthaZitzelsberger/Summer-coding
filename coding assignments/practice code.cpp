#include <iostream>
#include <string>

int main(int,char**) {
    int i=5;
    float f=2.3e1;
    char letter='a';
    wchar_t character ='是';
    std::string english = "English";
    std::wstring chinese =  L"中国人";
    i++;f-;
    letter++;
    std::cout<<i<<''<<f<<'\n';
    std::cout<<letter<<""<<character<<std::endl
        <<english<<"@@"<<chinese<<std::endl;
    std::cin>>english;
    std::cout<<english<<std::endl;
    return 0;
} 