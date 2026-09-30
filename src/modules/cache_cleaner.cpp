
#include <iostream>
#include <filesystem>
#include "../core/path_utils.cpp"
#include "../core/file_utils.cpp"
#include "../core/logger.cpp"

namespace ClassicCleaner {

    class CacheCleaner {
    public:
        void run() {
            Logger::info("Avvio modulo pulizia cache...");

            // Percorso cache tipico (Windows)
            std::string cachePath = PathUtils::getTempPath() + "\\Cache";

            Logger::info("Percorso cache: " + cachePath);

            int removedCount = 0;

            try {
                if (!std::filesystem::exists(cachePath)) {
                    Logger::warn("La cartella cache non esiste. Nessuna operazione eseguita.");
                    return;
                }

                for (const auto& entry : std::filesystem::directory_iterator(cachePath)) {
                    if (entry.is_regular_file()) {
                        std::string filePath = entry.path().string();

                        if (FileUtils::removeFile(filePath)) {
                            removedCount++;
                        }
                    }
                }
            } catch (...) {
                Logger::error("Errore durante la scansione della cache.");
            }

            Logger::info("Pulizia cache completata. File rimossi: " + std::to_string(removedCount));
        }
    };

}
