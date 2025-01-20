#include <iostream>

using namespace std;

int main() {
    // Declare variable to scure the student's score
    int score;

    //Input: Get the studnet's score
    cout << "Enter the studnet score (0-100): ";
    cin >> score;

    //Ensure the score is valid
    if (score < 0 || score > 100) {
        cout << " invalid score ! please enter a score between 0 and 100." << endl;
    } else {
        // Grade Qulaification based on the score
        if (score >= 90 && score <= 100) {
            cout << "Grade: A" << endl;
            cout << "Excellent Grade!" << endl;
        } else if (score >= 80 && score <= 100) {
            cout << "Grade: B" << endl;
            cout << " Good!" << endl;
        } else if (score >= 70 && score <= 100) {
            cout << "Grade: C" << endl;
            cout << "satisfactory!" << endl;
        } else if (score >= 60 && score <= 100) {
            cout << "Grade: D" << endl;
            cout << "paas!" << endl;
        } else if (score >= 50 && score <= 100) {
            cout << "Grade: F" << endl;
            cout<< "failed" << endl;
        }
    }
    return 0;
}