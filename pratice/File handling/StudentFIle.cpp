#include <iostream>
#include <fstream>
using namespace std;
class Student
{
    int id = 0;
    string name;
    int roll;
    string Branch;

public:
    void set_data();
    friend ofstream &operator<<(ofstream &ofs, Student &s);
    friend ifstream &operator>>(ifstream &ifs, Student &s);
};
void Student::set_data()
{
    id++;
    id = id;
    cout << "\nStudent no." << id << endl;
    cout << "Enter student name:";
    cin.ignore();
    getline(cin, name);
    cout << "Enter student roll number:";
    cin >> roll;
    cout << "Enter student Branch:";
    cin.ignore();
    getline(cin, Branch);
}
ofstream &operator<<(ofstream &ofs, Student &s)
{
    ofs << "Student No." << s.id << endl;
    ofs << "---------------" << endl;
    ofs << "Name:" << s.name << endl;
    ofs << "Roll Number:" << s.roll << endl;
    ofs << "Branch:" << s.Branch << endl;
    ofs << endl;
    cin.ignore();
    return ofs;
}
ifstream &operator>>(ifstream &ifs, Student &s)
{
    cout << "Student name:";
    ifs >> s.name;
    cout << endl;
    cout << "Student roll:";
    ifs >> s.roll;
    cout << endl;
    cout << "Student Branch:";
    ifs >> s.Branch;
    cout << endl;
}
int main()
{
    int x;
    cout << "Enter the number of student:";
    cin >> x;
    Student s[x];
    for (int i = 0; i < x; i++)
    {
        s[i].set_data();
    }
    ofstream file;
    file.open("StudentData.txt");
    for (int i = 0; i < x; i++)
    {
        file << s[i];
    }
    ifstream file1;
    file.open("StudenData.txt");
    for (int i = 0; i < x; i++)
    {
        file << s[i];
    }
}