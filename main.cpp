/*
 *
 *
 */

 #include <iostream>

#include "cctype"//toupper
using namespace std;
 void menu();

int main(){
    string pswd;
    char choice;

    menu();
    cin >> choice;
    toupper(choice);//Need to fix this
    do {
        switch (choice) {
            case 'A'://call encrypt
                break;
            case 'B'://call decrypt
                break;
            case 'Q':
                break;
            default:
                cout << "Invalid Choice. Try Again.\n";
        }
        menu();
        cin >> choice;
        toupper(choice);
    }while(choice != 'Q' || choice != 'q');
    return 0;
}
void menu(){
    cout << "Welcome to The Decrypter 1.0\n";
    cout << "A) Encrypt a password\n";
    cout << "B) Decrypt a password\n";
    cout << "Q) Quit\n";
}
