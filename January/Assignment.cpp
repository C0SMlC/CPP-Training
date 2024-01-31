#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, pair<vector<string>, list<string>>> studentDetails;

    studentDetails[1].first.push_back("Manoj");
    studentDetails[1].first.push_back("2");
    studentDetails[1].first.push_back("101, Future Tower, Pune");
    studentDetails[1].second.push_back("9988774455");
    studentDetails[1].second.push_back("9988774455");

    studentDetails[2].first.push_back("Dinesh");
    studentDetails[2].first.push_back("3");
    studentDetails[2].first.push_back("101, Future Tower, Pune");
    studentDetails[2].second.push_back("9988774455");
    studentDetails[2].second.push_back("9988774455");

    studentDetails[3].first.push_back("Sunil");
    studentDetails[3].first.push_back("4");
    studentDetails[3].first.push_back("101, Future Tower, Pune");
    studentDetails[3].second.push_back("9988774455");
    studentDetails[3].second.push_back("9988774455");

    studentDetails[4].first.push_back("Vivek");
    studentDetails[4].first.push_back("6");
    studentDetails[4].first.push_back("101, Future Tower, Pune");
    studentDetails[4].second.push_back("9988774455");
    studentDetails[4].second.push_back("9988774455");

    studentDetails[5].first.push_back("Sameer");
    studentDetails[5].first.push_back("10");
    studentDetails[5].first.push_back("101, Future Tower, Pune");
    studentDetails[5].second.push_back("9988774455");
    studentDetails[5].second.push_back("9988774455");

    for (const auto &student : studentDetails)
    {
        cout << "Student ID: " << student.first << endl;

        for (int i = 0; i < student.second.first.size(); i++)
        {
            if (i == 0)
                cout << "Name: " << student.second.first[i] << endl;
            if (i == 1)
                cout << "Class: " << student.second.first[i] << endl;
            if (i == 2)
                cout << "Address: " << student.second.first[i] << endl;
        }

        cout << "Courses: ";
        for (const auto &course : student.second.second)
        {
            cout << course << " ";
        }

        cout << endl;
        cout << "--------------------------------" << endl;
    }

    return 0;
}
