#include "mystring.h"
#include <vector>

enum options
{
    MOVE = 1,
    CH_SIZE,
    CH_STR,
    ADD,
    SEARCH,
    ERASE,
    SHOW_ALL,
    ADD_EL,
    DEL_EL
};

void menu(std::vector<myString> strings, int size);