#include <iostream>
#include "Student.h"

using namespace std;

int main() {
    Student john{"John Doe", 93};
    Student jane{"Jane Doe", 72};

    cout << john.getName()
        << "'s letter grade equivalent of "
        << john.getLetterGrade() << "\n";

    jane.setAverage(54);

    cout << jane.getName()
        << "'s letter grade equivalent of "
        << jane.getLetterGrade() << "\n";
}
