#ifndef REGISTRY_KEYS_H
#define REGISTRY_KEYS_H

#include <Windows.h>

namespace RegistryKeys {
    // Specify registry keys
    const wchar_t* keys[] = {
        L"HKLM\\HARDWARE\\DESCRIPTION\\System",
        L"HKLM\\HARDWARE\\DESCRIPTION\\System\\BIOS",
        L"HKLM\\HARDWARE\\DESCRIPTION\\System\\BIOSVendor",
        L"HKLM\\SYSTEM\\ControlSet001\\Control\\SystemInformation",
        L"HKLM\\SYSTEM\\CurrentControlSet\\Control\\SystemInformation",
        L"HKLM\\SYSTEM\\HardwareConfig\\{8c177d8d-2a43-e9ca-2ba4-95d446c53674}",
        L"HKLM\\SYSTEM\\HardwareConfig\\{8c177d8d-2a43-e9ca-2ba4-95d446c53674}\\BIOSVersion",
        L"HKLM\\SYSTEM\\HardwareConfig\\{8c177d8d-2a43-e9ca-2ba4-95d446c53674}\\BIOSVendor",
        L"HKLM\\SYSTEM\\HardwareConfig\\{8c177d8d-2a43-e9ca-2ba4-95d446c53674}\\SystemBiosVersion",
        L"HKLM\\SYSTEM\\SYSTEM\\HardwareConfig\\{8c177d8d-2a43-e9ca-2ba4-95d446c53674}\\ComputerIds\\{15b1faea-bb96-5306-970c-c0b2f75b9f44}",
        L"HKLM\\SYSTEM\\SYSTEM\\HardwareConfig\\{8c177d8d-2a43-e9ca-2ba4-95d446c53674}\\ComputerIds\\{7f5be75a-98b9-5a5e-b023-1fddc1edb07c}",
        L"HKLM\\SYSTEM\\SYSTEM\\HardwareConfig\\Current\\BIOSVersion",
        L"HKLM\\SYSTEM\\SYSTEM\\HardwareConfig\\Current\\BIOSVendor",
        L"HKLM\\SYSTEM\\SYSTEM\\HardwareConfig\\Current\\SystemBiosVersion",
        L"HKLM\\SYSTEM\\SYSTEM\\HardwareConfig\\Current\\ComputerIds\\{15b1faea-bb96-5306-970c-c0b2f75b9f44}",
        L"HKLM\\SYSTEM\\SYSTEM\\HardwareConfig\\Current\\ComputerIds\\{7f5be75a-98b9-5a5e-b023-1fddc1edb07c}",
        L"HKLM\\SYSTEM\\ControlSet001\\Control\\Class\\{4d36e968-e325-11ce-bfc1-08002be10318}\\0000\\HardwareInformation.ChipType",
        L"HKLM\\SYSTEM\\ControlSet001\\Control\\Class\\{4d36e968-e325-11ce-bfc1-08002be10318}\\0000\\HardwareInformation.DacType",
        L"HKLM\\SYSTEM\\ControlSet001\\Control\\Class\\{4d36e968-e325-11ce-bfc1-08002be10318}\\0034\\HardwareInformation.ChipType",
        L"HKLM\\SYSTEM\\ControlSet001\\Control\\Class\\{4d36e968-e325-11ce-bfc1-08002be10318}\\0034\\HardwareInformation.DacType",
        L"HKLM\\SYSTEM\\ControlSet001\\Control\\Video\\{7B7FACFD-546F-11EB-9CF1-806E6F6E6963}\\0000\\HardwareInformation.ChipType",
        L"HKLM\\SYSTEM\\ControlSet001\\Control\\Video\\{7B7FACFD-546F-11EB-9CF1-806E6F6E6963}\\0000\\HardwareInformation.DacType",
        L"HKLM\\SYSTEM\\CurrentControlSet\\Control\\Class\\{4d36e968-e325-11ce-bfc1-08002be10318}\\0000\\HardwareInformation.ChipType",
        L"HKLM\\SYSTEM\\CurrentControlSet\\Control\\Class\\{4d36e968-e325-11ce-bfc1-08002be10318}\\0000\\HardwareInformation.DacType",
        L"HKLM\\SYSTEM\\CurrentControlSet\\Control\\Class\\{4d36e97d-e325-11ce-bfc1-08002be10318}\\0034\\HardwareInformation.ChipType",
        L"HKLM\\SYSTEM\\CurrentControlSet\\Control\\Class\\{4d36e97d-e325-11ce-bfc1-08002be10318}\\0034\\HardwareInformation.DacType",
        L"HKLM\\SYSTEM\\CurrentControlSet\\Control\\Video\\{7B7FACFD-546F-11EB-9CF1-806E6F6E6963}\\0000\\HardwareInformation.ChipType",
        L"HKLM\\SYSTEM\\CurrentControlSet\\Control\\Video\\{7B7FACFD-546F-11EB-9CF1-806E6F6E6963}\\0000\\HardwareInformation.DacType"
    };

    // Specify registry value
    const wchar_t* valueName = L"BIOSVersion";
    const wchar_t* valueData = L"INTEL";
}

#endif // REGISTRY_KEYS_H
