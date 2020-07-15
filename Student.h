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
        string letterGrade;

        if(average >= 90) {
            letterGrade = "A";
        }
        else if(average >= 80) {
            letterGrade = "B";
        }
        else if (average >= 70) {
            letterGrade = "C";
        }
        else if (average >= 60) {
            letterGrade = "D";
        }
        else {
            letterGrade = "F";
        }

        return letterGrade;
    }

private:
    string name;
    int average{0};
};