#include <bits/stdc++.h>

using namespace std;

typedef pair<string, string> NameClassPair;
typedef pair<string, list<string>> AddressContactPair;

typedef pair<list<string>, string> SubjectGradePair;
typedef pair<SubjectGradePair, list<string>> SubjectGradeSportsPair;

typedef pair<NameClassPair, AddressContactPair> StudentPersonalDetails;
typedef pair<SubjectGradePair, SubjectGradeSportsPair> StudentAcademicDetails;

typedef pair<StudentPersonalDetails, StudentAcademicDetails> StudentCompleteInfo;

map<int, StudentCompleteInfo> studentDetails;

/**
 * Retrieves the class name for the given roll number from the studentDetails map.
 * @brief
 * 
 * @param rollNum the roll number of the student
 *
 * @return the class name associated with the roll number
 *
 * @throws None
 */
string GetClass(int rollNum)
{
    auto it = studentDetails.find(rollNum);

    if (it == studentDetails.end())
    {
        return "Student doesnt exist";
    }
    return it->second.first.first.second;
};

/**
 * GetContacts retrieves the contacts for a student based on the given roll number.
 *
 * @param rollNum the roll number of the student
 *
 * @return a list of strings containing the student's contacts
 *
 * @throws N/A
 */
list<string> GetContacts(int rollNum)
{
    auto it = studentDetails.find(rollNum);
    if (it == studentDetails.end())
    {
        return list<string>{"Student doesnt exist"};
    }

    return it->second.first.second.second;
}

/**
 * Get the subjects for a student based on the roll number.
 *
 * @param rollNum the roll number of the student
 *
 * @return a list of strings containing the subjects
 *
 * @throws N/A
 */
list<string> GetSubjects(int rollNum)
{
    auto it = studentDetails.find(rollNum);
    if (it == studentDetails.end())
    {
        return list<string>{"Student doesnt exist"};
    }

    return it->second.second.first.first;
}

/**
 * Retrieves the list of student names for a given subject.
 *
 * @param subjectName the name of the subject to query
 *
 * @return a list of student names enrolled in the specified subject
 *
 * @throws None
 */
list<string> GetSubjectsWiseStudenNames(string subjectName)
{
    list<string> students;

    for (const auto &student : studentDetails)
    {

        for (const auto sub : student.second.second.first.first)
        {
            if (sub == subjectName)
            {
                students.push_back(student.second.first.first.first);
            }
        }
    }

    return students;
};

/**
 * Retrieves the names of students belonging to the specified grade.
 *
 * @param grade The grade for which student names are to be retrieved
 *
 * @return A list of student names belonging to the specified grade
 *
 * @throws None
 */
list<string> GetGradeWiseStudenNames(string grade)
{
    list<string> students;
    for (auto const &student : studentDetails)
    {
        if (student.second.second.first.second == grade)
        {
            students.push_back(student.second.first.first.first);
        }
    }

    return students;
};

/**
 * Retrieves the sport name for the given student name.
 *
 * @param studentName the name of the student
 *
 * @return list<string> the list of sports associated with the student
 *
 * @throws None
 */
list<string> GetSportName(string studentName)
{
    list<string> studentSport;

    for (auto const &student : studentDetails)
    {
        if (student.second.first.first.first == studentName)
        {
            studentSport = student.second.second.second.second;
        }
    }

    return studentSport;
};

int main()
{
    studentDetails[1] = make_pair(make_pair(make_pair("Manoj", "2"), make_pair("101, Future Tower, Pune", list<string>{"9988774455", "9245867890"})), make_pair(make_pair(list<string>{"Maths", "English"}, "A"), make_pair(make_pair(list<string>{"100", "100", "100"}, "A"), list<string>{"Cricket"})));
    studentDetails[2] = make_pair(make_pair(make_pair("Dinesh", "3"), make_pair("101, Future Tower, Pune", list<string>{"9889774455", "8856798656"})), make_pair(make_pair(list<string>{"Maths", "English", "Marathi", "Hindi"}, "A+"), make_pair(make_pair(list<string>{"100", "100", "100"}, "A"), list<string>{"Football"})));
    studentDetails[3] = make_pair(make_pair(make_pair("Sunil", "4"), make_pair("101, Future Tower, Pune", list<string>{"9578985694", "7045613956"})), make_pair(make_pair(list<string>{"Maths", "English", "Marathi", "Hindi"}, "B"), make_pair(make_pair(list<string>{"100", "100", "100"}, "A"), list<string>{"Basketball", "Cricket"})));
    studentDetails[4] = make_pair(make_pair(make_pair("Vivek", "6"), make_pair("101, Future Tower, Pune", list<string>{"6050403040", "9988774455"})), make_pair(make_pair(list<string>{"Maths", "English", "Marathi", "Hindi", "Computer"}, "B"), make_pair(make_pair(list<string>{"100", "100", "100"}, "A"), list<string>{"Hocky", "Cricket"})));
    studentDetails[5] = make_pair(make_pair(make_pair("Sameer", "10"), make_pair("101, Future Tower, Pune", list<string>{"5089789887", "4578987846"})), make_pair(make_pair(list<string>{"Maths", "English", "Marathi", "Hindi", "Bio", "Chemistry", "Physics"}, "A++"), make_pair(make_pair(list<string>{"100", "100", "100"}, "A"), list<string>{"Carrom", "Baseball"})));

    // sort all lists in the map
    for (auto &student : studentDetails)
    {
        student.second.first.second.second.sort();
        student.second.second.first.first.sort();
    }

    for (const auto &student : studentDetails)
    {
        cout << "Student ID: " << student.first << endl;
        cout << "Name: " << student.second.first.first.first << endl;
        cout << "Class: " << student.second.first.first.second << endl;
        cout << "Address: " << student.second.first.second.first << endl;

        cout << "Contacts: ";
        for (const auto &contact : student.second.first.second.second)
        {
            cout << contact << " ";
        }
        cout << endl;

        cout << "Subjects: ";
        for (const auto &subject : student.second.second.first.first)
        {
            cout << subject << " ";
        }
        cout << endl;

        cout << "Grade: " << student.second.second.first.second << endl;

        cout << "Sports: ";
        for (const auto &sport : student.second.second.second.second)
        {
            cout << sport << " ";
        }
        cout << endl;
        cout << "--------------------------------" << endl;
    }

    cout << "Class of Roll No. 1: " << GetClass(1) << endl;

    cout << "Contacts of Roll No. 1: ";
    for (const auto &contact : GetContacts(1))
    {
        cout << contact << " ";
    }
    cout << endl;

    cout << "Subjects of Roll No. 1: ";
    for (const auto &subject : GetSubjects(1))
    {
        cout << subject << " ";
    }
    cout << endl;

    cout << "Students with subject Maths: ";
    for (const auto &student : GetSubjectsWiseStudenNames("Maths"))
    {
        cout << student << " ";
    }
    cout << endl;

    cout << "Students with Grade A: ";
    for (const auto &student : GetGradeWiseStudenNames("A"))
    {
        cout << student << " ";
    }
    cout << endl;

    cout << "Games played by Sunil: ";
    for (const auto &game : GetSportName("Sunil"))
    {
        cout << game << " ";
    }
    cout << endl;

    return 0;
}