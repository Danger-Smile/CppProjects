#include <iostream>
#include <string>
using namespace std;

struct Customer {
    string name;
    string phone;
    int days;
    int roomNo;
    bool booked;
};

const int MAX_ROOMS = 50;   
Customer hotel[MAX_ROOMS + 1]; // Index 1 to 50

void bookRoom() {
    int room;
    cout << "\nEnter Room Number (1 - " << MAX_ROOMS << "): ";
    cin >> room;

    if (room < 1 || room > MAX_ROOMS) {
        cout << "Invalid room number!\n";
        return;
    }
    if (hotel[room].booked) {
        cout << "Room already booked!\n";
        return;
    }

    cin.ignore();
    cout << "Enter Customer Name: ";
    getline(cin, hotel[room].name);

    cout << "Enter Phone Number: ";
    getline(cin, hotel[room].phone);

    cout << "Enter Number of Days: ";
    cin >> hotel[room].days;

    hotel[room].roomNo = room;
    hotel[room].booked = true;

    cout << "Room " << room << " booked successfully!\n";
}

void showAllCustomers() {
    cout << "\n===== All Customers =====\n";
    bool found = false;
    for (int i = 1; i <= MAX_ROOMS; i++) {
        if (hotel[i].booked) {
            found = true;
            cout << "Room No: " << hotel[i].roomNo << endl;
            cout << "Name   : " << hotel[i].name << endl;
            cout << "Phone  : " << hotel[i].phone << endl;
            cout << "Days   : " << hotel[i].days << endl;
            cout << "-------------------------\n";
        }
    }
    if (!found) {
        cout << "No customers found!\n";
    }
}

void searchCustomer() {
    int room;
    cout << "\nEnter Room Number to Search: ";
    cin >> room;

    if (room < 1 || room > MAX_ROOMS) {
        cout << "Invalid room number!\n";
        return;
    }
    if (!hotel[room].booked) {
        cout << "No customer in this room.\n";
        return;
    }

    cout << "\nCustomer Found!\n";
    cout << "Room No: " << hotel[room].roomNo << endl;
    cout << "Name   : " << hotel[room].name << endl;
    cout << "Phone  : " << hotel[room].phone << endl;
    cout << "Days   : " << hotel[room].days << endl;
}

void generateBill() {
    int room;
    int rentPerDay = 2000;
    cout << "\nEnter Room Number for Bill: ";
    cin >> room;

    if (room < 1 || room > MAX_ROOMS) {
        cout << "Invalid room number!\n";
        return;
    }
    if (!hotel[room].booked) {
        cout << "No customer in this room.\n";
        return;
    }

    int total = hotel[room].days * rentPerDay;

    cout << "\n===== Bill =====\n";
    cout << "Customer: " << hotel[room].name << endl;
    cout << "Room No : " << hotel[room].roomNo << endl;
    cout << "Days    : " << hotel[room].days << endl;
    cout << "Total   : " << total << " PKR\n";
    cout << "=================\n";
}

int main() {
    int choice;

    // Initialize all rooms as not booked
    for (int i = 1; i <= MAX_ROOMS; i++) {
        hotel[i].booked = false;
    }

    do {
        cout << "\n===== Hotel Management System =====\n";
        cout << "1. Book a Room\n";
        cout << "2. Show All Customers\n";
        cout << "3. Search Customer\n";
        cout << "4. Generate Bill\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                bookRoom();
                break;
            case 2:
                showAllCustomers();
                break;
            case 3:
                searchCustomer();
                break;
            case 4:
                generateBill();
                break;
            case 5:
                cout << "Exiting... Thank you!\n";
                break;
            default:
                cout << "Invalid choice, try again.\n";
        }
    } while (choice != 5);

    return 0;
}
