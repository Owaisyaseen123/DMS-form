#include <iostream>
#include <string>
using namespace std;

// Base class
class DataSystem {
protected:
    int rollNos[100] = {2161, 2162, 2163, 2164, 2165, 2166, 2167, 2168, 2169, 2170, 2171, 2172, 2173, 2174, 2175, 2176, 2178, 2178, 2179, 2180, 2181, 2182, 2183, 2184, 2185, 2186};
    string names[100] = {"Umar Sarwar", "Muhammad Wamiq", "Zain Shahid", "Ashar Ashaf", "Awais Ishfaq", "Muhammad Umair", "Nadie Abbas", "Rabia Arshad", "Atkah Zubair", "Atkah Zubair X", "Aqsa Aslam", "Sadia Nadeem", "Kisa E Zahra", "Hassan Raza", "Hassan Raza", "Hamza Farooq", "Tanveer Ahmed", "Muhammad Talal", "Tehseen", "sUbHaN", "Malik Abdul Rahman Darahala", "Aneela Aslam", "Muhammad Abubakar", "Muhammad Haseeb", "Muhammad Dawood", "Subhan Shah"};
    int count = 26;

public:
    void addStudent(int rollNo, string name) {
        if (count < 100) {
            rollNos[count] = rollNo;
            names[count] = name;
            count++;
            cout << "Student added successfully.\n";
        } else {
            cout << "Cannot add more students. Limit reached.\n";
        }
    }

    void viewStudents() {
        if (count == 0) {
            cout << "No student data available.\n";
        } else {
            cout << "Stored Students:\n";
            for (int i = 0; i < count; i++) {
                cout << i + 1 << ". Roll No: " << rollNos[i] << ", Name: " << names[i] << endl;
            }
        }
    }
};

// Derived class
class SearchSystem : public DataSystem {
public:
    void searchByRollNo(int targetRollNo) {
        bool found = false;
        for (int i = 0; i < count; i++) {
            if (rollNos[i] == targetRollNo) {
                cout << "Student found: Roll No: " << rollNos[i] << ", Name: " << names[i] << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Student with Roll No " << targetRollNo << " not found.\n";
        }
    }
};

// Main function
int main() {
    SearchSystem system;
    int choice, rollNo;
    string name;

    do {
        cout << "\n===== Student DMS Menu =====\n";
        cout << "1. Add Student\n";
        cout << "2. View All Students\n";
        cout << "3. Search Student by Roll No\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter Roll No: ";
                cin >> rollNo;
                cin.ignore();
                cout << "Enter Name: ";
                getline(cin, name);
                system.addStudent(rollNo, name);
                break;
            case 2:
                system.viewStudents();
                break;
            case 3:
                cout << "Enter Roll No to search: ";
                cin >> rollNo;
                system.searchByRollNo(rollNo);
                break;
            case 4:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
