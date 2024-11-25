#include <iostream>
using namespace std;

int main() {

     cout << "--------------------------------------------------------------------\n"; 
      cout << "--------------------------------------------------------------------\n"; 
    int language, services;

    // Language menu
    cout << "Press 1 for English" << endl;
    cout << "Press 2 for Hindi" << endl;
    cout << "Press 3 for Gujarati" << endl;
    cout << "Enter your choice: ";
    cin >> language;

    // Outer switch for language selection
    switch (language) {
        case 1: // English
            cout << "You have selected English." << endl;
            cout << "Press 1 for Internet Recharge" << endl;
            cout << "Press 2 for Top-up Recharge" << endl;
            cout << "Press 3 for Special Recharge" << endl;
            cout << "Enter your choice: ";
            cin >> services;

            // Inner switch for service selection
            switch (services) {
                case 1:
                    cout << "You have successfully done an Internet Recharge." << endl;
                    break;
                case 2:
                    cout << "You have successfully done a Top-up Recharge." << endl;
                    break;
                case 3:
                    cout << "You have successfully done a Special Recharge." << endl;
                    break;
                default:
                    cout << "Invalid service choice." << endl;
            }
            break;

            case 2: // HINDI
            cout << "You have selected Hindi." << endl;
            cout << "Press 1 for Internet Recharge" << endl;
            cout << "Press 2 for Top-up Recharge" << endl;
            cout << "Press 3 for Special Recharge" << endl;
            cout << "Enter your choice: ";
            cin >> services;

            // Inner switch for service selection
            switch (services) {
                case 1:
                    cout << "You have successfully done an Internet Recharge." << endl;
                    break;
                case 2:
                    cout << "You have successfully done a Top-up Recharge." << endl;
                    break;
                case 3:
                    cout << "You have successfully done a Special Recharge." << endl;
                    break;
                default:
                    cout << "Invalid service choice." << endl;
            }
            break;

            case 3: // GUJRATI
            cout << "You have selected Gujrati." << endl;
            cout << "Press 1 for Internet Recharge" << endl;
            cout << "Press 2 for Top-up Recharge" << endl;
            cout << "Press 3 for Special Recharge" << endl;
            cout << "Enter your choice: ";
            cin >> services;

            // Inner switch for service selection
            switch (services) {
                case 1:
                    cout << "You have successfully done an Internet Recharge." << endl;
                    break;
                case 2:
                    cout << "You have successfully done a Top-up Recharge." << endl;
                    break;
                case 3:
                    cout << "You have successfully done a Special Recharge." << endl;
                    break;
                default:
                    cout << "Invalid service choice." << endl;
            }
            break;
    }
}