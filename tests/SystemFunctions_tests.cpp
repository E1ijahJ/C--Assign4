#include <gtest/gtest.h>
#include <filesystem>
#include <string>
#include "../include/SystemFunctions.h"

namespace fs = std::filesystem;

TEST(MkdirLoopTest, CreatesDirectoriesCorrectly) {
    std::string baseName = "test_folder_";
    int count = 3;

    // Run the function
    createDirectories(count, baseName);

    // Check that the directories exist
    for (int i = 0; i < count; ++i) {
        std::string dirName = baseName + std::to_string(i);
        EXPECT_TRUE(fs::exists(dirName));
        fs::remove(dirName); // Clean up after test
    }
}


TEST(GitInitTest, InitializesGitRepoSuccessfully) {
    std::string testDir = "test_git_repo";
    
    fs::create_directory(testDir);
    fs::current_path(testDir);  

    
    initializeGitRepo();

    
    EXPECT_TRUE(fs::exists(".git"));

  
    fs::current_path("..");

  
    fs::remove_all(testDir);
}