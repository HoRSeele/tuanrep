#include <iostream>

int main() {

    int* data = new int[100];

    data[0] = 5;

    std::cout << data[0] << std::endl;

    delete[] data;

    return 0;
}
