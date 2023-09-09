#include "mystring.h"

myString::myString()
{
    mystr = "";
}

myString::myString(std::string s)
{
    mystr = s;
}

void myString::s_add()
{
    std::string add_s;
    std::cout << "INPUT +ADD:\n";
    getline(std::cin, add_s);
    fflush(stdin);
    mystr += add_s;
}

void myString::s_erase()
{
    int l, r;
    do{
        std::cout<<"STARTING INDEX [0;size):\n";
        l = intcheck();
        fflush(stdin);
    }while(l < 0 || l >= mystr.size());
    
    do{
        std::cout<<"LENGTH OF ERASING:\n";
        r = intcheck();
        fflush(stdin);
    }while(r < l || r > mystr.size() - l);

    if (r - l >= 0 && l >= 0 && r < mystr.size())
    {
        mystr.erase(l, r - l + 1); // стартовый индекс и длина удаляемого участка
    }else{
        std::cout<<"ERROR"<<std::endl;
    }
}

void myString::s_search()
{
    std::cout<<"TARGET:\n";
    std::string ptrn;
    std::getline(std::cin, ptrn);
    fflush(stdin);
    std::regex pattern(ptrn);
    if(std::regex_search(mystr, pattern)){
        std::cout<<"FOUND!\n";
    }else{
        std::cout<<"NOT FOUND!\n";
    } 
    //return std::regex_search(mystr, pattern);
}
void myString::ch_size()
{
    std::cout<<"NEW SIZE:\n";
    int new_size;
    new_size = intcheck(); // мб придется интчек ставить обратно хз
    while(new_size < 0){
        std::cout<<"NEW SIZE:\n";
        int new_size;
    }
    fflush(stdin);
    if(new_size <= mystr.size())
    {
        mystr = mystr.substr(0, new_size);
    }else{
        int temp = mystr.size();
        for(int i = temp; i <= new_size; i++){
            mystr += " ";
        }
    }
}

void myString::ch_str()
{
    std::string temp;
    std::getline(std::cin, temp);
    fflush(stdin);
    mystr = temp;
}

int myString::s_size()
{
    return mystr.size();
}

std::string myString::s_ret()
{
    return mystr;
}
