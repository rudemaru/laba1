#pragma once
#include <iostream>
#include <regex>
#include "intcheck.h"

class myString
{
    std::string mystr;

public:
    myString();
    myString(std::string s);
    void s_add();
    void s_erase();
    void s_search();
    void ch_size();
    void ch_str();
    int s_size();
    std::string s_ret();
};