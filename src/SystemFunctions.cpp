#include <cstdlib>  
#include <string>


void createDirectories(int count, const std::string& baseName) {
    for (int i = 0; i < count; ++i) {
        std::string command = "mkdir " + baseName + std::to_string(i);
        system(command.c_str());
    }
}