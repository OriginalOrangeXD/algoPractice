#include <iostream>
#include <vector>

int main() {
    long int blocks;
    int numTower = 0;
    std::cin >> blocks;
    std::vector<int> bL;
    int temp;
    for(int i =0; i < blocks; i++){
        std::cin >> temp;
        bL.push_back(temp);
    }
    int count = 1;
    for(int i = 0; i < bL.size()-1; i++){
        if(bL[i] < bL[i+1]) count++;
        else {
            if(count > 1) numTower++;
        }
    }
    std::cout << numTower;
    return 0;
}
