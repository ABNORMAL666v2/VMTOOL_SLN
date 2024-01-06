#include "h\modify_registry_keys.h"
#include "h\copy_to_startup_folder.h"
#include "h\export_registry_backup.h"

int main() {
    ModifyRegistryKeys();
    CopyToStartupFolder();
    ExportRegistryBackup();

    return 0;
}
// I hate cpp with a fucking burning passion 
// its 11:58 i want sleep