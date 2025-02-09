#include <stdio.h>
#include "license.h"
#include "license_report.h"
#include "data_persistence.h"

int main() {
    int choice;
    load_licenses();

    do {
        printf("\nLicense Approval Manager\n");
        printf("1. Add License Request\n");
        printf("2. List Licenses\n");
        printf("3. Approve License\n");
        printf("4. Reject License\n");
        printf("5. Generate Pending Requests Report\n");
        printf("6. Generate Approved Licenses Report\n");
        printf("7. Generate Rejected Licenses Report\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int id;
                char software_name[MAX_SOFTWARE_NAME_LENGTH];
                char license_key[MAX_LICENSE_KEY_LENGTH];
                char requester_name[MAX_REQUESTER_NAME_LENGTH];
                char request_date[11];

                printf("Enter license ID: ");
                scanf("%d", &id);
                printf("Enter software name: ");
                scanf(" %[^\n]s", software_name);
                printf("Enter license key: ");
                scanf(" %[^\n]s", license_key);
                printf("Enter requester name: ");
                scanf(" %[^\n]s", requester_name);
                printf("Enter request date (YYYY-MM-DD): ");
                scanf("%s", request_date);

                add_license(id, software_name, license_key, requester_name, request_date);
                break;
            }
            case 2:
                list_licenses();
                break;
            case 3: {
                int id;
                printf("Enter license ID to approve: ");
                scanf("%d", &id);
                approve_license(id);
                break;
            }
            case 4: {
                int id;
                printf("Enter license ID to reject: ");
                scanf("%d", &id);
                reject_license(id);
                break;
            }
            case 5:
                generate_pending_requests_report();
                break;
            case 6:
                generate_approved_licenses_report();
                break;
            case 7:
                generate_rejected_licenses_report();
                break;
            case 0:
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 0);

    save_licenses();
    return 0;
}