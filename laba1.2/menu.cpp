#include "menu.h"

void menu(std::vector<myString>strings, int size)
{
    int input;
    int cur_s = 0;
    do
    {
        std::cout << "CHOOSE OPERATION:\n-1. MOVE\n-2. CHANGE SIZE\n-3. CHANGE STRING\n-4. ADD\n-5. SEARCH\n-6. ERASE\n-7. SHOW ALL\n-8. ADD ELEMENT\n-9. DELETE ELEMENT\nINPUT: ";
        std::cin >> input;
        fflush(stdin);
        system("cls");

        switch (input)
        {
        case MOVE:
            std::cout<<"INPUT STRING INDEX ("<<0<<","<<strings.size() - 1<<"):\n";
            int index;
            do{
                index = intcheck();
                fflush(stdin); 
            }while(index < 0 || index >= strings.size());
            cur_s = index;
            std::cout<<"STRING["<<cur_s<<"]:\""<<strings[cur_s].s_ret()<<"\""<<std::endl;
            break;
        case CH_SIZE:
            strings[cur_s].ch_size();
            //std::cout<<"STRING["<<cur_s<<"]:\""<<strings[cur_s].s_ret()<<"\""<<std::endl;
            break;
        case CH_STR:
            std::cout<<"CHANGED STRING:\n";
            strings[cur_s].ch_str();
            //std::cout<<"STRING["<<cur_s<<"]:\""<<strings[cur_s].s_ret()<<"\""<<std::endl;
            break;
        case ADD:
            strings[cur_s].s_add();
            //std::cout<<"STRING["<<cur_s<<"]:\""<<strings[cur_s].s_ret()<<"\""<<std::endl;
            break;
        case SEARCH:
            strings[cur_s].s_search();
            break;
        case ERASE:
            strings[cur_s].s_erase();
            //std::cout<<"STRING["<<cur_s<<"]:\""<<strings[cur_s].s_ret()<<"\""<<std::endl;
            break;
        case SHOW_ALL:
            std::cout<<"STRINGS:\n";
            for(int i = 0; i < strings.size(); i++){
                std::cout<<"["<<i<<"]:"<<"\""<<strings[i].s_ret()<<"\""<<std::endl;
            }
            break;
        case ADD_EL:
        {
            std::cout<<"NEW STRING:\n";
            myString new_el;
            new_el.ch_str();
            strings.push_back(new_el);
        }
            break;
        case DEL_EL:
        {
            std::cout<<"DELETION INDEX:\n";
            int t_ind = intcheck();
            while(t_ind >= strings.size() || t_ind < 0){
                std::cout<<"INVALID INDEX\nDELETION INDEX:\n";
                t_ind = intcheck();
            }
            strings.erase(strings.begin() + t_ind);
        }
            break;
        default:
            std::cout << "INVALID INPUT!\n";
            break;
        }
    } while (input > 0 && input <= 9);
    input = 0;
}
