#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    double money = 500, newmoney;
    string password = "0000";
    string newpassword1, newpassword2, newpassword;
    string phonenumber;
    int choice;
    int counter=0;

    while (true) {
        cout << "Enter your password: ";
        cin >> newpassword1;

        if (newpassword1 == password) {
            while (true) {
                system("cls");
                cout <<"1. Withdraw funds\n";
                cout <<"2. View the amount\n";
                cout <<"3. View password\n";
                cout <<"4.Change password\n";
                cout <<"5. Connect to SMS\n";
                cout <<"6. Termination\n";
                cout <<"Enter your choice: ";
                cin >> choice;

                switch(choice) {
                    case 1:
                        cout << "How much you want to withdraw: ";
                    cin >> newmoney;
                    if (money >= newmoney && newmoney > 0) {
                        money -= newmoney;
                        cout << "The money has been withdrawn\n";
                    } else {
                        cout << "Payment error\n";
                    }
                    break;

                    case 2:
                        cout << "Your funds: " << money << endl;
                    break;

                    case 3:
                        cout << "Your password: " << password << endl;
                    break;

                    case 4:
                        cout << "Enter your old password: ";
                    cin >> newpassword;
                    cout << "Enter your new password: ";
                    cin >> newpassword1;
                    cout << "Re-enter the new password: ";
                    cin >> newpassword2;

                    if (password == newpassword && newpassword1 == newpassword2) {
                        password = newpassword1;
                        cout << "Password changed\n";
                    } else {
                        cout << "Error changing password\n";
                    }
                    break;

                    case 5:
                        cout << "Enter your phone number: ";
                    cin >> phonenumber;
                    cout << "SMS notification connected\n";
                    break;

                    case 6:
                        cout << "The operation is completed\n";
                    break;
                }
            getch();
            }
        } else {
            ++counter;
            if(counter==3) {
                cout<<"The card loced\n";
                return 0;
            }
            cout<<"Enter the wrong password\n";
        }
    }

 return 0;
}

