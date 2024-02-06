#include "StudentTableHeader.h"

int main()
{
    Student student1(1, "Manoj", "11", "Noida", {"1234567890", "9876543210"}, {"English", "Maths", "Geography"}, "A", {"Cricket", "Football", "Soccer"});
    Student student2(2, "Dinesh", "10", "Mumabi", {"1234567890", "9876543210"}, {"English", "Maths", "Bio"}, "B", {"Cricket", "Football", "Hockey"});
    Student student3(3, "Sunil", "12", "Pune", {"1234567890", "9876543210"}, {"English", "Maths", "Physics"}, "C", {"Cricket", "Football"});
    Student student4(4, "Vivek", "9", "Bengaluru", {"1234567890", "9876543210"}, {"English", "Maths", "Science"}, "D", {"Cricket", "Football", "Golf"});
    Student student5(4, "Sameer", "9", "Delhi", {"1234567890", "9876543210"}, {"English", "Maths", "Science"}, "E", {"Cricket", "Football", "Wressing", "Tennis"});

    studentDetailsStatic.push_back(student1);
    studentDetailsStatic.push_back(student2);
    studentDetailsStatic.push_back(student3);
    studentDetailsStatic.push_back(student4);
    studentDetailsStatic.push_back(student5);

    cout << "-------------------------------------------------------" << endl;
    cout << student1.getName() << endl;
    cout << GetClass(3) << endl;
    cout << SearchStudent("Sunil") << endl;

    printList(GetContacts(3));
    printList(GetSubjects(3));
    printList(GetSubjectsWiseStudentNames("Maths"));
    printList(GetGradeWiseStudentNames("C"));
    printList(GetSportName("Sunil"));
    cout << "-------------------------------------------------------" << endl;

    list<Student> list = ConvertToList(studentDetailsStatic);
}