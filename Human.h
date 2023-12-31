#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <iomanip>
#include <conio.h> // de dung cau lenh input = getch() trong ham chon gioi tinh dung phim len xuong voi Enter
#include "Exp.h"

class Human{
protected:
    std::string FullName;
    std::string BornYear;
    std::string Gender;
    std::string PhoneNumber;

public:
    // ham dung ni de kiem tra cai bangr thong tin in ra co dung khong thoi 
    Human(std::string = "", std::string = "", std::string = "", std::string = "");
    void Show();
    std::string ChooseGender();

    std::string GetName(){
        return this->FullName;
    }

    std::string GetYear(){
        return this->BornYear;
    }

    std::string GetGender(){
        return this->Gender;
    }

    std::string GetPhoneNumber(){
        return this->PhoneNumber;
    }

    void Input(const std::string&);
    std::string Check();
    int Nhap(const std::string&);
};

#endif     