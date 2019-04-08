//
//  main.cpp
//  Banking System
//
//  Created by Andrew Nguyen on 4/8/19.
//

#include "SystemAdmin.cpp"
#include "Manager.cpp"
#include "Teller.cpp"
#include "Auditor.cpp"
#include "Accountant.cpp"
#include <iostream>

using namespace std;

void tellerMenu();
void managerMenu();
void systemAdminMenu();
void auditorMenu();
void accountantMenu();

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int ch = 0;
    
    while(ch != 6) {
        cout << "MAIN MENU" << endl;
        cout << "1. TELLER MENU" << endl;
        cout << "2. MANAGER MENU" << endl;
        cout << "3. SYSTEM ADMIN MENU" << endl;
        cout << "4. AUDITOR MENU" << endl;
        cout << "5. ACCOUNTANT MENU" << endl;
        cout << "6. QUIT" << endl;
        cout << "Option: ";
        cin >> ch;
        
        if(ch > 0 && ch < 6) {
            switch(ch) {
                case 1:
                    tellerMenu();
                    break;
                case 2:
                    managerMenu();
                    break;
                case 3:
                    systemAdminMenu();
                    break;
                case 4:
                    auditorMenu();
                    break;
                case 5:
                    accountantMenu();
                    break;
            }
        }
        else if(ch == 6) {
            cout << "\nExiting Banking System...." << endl;
        }
        else {
            cout << "\nYou have entered an invalid option, please try again." << endl;
            cout << "--------------------------------\n" << endl;
        }
    }
    
    return 0;
}

void tellerMenu() {
    Teller teller;
    int ch = 0;
    
    cout << "\n==========================================================" << endl;
    cout << "Welcome to the Teller menu. Please select an option below:" << endl;
    cout << "1. Open Account" << endl;
    cout << "2. Close Account" << endl;
    cout << "3. Check Account Information" << endl;
    cout << "4. Return to Main Menu" << endl;
    cout << "Option: ";
    cin >> ch;
    cout << "==========================================================\n" << endl;
    
    if(ch > 0 && ch < 4) {
        switch(ch) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
        }
    }
    else if(ch == 4) {
        cout << "\nReturning to Main Menu...." << endl;
    }
    else {
        cout << "\nYou have entered an invalid option, please try again." << endl;
        cout << "--------------------------------\n" << endl;
    }
}

void managerMenu() {
    Manager manager;
    int ch = 0;
    
    cout << "\n==========================================================" << endl;
    cout << "Welcome to the Manager menu. Please select an option below:" << endl;
    cout << "1. Check Quota" << endl;
    cout << "2. Open Customer Account" << endl;
    cout << "3. Close Customer Account" << endl;
    cout << "4. Check Customer Account Information" << endl;
    cout << "5. Create Employee Account" << endl;
    cout << "6. Close Emeployee Account" << endl;
    cout << "7. Return to Main Menu" << endl;
    cout << "Option: ";
    cin >> ch;
    cout << "==========================================================\n" << endl;
    
    if(ch > 0 && ch < 7) {
        switch(ch) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
        }
    }
    else if(ch == 7) {
        cout << "\nReturning to Main Menu...." << endl;
    }
    else {
        cout << "\nYou have entered an invalid option, please try again." << endl;
        cout << "--------------------------------\n" << endl;
    }
}

void systemAdminMenu() {
    SystemAdmin sysad;
    int ch = 0;
    
    cout << "\n==========================================================" << endl;
    cout << "Welcome to the System Admin menu. Please select an option below:" << endl;
    cout << "1. Schedule Security Fix" << endl;
    cout << "2. Schedule Backup" << endl;
    cout << "3. Run Patches" << endl;
    cout << "4. Generate Logs" << endl;
    cout << "5. Enable Maintenance Mode" << endl;
    cout << "6. Return to Main Menu" << endl;
    cout << "Option: ";
    cin >> ch;
    cout << "==========================================================\n" << endl;
    
    if(ch > 0 && ch < 6) {
        switch(ch) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
        }
    }
    else if(ch == 6) {
         cout << "\nReturning to Main Menu...." << endl;
    }
    else {
        cout << "\nYou have entered an invalid option, please try again." << endl;
        cout << "--------------------------------\n" << endl;
    }
}

void auditorMenu() {
    Auditor auditor;
    int ch = 0;
    
    cout << "\n==========================================================" << endl;
    cout << "Welcome to the Auditor menu. Please select an option below:" << endl;
    cout << "1. Export Customer Data" << endl;
    cout << "2. Check Account Information (High Level)" << endl;
    cout << "3. Run Audit Check" << endl;
    cout << "4. Return to Main Menu" << endl;
    cout << "Option: ";
    cin >> ch;
    cout << "==========================================================\n" << endl;
    
    if(ch > 0 && ch < 4) {
        switch(ch) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
        }
    }
    else if(ch == 4) {
        cout << "\nReturning to Main Menu...." << endl;
    }
    else {
        cout << "\nYou have entered an invalid option, please try again." << endl;
        cout << "--------------------------------\n" << endl;
    }
}

void accountantMenu() {
    Accountant accountant;
    int ch = 0;
    
    cout << "\n==========================================================" << endl;
    cout << "Welcome to the Accountan t menu. Please select an option below:" << endl;
    cout << "1. Check Account Information" << endl;
    cout << "2. Run Discrepencies Check" << endl;
    cout << "3. Edit Customer Fees" << endl;
    cout << "4. Return to Main Menu" << endl;
    cout << "Option: ";
    cin >> ch;
    cout << "==========================================================\n" << endl;
    
    if(ch > 0 && ch < 4) {
        switch(ch) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
        }
    }
    else if(ch == 4) {
         cout << "\nReturning to Main Menu...." << endl;
    }
    else {
        cout << "\nYou have entered an invalid option, please try again." << endl;
        cout << "--------------------------------\n" << endl;
    }
}