#include <iostream>
#include "../modules/temp_cleaner.cpp"

int main() {
    std::cout << "Classic Cleaner OSS - Core initialized." << std::endl;

    ClassicCleaner::TempCleaner cleaner;
    cleaner.run();

    return 0;
}

