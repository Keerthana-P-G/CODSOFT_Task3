//   STUDENT GRADING SYSTEM     //
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
    string studentFullName;
    double studentResult;
};

int main() {
    vector<Student> studentRecords;
    int totalStudents;

    cout << "Enter the total number of students: ";
    cin >> totalStudents;

    // Input the student names and their corresponding grades.
    for (int i = 0; i < totalStudents; ++i) {
        Student currentStudent;
        cout << "Enter the full name of student " << i + 1 << ": " << endl;
        cin >> currentStudent.studentFullName;
        cout << "Enter the result of student " << i + 1 << ": " << endl;
        cin >> currentStudent.studentResult;
        studentRecords.push_back(currentStudent);
    }

    // Calculate the average result
    double sumResults = 0.0;
    for (const auto& student : studentRecords) {
        sumResults += student.studentResult;
    }
    double averageResult = sumResults / totalStudents;

    // Find highest and lowest results
    double highestResult = studentRecords[0].studentResult;
    double lowestResult = studentRecords[0].studentResult;
    for (const auto& student : studentRecords) {
        highestResult = max(highestResult, student.studentResult);
        lowestResult = min(lowestResult, student.studentResult);
    }

    // Display results
    cout << "\nStudent Records Summary:\n";
    for (const auto& student : studentRecords) {
        cout << student.studentFullName << ": " << student.studentResult << endl;
    }

    cout << "\nAverage Result: " << averageResult << endl;
    cout << "Highest Result: " << highestResult << endl;
    cout << "Lowest Result: " << lowestResult << endl;

    return 0;
}
