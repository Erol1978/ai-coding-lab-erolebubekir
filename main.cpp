#include <iostream>
#include "GradeBook.h"

using namespace std;

int main() {
    GradeBook book;

    cout << "Empty grade book:" << endl;
    cout << "Number of grades: " << book.numGrades() << endl;
    cout << "Average: " << book.getAverage() << endl;
    cout << "Highest: " << book.getHighest() << endl;

    book.addGrade("Lab 1", 90);
    book.addGrade("Lab 2", 85);
    book.addGrade("Lab 3", 100);

    cout << endl;
    cout << "After adding grades:" << endl;
    cout << "Number of grades: " << book.numGrades() << endl;
    cout << "Average: " << book.getAverage() << endl;
    cout << "Highest: " << book.getHighest() << endl;

    return 0;
}
