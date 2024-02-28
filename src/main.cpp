//
// Created by ewen.talleux on 27/02/2024.
//

#include <iostream>

#include "ArgumentsHandling/ArgumentsHandling.hpp"

int main(int argc, char *argv[]) {
    ArgumentsHandling argumentsHandling(argc, argv);

    std::vector<char> bytes = argumentsHandling.get4BytesFromFile();

    std::vector<char> littleEndian = argumentsHandling.putInLittleEndian(bytes);

    for (int i = 0; i < 4; i++)
    {
        std::cout << littleEndian[i];
    }
    return 0;
}
