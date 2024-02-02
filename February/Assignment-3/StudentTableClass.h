#include <bits/stdc++.h>

using namespace std;

void const printList(list<string> list)
{
    for (auto i = list.begin(); i != list.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}
class Student
{
private:
    int RollNum;
    string Name;
    string Class;
    string Address;
    list<string> ContactNum;
    list<string> SubjectName;
    string Grade;
    list<string> Sport;

public:
    Student(int rollNum, string name, string classs, string address, list<string> contactNum, list<string> subjectName, string grade, list<string> sport)
        : RollNum(rollNum), Name(name), Class(classs), Address(address), ContactNum(contactNum), SubjectName(subjectName), Grade(grade), Sport(sport)
    {
    }

    void print() const
    {
        cout << "RollNum: " << this->RollNum << endl;
        cout << "Name: " << this->Name << endl;
        cout << "Class: " << this->Class << endl;
        cout << "Address: " << this->Address << endl;

        cout << "ContactNum: ";
        printList(this->ContactNum);

        cout << "SubjectName: ";
        printList(this->SubjectName);

        cout << "Grade: " << this->Grade << endl;

        cout << "Sport: ";
        printList(this->Sport);
    }

    // Getters to retrieve the data from the class
    int getRollNum() const
    {
        return this->RollNum;
    }
    string getName() const
    {
        return this->Name;
    }
    string getClass() const
    {
        return this->Class;
    }
    string getAddress() const
    {
        return this->Address;
    }
    list<string> getContactNum() const
    {
        return this->ContactNum;
    }

    list<string> getSubjectName() const
    {
        return this->SubjectName;
    }

    string getGrade() const
    {
        return this->Grade;
    }
    list<string> getSport() const
    {
        return this->Sport;
    }
};
