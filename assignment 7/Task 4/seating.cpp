#include <iostream>
using namespace std;

int main() {
    char seats[5][5];
    int choice;

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            seats[i][j] = 'O';

    do {
        cout << "\n--- Menu ---" << endl;
        cout << "1.Reserve a seat\n2.Count attendees by profession\n3.Count available seats\n0.Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        cout << "\n";

        if (choice == 1) {
            int row, column;
            cout << "Enter row (1-5): ";
            cin >> row;
            cout << "Enter column (1-5): ";
            cin >> column;
            row--; 
            column--;

            if (row < 0 || row > 4 || column < 0 || column > 4) {
                cout << "Invalid seat!" << endl;
            }
            else if (seats[row][column] != 'O') {
                cout << "Seat already taken." << endl;
            }
            else {
                cout << "Profession (F = Finance, M = Marketing, E = Engineering): ";
                char prof;
                cin >> prof;
                if (prof == 'F' || prof == 'M' || prof == 'E') {
                    seats[row][column] = prof;
                    cout << "Seat reserved." << endl;
                }
                else {
                    cout << "Invalid profession." << endl;
                }
            }
            cout << "\nSeat Matrix:" << endl;
            
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++)
                    cout << seats[i][j] << " ";
                cout << endl;
            }

        }
        else if (choice == 2) {
            int f = 0, m = 0, e = 0;
            for (int i = 0; i < 5; i++)
                for (int j = 0; j < 5; j++) {
                    if (seats[i][j] == 'F') f++;
                    else if (seats[i][j] == 'M') m++;
                    else if (seats[i][j] == 'E') e++;
                }
            cout << "Finance:     " << f << endl;
            cout << "Marketing:   " << m << endl;
            cout << "Engineering: " << e << endl;

        }
        else if (choice == 3) {
            int available = 0;
            for (int i = 0; i < 5; i++)
                for (int j = 0; j < 5; j++)
                    if (seats[i][j] == 'O')
                    available++;
            cout << "\nAvailable seats: " << available << endl;
        }
    } while (choice != 0);

    return 0;
}