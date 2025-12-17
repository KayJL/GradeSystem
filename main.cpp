#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    int n;
    float total = 0, mark, average;

    cout << "Enter student name: ";
    cin >> studentName;   

    cout << "Enter number of subjects: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Enter mark for subject " << i << ": ";
        cin >> mark;
        total += mark;
    }

    average = total / n;

    cout << "\nStudent: " << studentName << endl;
    cout << "Average: " << average << "%" << endl;


    if (average >= 90)
        cout << "Grade: A (Excellent)";
    else if (average >= 75)
        cout << "Grade: B (Very Good)";
    else if (average >= 60)
        cout << "Grade: C (Passed)";
    else
        cout << "Grade: F (Failed)";

    return 0;
}
