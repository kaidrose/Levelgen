#include "generator.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

void generateLevel() {
    srand(time(0));

    for (int i = 0; i < 50; i++) {
        int type = rand() % 3; // 0=block, 1=spike, 2=orb

        if (type == 0) std::cout << "Block at x=" << i << "\n";
        else if (type == 1) std::cout << "Spike at x=" << i << "\n";
        else std::cout << "Orb at x=" << i << "\n";
    }
}