
#include <iostream>
#include <string>
using namespace std;

void printProfile(string name, string city, int age) {
    cout << "\n Profile \n";
    cout << "Name: " << name << endl;
    cout << "City: " << city << endl;
    cout << "Age: " << age << endl;
    cout << "\n";
}

int calculateAge(int age) {
    return age + 5;
}

int main() {
    string name, city;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);
    if (name.empty()) {
        cout << "Error: name could not be empty!\n";
        return 1;
    }

    cout << "Enter your city: ";
    getline(cin, city);
    if (city.empty()){
        cout << "Error: city could not be empty!\n";
        return 1;
    }

    cout << "Enter your age: ";
    cin >> age;

    if (age < 1 || age > 120) {
        cout << "Invalid age!" << endl;
        return 1;
    }

    printProfile(name, city, age);

    cout << "Age in 5 years: "
         << calculateAge(age) << endl;

    return 0;
}

