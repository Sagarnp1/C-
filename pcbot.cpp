#include <windows.h>
#include <iostream>
#include <string>
#include <thread>
#include <chrono>



bool isBraveOpen() {
    HWND hwnd = FindWindowA(NULL, "Brave"); 
    return (hwnd != NULL);
}

void typeMessage(const char* message) {
    INPUT inputs[2] = {};

    inputs[0].type = INPUT_KEYBOARD;
    inputs[0].ki.wVk = 0; 
    inputs[1].type = INPUT_KEYBOARD;
    inputs[1].ki.dwFlags = KEYEVENTF_KEYUP; 

    for (const char* c = message; *c != '\0'; ++c) {
        inputs[0].ki.wVk = VkKeyScanA(*c);
        SendInput(2, inputs, sizeof(INPUT));
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

void openApplication(const std::string& appName) {
    std::string command = "start " + appName;
    system(command.c_str());
}

void openBrave(const std::string& searchQuery = "") {
    if (!isBraveOpen()) {
        openApplication("brave");
       
        Sleep(2000);
    }

   
    typeMessage(searchQuery.c_str());
    
    INPUT enterInput[2] = {};
    enterInput[0].type = INPUT_KEYBOARD;
    enterInput[0].ki.wVk = VK_RETURN;
    enterInput[1].type = INPUT_KEYBOARD;
    enterInput[1].ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(2, enterInput, sizeof(INPUT));
    std::this_thread::sleep_for(std::chrono::milliseconds(1000)); 
}

void openFileExplorer(const std::string& drive) {
    std::string path = drive + ":\\";
    openApplication("explorer.exe " + path);
}

void openSystemSettings() {
    openApplication("ms-settings:");
}

void shutdownComputer() {
    system("shutdown /s /t 0");
}

int main() {
    while (true) {
        std::cout << "Choose an option:\n"
                  << "1: Open Brave and search Facebook\n"
                  << "2: Open Brave and search YouTube\n"
                  << "3: Open Brave and search Drive\n"
                  << "4: Open File Explorer (C:)\n"
                  << "5: Open File Explorer (D:)\n"
                  << "6: Open File Explorer (E:)\n"
                  << "7: Open Brave and search Drive II/II\n"
                  << "8: Open System Settings\n"
                  << "9: Shutdown the Computer\n"
                  << "0: Exit\n";

        std::string userChoice;
        std::getline(std::cin, userChoice);

        for (char action : userChoice) {
            switch (action) {
                case '1':
                    openBrave("facebook");
                    break;

                case '2':
                    openBrave("youtube");
                    break;

                case '3':
                    openBrave("drive");
                    break;

                case '4':
                    openFileExplorer("C");
                    break;

                case '5':
                    openFileExplorer("D");
                    break;

                case '6':
                    openFileExplorer("E");
                    break;

                case '7':
                    openBrave("drive II/II");
                    break;

                case '8':
                    openSystemSettings();
                    break;

                case '9':
                    shutdownComputer();
                    break;

                case '0':
                    std::cout << "Exiting. the program .." << std::endl;
                    return 0;

                default:
                    std::cout << "choose another please: " << action << std::endl;
                    break;
            }
        }
    }

    return 0;
}

