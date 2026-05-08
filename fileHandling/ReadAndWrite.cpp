#include <iostream>
#include <fstream>
using namespace std;

// Employee Class
class Employee {
private:
    int eid;
    char ename[50];
    char edept[50];
    int esalary;

public:
    void getData() {
        cout << "\nEnter Employee ID: ";
        cin >> eid;
        cout << "Enter Name: ";
        cin >> ename;
        cout << "Enter Department: ";
        cin >> edept;
        cout << "Enter Salary: ";
        cin >> esalary;
    }

    void showData() {
        cout << "\nID: " << eid;
        cout << "\nName: " << ename;
        cout << "\nDepartment: " << edept;
        cout << "\nSalary: " << esalary << endl;
    }
};

// File Handling Class
class EmpFile {
public:

    // Write Data (Append Mode)
    void diskin() {
        char choice;

        fstream fout("C:\\Users\\Acer\\OneDrive\\programs\\c++\\new.txt", ios::app);

        if (fout.is_open()) {
            do {
                Employee E;
                E.getData();

                fout.write((char*)&E, sizeof(E));

                cout << "\nWant to continue (y/n): ";
                cin >> choice;

            } while (choice == 'y' || choice == 'Y');

            fout.close();
        } else {
            cout << "File Error!";
        }
    }

    // Read Data
    void diskout() {
        fstream fin("C:\\Users\\Acer\\OneDrive\\programs\\c++\\new.txt", ios::in);

        if (fin.is_open()) {
            Employee buffer;

            while(fin.read((char*)&buffer, sizeof(buffer))) {
                buffer.showData();
            }

            fin.close();
        } else {
            cout << "File Error!";
        }
    }
};

// Main Function with Menu
int main() {
    EmpFile EF;
    int ch;

    do {
        cout << "\n------ File Menu ------";
        cout << "\n1. Write Data";
        cout << "\n2. Read Data";
        cout << "\n3. Exit";
        cout << "\n----------------------";
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                EF.diskin();
                break;

            case 2:
                EF.diskout();
                break;

            case 3:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while (ch != 3);

    return 0;
}
//raw.exe