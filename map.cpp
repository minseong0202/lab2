#include <iostream>
#include <string>
#include <map>

using namespace std;

struct Student {
    int midterm;
    int final;
};

int main() {
    int numStudents;
    cout << "학생 수를 입력: ";
    cin >> numStudents;

    map<string, Student> studentMap;

    for (int i = 0; i < numStudents; i++) {
        string name;
        Student student;

        cout << (i + 1) << "번째 학생의 이름 입력: ";
        cin >> name;
        cout << name << "의 중간 점수 입력: ";
        cin >> student.midterm;
        cout << name << "의 기말 점수 입력: ";
        cin >> student.final;

        
        studentMap[name] = student;
    }

    cout << "\n학생 정보:\n";
    for (const auto& entry : studentMap) {
        cout << "이름: " << entry.first 
             << ", 중간 점수: " << entry.second.midterm 
             << ", 기말 점수: " << entry.second.final << endl;
    }

    string searchName;
    cout << "\n검색할 학생의 이름을 입력";
    cin >> searchName;


    auto it = studentMap.find(searchName);
    if (it != studentMap.end()) {
        cout << "찾음 - 이름: " << it->first 
             << ", 중간 점수: " << it->second.midterm 
             << ", 기말 점수: " << it->second.final << endl;
    } else {
        cout << "해당 학생을 찾을 수 없다.\n";
    }

    return 0;
}

