#include "mystring.h"
#include "menu.h"

int main(){
    std::cout<<"---===<<<YA DOLBOEB>>>===---\nNUMBER OF ELEMENTS:"<<std::endl;
    int size = 0;
    do{
        size = intcheck();
    }while(size <= 0);
    
    std::vector<myString> strings;

    for(int i = 0; i < size; i++){
        myString temp;
        strings.push_back(temp);
    }

    menu(strings, size);

    return 0;
}