#include <iostream>
#include <string>
#include <cctype>
#include "Exp.h"

bool Exp::CheckName(const std::string& s){
    for (size_t i = 0; i < s.length(); ++i)
    {
        if(!isalpha(s[i]) && !isspace(s[i])){        
            return false;
        }
    }
    return true;
}

bool Exp::CheckPhone(const std::string& s){
    for (size_t i = 0; i < s.length(); ++i){
        if(!isdigit(s[i]) || isspace(s[i])){
            std::cout << "Khong nhap chua ki tu khac so hoac khoang trang" << std::endl;
            return false;
        }
    }
    return true;
}

bool Exp::CheckLength(const std::string& s, const int& l){
    return s.length() == l;
}

bool Exp::CheckNumber(const std::string& s, const int& low, const int& high) {
    if (!CheckPhone(s)) {
        return false;
    }

    // return CheckPhone(s);
    
    int num = 0;
    for (size_t i = 0; i < s.length(); ++i) {
        if (s[i] >= '0' && s[i] <= '9') {
            num = num * 10 + static_cast<int>(s[i] - '0');
        } else {
            std::cout << "Chuoi khong hop le!" << std::endl;
            return false;
        }
    }
    
    if (!(num >= low && num <= high)) {
        std::cout << "Nhap so trong doan [" << low << "," << high << "]" << std::endl;
        return false;
    }
    
    return true;
}