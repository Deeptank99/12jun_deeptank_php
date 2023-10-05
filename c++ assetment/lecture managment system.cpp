 #include <iostream>
#include <string>

using namespace std;

class Lecture {
private:
    string lecturerName;
    string subjectName;
    string courseName;
    int lectureNumber;

public:
    Lecture(){
        lecturerName ="";
        subjectName = "";
        courseName = "";
        lectureNumber = 0;
    }

    Lecture(string name, string subject, string course, int number) {
        lecturerName = name;
        subjectName = subject;
        courseName = course;
        lectureNumber = number;
    }

    void addLectureDetails(string name, string subject, string course, int number) {
        lecturerName = name;
        subjectName = subject;
        courseName = course;
        lectureNumber = number;
    }

    void displayLectureDetails() {
        cout << "Lecturer Name: " << lecturerName << endl;
        cout << "Subject Name: " << subjectName << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Lecture Number: " << lectureNumber << endl;
    }
};

int main() {
    Lecture lecturers[5];

    int lecturerCount = 0; 

    while (true) {
        cout << "lecture management system" << endl;
        cout <<"1.add lecture details" << endl;
        cout <<"2.display lecture details" << endl;
        cout <<"3.exit" << endl;
        cout <<"enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
        case 1:
            if ( lecturerCount < 5) {
                string name, subject, course;
                int number;

                cout << "enter lecturer name: ";
                cin.ignore();
                getline(cin, name);

                cout << "enter subject name: ";
                getline(cin, subject);

                cout << "enter course name: ";
                getline(cin, course);

                cout << "enter lecture Number: ";
                cin >> number;

                lecturers[lecturerCount].addLectureDetails(name, subject, course, number);
                lecturerCount++;
            }
            else {
                cout << "maximum number of lecturers reached (5)." << endl;
            }
            break;

        case 2:
            if (lecturerCount > 0) {
                for (int i = 0; i < lecturerCount; i++) {
                    cout << "lecturer " << i + 1 << " Details:" << endl;
                    lecturers[i].displayLectureDetails();
                    cout << endl;
                }
            }
            else {
                cout << "No lecturers added yet." << endl;
            }
            break;

        case 3:
            cout << "exiting the program." << endl;
            return 0;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}