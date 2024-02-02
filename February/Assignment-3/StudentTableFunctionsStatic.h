vector<Student> studentDetailsStatic;

list<Student> ConvertToList(vector<Student> &data)
{
    list<Student> list;
    for (int i = 0; i < data.size(); i++)
    {
        list.push_back(data[i]);
    }
    return list;
};

string GetClass(int rollNum)
{
    if (studentDetailsStatic.empty())
    {
        cout << "Error: studentDetailsStatic is empty or uninitialized" << endl;
        return {"Student doesn't exist"};
    }
    for (int i = 0; i < studentDetailsStatic.size(); i++)
    {
        if (studentDetailsStatic[i].getRollNum() == rollNum)
        {
            return studentDetailsStatic[i].getClass();
        }
    }
    return {"Student doesn't exist"};
};

list<string> GetContacts(int rollNum)
{
    if (studentDetailsStatic.empty())
    {
        cout << "Error: studentDetailsStatic is empty or uninitialized" << endl;
        return {"Student doesn't exist"};
    }
    for (int i = 0; i < studentDetailsStatic.size(); i++)
    {
        if (studentDetailsStatic[i].getRollNum() == rollNum)
        {
            return studentDetailsStatic[i].getContactNum();
        }
    }
    return {"Student doesn't exist"};
}

list<string> GetSubjects(int rollNum)
{
    if (studentDetailsStatic.empty())
    {
        cout << "Error: studentDetailsStatic is empty or uninitialized" << endl;
        return {"Student doesn't exist"};
    }
    for (const auto &student : studentDetailsStatic)
    {
        if (student.getRollNum() == rollNum)
        {
            return student.getSubjectName();
        }
    }

    return {"Student doesn't exist"};
};

list<string> GetSubjectsWiseStudentNames(string subjectName)
{
    if (studentDetailsStatic.empty())
    {
        cout << "Error: studentDetailsStatic is empty or uninitialized" << endl;
        return {"Student doesn't exist"};
    }
    list<string> studentName;

    for (const auto &student : studentDetailsStatic)
    {
        for (auto subject : student.getSubjectName())
        {
            if (subject == subjectName)
            {
                studentName.push_back(student.getName());
            }
        }
    }

    return studentName;
};

list<string> GetGradeWiseStudentNames(string grade)
{
    if (studentDetailsStatic.empty())
    {
        cout << "Error: studentDetailsStatic is empty or uninitialized" << endl;
        return {"Student doesn't exist"};
    }
    list<string> studentName;

    for (const auto &student : studentDetailsStatic)
    {

        if (student.getGrade() == grade)
        {
            studentName.push_back(student.getName());
        }
    }

    return studentName;
};

list<string> GetSportName(string studentName)
{
    if (studentDetailsStatic.empty())
    {
        cout << "Error: studentDetailsStatic is empty or uninitialized" << endl;
        return {"Student doesn't exist"};
    }
    for (const auto &student : studentDetailsStatic)
    {
        if (student.getName() == studentName)
        {
            return student.getSport();
        }
    }
    return {"Student doesn't exist"};
};

bool SearchStudent(string studentName)
{
    if (studentDetailsStatic.empty())
    {
        cout << "Error: studentDetailsStatic is empty or uninitialized" << endl;
        return false;
    }
    for (const auto &student : studentDetailsStatic)
    {
        if (student.getName() == studentName)
        {
            return true;
        }
    }
    return false;
};