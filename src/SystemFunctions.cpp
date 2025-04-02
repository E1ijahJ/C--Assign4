#include <cstdlib>  
#include <string>

/// @brief Creates a number of directoreis using built in mkdir command
/// @param count number of directoreis to be created
/// @param baseName the base name for each directory 
void createDirectories(int count, const std::string& baseName) {
    for (int i = 0; i < count; ++i) {
        std::string command = "mkdir " + baseName + std::to_string(i);
        system(command.c_str());
    }
}

/// @brief calls the echo command to print inputed string to the terminal
/// @param message the inputed string
void echoString(const std::string& message) {
    std::string command = "echo \"" + message + "\"";
    system(command.c_str());
}

/// @brief This initalizes a git repo, adds to the repo then commits.
void initializeGitRepo() {
    system("git init");
    system("git add .");
    system("git commit -m \"Initial commit\"");
}