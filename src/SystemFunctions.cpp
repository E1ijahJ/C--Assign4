#include <cstdlib>  
#include <string>


void createDirectories(int count, const std::string& baseName) {
    for (int i = 0; i < count; ++i) {
        std::string command = "mkdir " + baseName + std::to_string(i);
        system(command.c_str());
    }
}


void echoString(const std::string& message) {
    std::string command = "echo \"" + message + "\"";
    system(command.c_str());
}


void initializeGitRepo() {
    system("git init");
    system("git add .");
    system("git commit -m \"Initial commit\"");
}