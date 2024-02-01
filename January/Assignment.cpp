// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     map<int, pair<vector<string>, list<string>>> studentDetails;

//     studentDetails[1].first.push_back("Manoj");
//     studentDetails[1].first.push_back("2");
//     studentDetails[1].first.push_back("101, Future Tower, Pune");
//     studentDetails[1].second.push_back("9988774455");
//     studentDetails[1].second.push_back("9988774455");

//     studentDetails[2].first.push_back("Dinesh");
//     studentDetails[2].first.push_back("3");
//     studentDetails[2].first.push_back("101, Future Tower, Pune");
//     studentDetails[2].second.push_back("9988774455");
//     studentDetails[2].second.push_back("9988774455");

//     studentDetails[3].first.push_back("Sunil");
//     studentDetails[3].first.push_back("4");
//     studentDetails[3].first.push_back("101, Future Tower, Pune");
//     studentDetails[3].second.push_back("9988774455");
//     studentDetails[3].second.push_back("9988774455");

//     studentDetails[4].first.push_back("Vivek");
//     studentDetails[4].first.push_back("6");
//     studentDetails[4].first.push_back("101, Future Tower, Pune");
//     studentDetails[4].second.push_back("9988774455");
//     studentDetails[4].second.push_back("9988774455");

//     studentDetails[5].first.push_back("Sameer");
//     studentDetails[5].first.push_back("10");
//     studentDetails[5].first.push_back("101, Future Tower, Pune");
//     studentDetails[5].second.push_back("9988774455");
//     studentDetails[5].second.push_back("9988774455");

//     for (const auto &student : studentDetails)
//     {
//         cout << "Student ID: " << student.first << endl;

//         for (int i = 0; i < student.second.first.size(); i++)
//         {
//             if (i == 0)
//                 cout << "Name: " << student.second.first[i] << endl;
//             if (i == 1)
//                 cout << "Class: " << student.second.first[i] << endl;
//             if (i == 2)
//                 cout << "Address: " << student.second.first[i] << endl;
//         }

//         cout << "Courses: ";
//         for (const auto &course : student.second.second)
//         {
//             cout << course << " ";
//         }

//         cout << endl;
//         cout << "--------------------------------" << endl;
//     }

//     return 0;
// }

// without user input

// with user input

// #include <bits/stdc++.h>

// using namespace std;

// typedef pair<string, string> NameClassPair;
// typedef pair<string, list<string>> AddressContactPair;
// typedef pair<NameClassPair, AddressContactPair> StudentDetails;

// int main()
// {
//     map<int, StudentDetails> studentDetails;

//     int numOfStudents;
//     cin >> numOfStudents;

//     while (numOfStudents)
//     {
//         cout << "Enter name: " << endl;
//         // cin>>
//         numOfStudents--;
//     }
// }

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

string GetClass(int rollNum)
{
    auto it = studentDetails.find(rollNum);

    if (it == studentDetails.end())
    {
        return "Student doesnt exist";
    }
    return it->second.first.first.second;
};

list<string> GetContacts(int rollNum)
{
    auto it = studentDetails.find(rollNum);
    if (it == studentDetails.end())
    {
        return list<string>{"Student doesnt exist"};
    }

    return it->second.first.second.second;
}

list<string> GetSubjects(int rollNum)
{
    auto it = studentDetails.find(rollNum);
    if (it == studentDetails.end())
    {
        return list<string>{"Student doesnt exist"};
    }

    return it->second.second.first.first;
}

list<string> GetSubjectsWiseStudenNames(string subjectName)
{
    list<string> students;

    for (const auto &student : studentDetails)
    {

        for (auto sub : student.second.second.first.first)
        {
            if (sub == subjectName)
            {
                students.push_back(student.second.first.first.first);
            }
        }
    }

    return students;
};

int main()
{
    studentDetails[1] = make_pair(make_pair(make_pair("Manoj", "2"), make_pair("101, Future Tower, Pune", list<string>{"9988774455", "9245867890"})), make_pair(make_pair(list<string>{"Maths", "English"}, "A"), make_pair(make_pair(list<string>{"100", "100", "100"}, "A"), list<string>{"100", "100"})));
    studentDetails[2] = make_pair(make_pair(make_pair("Dinesh", "3"), make_pair("101, Future Tower, Pune", list<string>{"9889774455", "8856798656"})), make_pair(make_pair(list<string>{"Maths", "English", "Marathi", "Hindi"}, "A+"), make_pair(make_pair(list<string>{"100", "100", "100"}, "A"), list<string>{"100", "100"})));
    studentDetails[3] = make_pair(make_pair(make_pair("Sunil", "4"), make_pair("101, Future Tower, Pune", list<string>{"9578985694", "7045613956"})), make_pair(make_pair(list<string>{"Maths", "English", "Marathi", "Hindi"}, "B"), make_pair(make_pair(list<string>{"100", "100", "100"}, "A"), list<string>{"100", "100"})));
    studentDetails[4] = make_pair(make_pair(make_pair("Vivek", "6"), make_pair("101, Future Tower, Pune", list<string>{"6050403040", "9988774455"})), make_pair(make_pair(list<string>{"Maths", "English", "Marathi", "Hindi", "Computer"}, "B"), make_pair(make_pair(list<string>{"100", "100", "100"}, "A"), list<string>{"100", "100"})));
    studentDetails[5] = make_pair(make_pair(make_pair("Sameer", "10"), make_pair("101, Future Tower, Pune", list<string>{"5089789887", "4578987846"})), make_pair(make_pair(list<string>{"Maths", "English", "Marathi", "Hindi", "Bio", "Chemistry", "Physics"}, "A++"), make_pair(make_pair(list<string>{"100", "100", "100"}, "A"), list<string>{"100", "100"})));

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

    return 0;
}
