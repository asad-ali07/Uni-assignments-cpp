#include <iostream>
using namespace std;

int main() {
    int time[6] = { 1, 2, 3, 4, 5, 6 };
    char direction;
    int steps;
    char again;

    cout << "Initial Time: " << time[0] << time[1] << " : " << time[2] << time[3] << " : " << time[4] << time[5] << endl;

    
    do {
        cout << "Do you want to rotate left or right? (L/R): ";
        cin >> direction;
        cout << "How many steps do you want to rotate? ";
        cin >> steps;
        
        for (int i = 0; i < steps; i++) {
            if (direction == 'L' || direction == 'l') {
                int new_time = time[0];
                for (int j = 0; j < 5; j++) {
                    time[j] = time[j + 1];
                }
                time[5] = new_time;

            }
            else if (direction == 'R' || direction == 'r') {
                int temp = time[5];
                for (int j = 5; j > 0; j--) {
                    time[j] = time[j - 1];
                }
                time[0] = temp;
            }
            else {
                cout << "Invalid input!" << endl;
            }
        }
        cout << "Time after rotating " << direction << " by " << steps << " steps: " << time[0] << time[1] << " : " << time[2] << time[3] << " : " << time[4] << time[5] << endl;
        
        cout << "Do you want to rotate again? (Y/N): ";
        cin >> again;
    } while (again == 'Y' || again == 'y');


    return 0;
}