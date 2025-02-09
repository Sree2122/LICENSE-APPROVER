#include "license.h"
#include <stdio.h>

void save_licenses() {
    FILE *file = fopen("licenses.dat", "wb");
    if (file == NULL) {
        perror("Error opening file for saving");
        return;
    }
    fwrite(licenses, sizeof(License), num_licenses, file);
    fclose(file);
}

void load_licenses() {
    FILE *file = fopen("licenses.dat", "rb");
    if (file == NULL) {
        return; // File doesn't exist
    }
    num_licenses = fread(licenses, sizeof(License), MAX_LICENSES, file);
    if (ferror(file)) {
        perror("Error reading file");
    }
    fclose(file);
}