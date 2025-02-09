This is a simple License Approval Manager application written in C. It manages software license requests, allowing administrators to approve or reject them. The application tracks license details, requester information, and approval status. Data is persisted to a file.

## Features

*   Add license requests with software name, license key, requester name, and request date.
*   List all license requests.
*   Approve license requests.
*   Reject license requests.
*   Generate reports:
    *   Pending requests.
    *   Approved licenses.
    *   Rejected licenses.
*   Save and load license data from a file (`licenses.dat`).

## Build Instructions (using GCC)

1.  Save all `.c` and `.h` files in the same directory.
2.  Open a terminal or command prompt in that directory.
3.  Compile:
    ```bash
    gcc main.c license_management.c license_report.c data_persistence.c -o license_manager
    ```
4.  Run:
    ```bash
    ./license_manager
    ```

## Usage

1.  Run the executable (`./license_manager`).
2.  Follow the menu prompts to interact with the application.

## File Format

License data is stored in a binary file named `licenses.dat`. The file contains an array of `License` structs.

## Code Structure

*   `license.h`: Defines the `License` struct.
*   `license_management.c`: Implements functions to manage licenses (add, list, approve, reject, etc.).
*   `license_report.c`: Implements functions to generate reports.
*   `data_persistence.c`: Handles saving and loading license data to/from the file.
*   `main.c`: Contains the `main` function and handles user interaction.

## Future Improvements

*   Implement search and filtering functionality.
*   Add user authentication and authorization.
*   Improve error handling and input validation.
*   Consider a more robust data storage solution.
*   Add email notifications for approvals/rejections.
