vector<Student *> studentDetailsDynamic;

list<Student> ConvertToListDynamic(vector<Student> &data)
{
    list<Student> list;
    for (int i = 0; i < data.size(); i++)
    {
        list.push_back(data[i]);
    }
    return list;
};

string GetClassDynamic(int rollNum)
{
    if (studentDetailsDynamic.empty())
    {
        cout << "Error: studentDetailsDynamic is empty or uninitialized" << endl;
        return {"Student doesn't exist"};
    }
    for (int i = 0; i < studentDetailsDynamic.size(); i++)
    {
        if (studentDetailsDynamic[i]->getRollNum() == rollNum)
        {
            return studentDetailsDynamic[i]->getClass();
        }
    }
    return {"Student doesn't exist"};
};

list<string> GetContactsDynamic(int rollNum)
{
    if (studentDetailsDynamic.empty())
    {
        cout << "Error: studentDetailsDynamic is empty or uninitialized" << endl;
        return {"Student doesn't exist"};
    }
    for (int i = 0; i < studentDetailsDynamic.size(); i++)
    {
        if (studentDetailsDynamic[i]->getRollNum() == rollNum)
        {
            return studentDetailsDynamic[i]->getContactNum();
        }
    }
    return {"Student doesn't exist"};
}

list<string> GetSubjectsDynamic(int rollNum)
{
    if (studentDetailsDynamic.empty())
    {
        cout << "Error: studentDetailsDynamic is empty or uninitialized" << endl;
        return {"Student doesn't exist"};
    }
    for (const auto &student : studentDetailsDynamic)
    {
        if (student->getRollNum() == rollNum)
        {
            return student->getSubjectName();
        }
    }

    return {"Student doesn't exist"};
};

list<string> GetSubjectsWiseStudentNamesDynamic(string subjectName)
{
    if (studentDetailsDynamic.empty())
    {
        cout << "Error: studentDetailsDynamic is empty or uninitialized" << endl;
        return {"Student doesn't exist"};
    }
    list<string> studentName;

    for (const auto &student : studentDetailsDynamic)
    {
        for (auto subject : student->getSubjectName())
        {
            if (subject == subjectName)
            {
                studentName.push_back(student->getName());
            }
        }
    }

    return studentName;
};

list<string> GetGradeWiseStudentNamesDynamic(string grade)
{
    if (studentDetailsDynamic.empty())
    {
        cout << "Error: studentDetailsDynamic is empty or uninitialized" << endl;
        return {"Student doesn't exist"};
    }
    list<string> studentName;

    for (const auto &student : studentDetailsDynamic)
    {

        if (student->getGrade() == grade)
        {
            studentName.push_back(student->getName());
        }
    }

    return studentName;
};

list<string> GetSportNameDynamic(string studentName)
{
    if (studentDetailsDynamic.empty())
    {
        cout << "Error: studentDetailsDynamic is empty or uninitialized" << endl;
        return {"Student doesn't exist"};
    }
    for (const auto &student : studentDetailsDynamic)
    {
        if (student->getName() == studentName)
        {
            return student->getSport();
        }
    }
    return {"Student doesn't exist"};
};

bool SearchStudentDynamic(string studentName)
{
    if (studentDetailsDynamic.empty())
    {
        cout << "Error: studentDetailsDynamic is empty or uninitialized" << endl;
        return false;
    }
    for (const auto &student : studentDetailsDynamic)
    {
        if (student->getName() == studentName)
        {
            return true;
        }
    }
    return false;
};