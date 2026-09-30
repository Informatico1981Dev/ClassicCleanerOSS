
#include <iostream>
#include <filesystem>
#include "../core/path_utils.cpp"
#include "../core/file_utils.cpp"
#include "../core/logger.cpp"

namespace ClassicCleaner {

    class TempCleaner {
    public:
        void run() {
            Logger::info("Avvio modulo pulizia temporanei...");

            std::string tempPath = PathUtils::getTempPath();
            Logger::info("Percorso temporanei: " + tempPath);

            int removedCount = 0;

            try {
                for (const auto& entry : std::filesystem::directory_iterator(tempPath)) {
                    if (entry.is_regular_file()) {
                        std::string filePath = entry.path().string();

                        if (FileUtils::removeFile(filePath)) {
                            removedCount++;
                        }
                    }
                }
            } catch (...) {
                Logger::error("Errore durante la scansione dei file temporanei.");
            }

            Logger::info("Pulizia completata. File rimossi: " + std::to_string(removedCount));
        }
    };

}
