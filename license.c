#ifndef LICENSE_H
#define LICENSE_H

#include <stdio.h>
#include <string.h>

#define MAX_LICENSE_KEY_LENGTH 50
#define MAX_SOFTWARE_NAME_LENGTH 50
#define MAX_REQUESTER_NAME_LENGTH 50

typedef struct {
    int id;
    char software_name[MAX_SOFTWARE_NAME_LENGTH];
    char license_key[MAX_LICENSE_KEY_LENGTH];
    char requester_name[MAX_REQUESTER_NAME_LENGTH];
    char request_date[11]; // YYYY-MM-DD
    char approval_status[20]; // "pending", "approved", "rejected"
} License;

#endif