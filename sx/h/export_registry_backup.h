#ifndef EXPORT_REGISTRY_BACKUP_H
#define EXPORT_REGISTRY_BACKUP_H

#include <iostream>
#include <Windows.h>

void ExportRegistryBackup() {
    const wchar_t* backupFilePath = L".\\out\\registry_backup.reg";
    const wchar_t* registryPath = L"HARDWARE\\DESCRIPTION\\System";

    if (RegSaveKeyW(HKEY_LOCAL_MACHINE, registryPath, nullptr) == ERROR_SUCCESS) {
        std::wcout << L"Registry exported to: " << backupFilePath << std::endl;
    } else {
        std::cerr << "Error exporting registry: " << GetLastError() << std::endl;
    }
}

#endif // EXPORT_REGISTRY_BACKUP_H
