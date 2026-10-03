
#include <iostream>
#include "../modules/temp_cleaner.cpp"
#include "../modules/cache_cleaner.cpp"
#include "../modules/log_cleaner.cpp"

int main() {
    std::cout << "=== ClassicCleanerOSS ===" << std::endl;
    std::cout << "Avvio dei moduli di pulizia..." << std::endl;

    // Modulo: TempCleaner
    {
        std::cout << "\n[1] TempCleaner" << std::endl;
        TempCleaner temp;
        temp.run();
    }

    // Modulo: CacheCleaner
    {
        std::cout << "\n[2] CacheCleaner" << std::endl;
        CacheCleaner cache;
        cache.run();
    }

    // Modulo: LogCleaner
    {
        std::cout << "\n[3] LogCleaner" << std::endl;
        LogCleaner log;
        log.run();
    }

    std::cout << "\nPulizia completata." << std::endl;
    return 0;
}
