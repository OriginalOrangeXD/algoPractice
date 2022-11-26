#include <iostream>
#include <string>

int main() {
    std::string thing;
    std::cin >>  thing;
    int pos;
    for(int i = 0; i < thing.size(); i++) {
        if(thing[i] == 'a') {
            pos = i;
            break;
        }
        
    }
    std::cout << thing.substr(pos);
}
