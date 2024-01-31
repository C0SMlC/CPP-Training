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
#include <bits/stdc++.h>

using namespace std;

typedef pair<string, string> NameClassPair;
typedef pair<string, list<string>> AddressContactPair;
typedef pair<NameClassPair, AddressContactPair> StudentDetails;

int main()
{
    map<int, StudentDetails> studentDetails;

    studentDetails[1] = make_pair(make_pair("Manoj Manoj", "2"), make_pair("101, Future Tower, Pune", list<string>{"9988774455", "9988774455"}));
    studentDetails[2] = make_pair(make_pair("Dinesh", "3"), make_pair("101, Future Tower, Pune", list<string>{"9988774455", "9988774455"}));
    studentDetails[3] = make_pair(make_pair("Sunil", "4"), make_pair("101, Future Tower, Pune", list<string>{"9988774455", "9988774455"}));
    studentDetails[4] = make_pair(make_pair("Vivek", "6"), make_pair("101, Future Tower, Pune", list<string>{"9988774455", "9988774455"}));
    studentDetails[5] = make_pair(make_pair("Sameer", "10"), make_pair("101, Future Tower, Pune", list<string>{"9988774455", "9988774455"}));

    for (const auto &student : studentDetails)
    {
        cout << "Student ID: " << student.first << endl;
        cout << "Name: " << student.second.first.first << endl;
        cout << "Class: " << student.second.first.second << endl;
        cout << "Address: " << student.second.second.first << endl;

        cout << "Contacts: ";
        for (const auto &contact : student.second.second.second)
        {
            cout << contact << " ";
        }

        cout << endl;
        cout << "--------------------------------" << endl;
    }

    return 0;
}

// with user input

#include <bits/stdc++.h>

using namespace std;

typedef pair<string, string> NameClassPair;
typedef pair<string, list<string>> AddressContactPair;
typedef pair<NameClassPair, AddressContactPair> StudentDetails;

int main()
{
    map<int, StudentDetails> studentDetails;

    int numOfStudents;
    cin >> numOfStudents;

    while (numOfStudents)
    {
        cout<<"Enter name: "<<endl;
        // cin>>
        numOfStudents--;
    }
}