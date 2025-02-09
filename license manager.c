#include "license.h"
#include <stdlib.h>
#include <string.h> // For string comparison

#define MAX_LICENSES 100

License licenses[MAX_LICENSES];
int num_licenses = 0;

void add_license(int id, const char *software_name, const char *license_key, const char *requester_name, const char *request_date);
void list_licenses();
void approve_license(int id);
void reject_license(int id);
int find_license_index(int id); // Helper function
void save_licenses();
void load_licenses();