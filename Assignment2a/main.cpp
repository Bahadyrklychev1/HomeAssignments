//Klychev Bahodir st135363@student.spbu.ru
//input.bin project
#include<iostream>
#include<fstream>

int main() {
    std::ifstream inputFile("input.bin" , std::ios::binary);
    if (!inputFile.is_open()) {
        std::cout<< "Error opening file input.bin" << std::endl;
        return 1;
}
    
    inputFile.seekg(0, std::ios::end);
    int fileSize = inputFile.tellg();
    inputFile.seekg(0, std::ios::beg);

    
    char* data = new char[fileSize];


    inputFile.read(data, fileSize);
    inputFile.close();



    for (int i = 0 ; i < fileSize / 2; ++i) {
        std::swap(data[i], data[fileSize - i - 1]);
    }


    std::ofstream outputFile("output.bin", std::ios::binary);
    outputFile.write(data, fileSize);
    outputFile.close();

    delete[] data;
    return 0;
}
