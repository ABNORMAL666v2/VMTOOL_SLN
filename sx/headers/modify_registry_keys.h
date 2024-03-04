#ifndef MODIFY_REGISTRY_KEYS_H
#define MODIFY_REGISTRY_KEYS_H

#include <iostream>
#include <Windows.h>
#include "registry_keys.h"

void ModifyRegistryKeys() {
    for (const auto& key : RegistryKeys::keys) {
        HKEY hKey;
        LONG result = RegCreateKeyExW(HKEY_LOCAL_MACHINE, key, 0, nullptr, REG_OPTION_NON_VOLATILE, KEY_SET_VALUE, nullptr, &hKey, nullptr);

        if (result == ERROR_SUCCESS) {
            result = RegSetValueExW(hKey, RegistryKeys::valueName, 0, REG_SZ, reinterpret_cast<const BYTE*>(RegistryKeys::valueData), (wcslen(RegistryKeys::valueData) + 1) * sizeof(wchar_t));
            RegCloseKey(hKey);

            if (result != ERROR_SUCCESS) {
                std::cerr << "Error modifying registry key: " << result << std::endl;
                return;
            }
        } else {
            std::cerr << "Error creating registry key: " << result << std::endl;
            return;
        }
    }

    std::cout << "Registry keys modified successfully." << std::endl;
}

#endif // MODIFY_REGISTRY_KEYS_H
