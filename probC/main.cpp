#include <iostream>

int main() {
    long int st, md, ex;
    std::cin >> st >> md >> ex;
    long int bottles=0;
    st += md;
    while( st >= ex){
        int temp = st/ex;
        bottles += temp;
        st = st + st/ex - ex*temp;
    }
    std::cout << bottles;
}
