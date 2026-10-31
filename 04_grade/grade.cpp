
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string name;
    int journalNumber;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter journal number: ";
    cin >> journalNumber;

    int n = 5 + (journalNumber % 5);
    int grades[10];

    cout << "Enter " << n << " grades from 2 to 5, separated by spaces:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> grades[i];

        while (grades[i] < 2 || grades[i] > 5) {
            cout << "Enter a grade from 2 to 5: ";
            cin >> grades[i];
        }
    }

    int sum = 0;
    int minGrade = grades[0];
    int maxGrade = grades[0];
    int twos = 0;

    for (int i = 0; i < n; i++) {
        sum += grades[i];

        if (grades[i] < minGrade) {
            minGrade = grades[i];
        }

        if (grades[i] > maxGrade) {
            maxGrade = grades[i];
        }

        if (grades[i] == 2) {
            twos++;
        }
    }

    cout << fixed << setprecision(2);
    cout << "\nStudent: " << name << endl;
    cout << "Number of grades: " << n << endl;
    cout << "Average grade: " << (double)sum / n << endl;
    cout << "Minimum grade: " << minGrade << endl;
    cout << "Maximum grade: " << maxGrade << endl;
    cout << "Number of twos: " << twos << endl;

    return 0;
}
