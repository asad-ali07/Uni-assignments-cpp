#include <iostream>
using namespace std;

int main() {
	int original[10][10];
	int transposed[10][10];
	int students;
	int assignments;

	cout << "Enter the number of students: ";
	cin >> students;
	cout << "Enter the number of assignments: ";
	cin >> assignments;

	for (int i = 0; i < students; i++) {
		for (int j = 0; j < assignments; j++) {
			cout << "Student " << i + 1 << ", assignment " << j + 1 << ": ";
			cin >> original[i][j];
		}
	}

	cout << "\nOriginal Matrix (Students x Assignments): " << endl;

	for (int i = 0; i < students; i++) {
		for (int j = 0; j < assignments; j++) {
			cout << original[i][j] << " ";
		}
		cout << endl;
	}
	cout << "\nTransposed Matrix (Assignments x Students): " << endl;

	for (int i = 0; i < students; i++) {
		for (int j = 0; j < assignments; j++) {
			transposed[j][i] = original[i][j];
		}
	}
	for (int i = 0; i < assignments; i++) {
		for (int j = 0; j < students; j++) {
			cout << transposed[i][j] << " ";
		}
		cout << endl;
	}
	cout << "\nAverage grades for each assignment: " << endl;
	for (int i = 0; i < assignments; i++) {
		float sum = 0;
		for (int j = 0; j < students; j++) {
			sum += transposed[i][j];
		}
		float average = sum / students;
		cout << "Assignment " << i + 1 << ": " << average << endl;
	}
	return 0;
}