#include <string>

using namespace std;

class Student {
public:
    Student(string name, int average)
    : name(name){
        setAverage(average);
    }

    void setAverage(int average) {
        if (average > 0 && average <= 100) {
            this->average = average;
        }
    }

    int getAverage() const {
        return average;
    }

    void setName(string name) {
        this->name = name;
    }

    string getName() const {
        return name;
    }

    string getLetterGrade() const {
        if (average >= 90) {
            return "A";
        }

        if (average >= 80) {
            return "B";
        }

        if (average >= 70) {
            return "C";
        }

        if (average >= 60) {
            return "D";
        }

        return "F";
    }

private:
    string name;
    int average{0};
};