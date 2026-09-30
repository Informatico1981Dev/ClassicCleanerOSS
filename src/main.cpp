#include <iostream>
#include "../modules/temp_cleaner.cpp"
#include "../modules/cache_cleaner.cpp"
#include "../modules/log_cleaner.cpp"

int main() {
    std::cout << "Classic Cleaner OSS - Core initialized." << std::endl;

    ClassicCleaner::TempCleaner cleaner;
    cleaner.run();

    ClassicCleaner::CacheCleaner cache;
    cache.run();
    ClassicCleaner::LogCleaner log;
log.run();

    return 0;
}
