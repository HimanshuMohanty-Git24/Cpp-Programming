#include <iostream>
#include <sstream>
using namespace std;

class Student
{
private:
    int age,standard;
    string firstname,lastname;
public:
    void set_age(int a)
    {
        age=a;
    }
    void set_standard(int s)
    {
        standard=s;
    }
    void set_first_name(string fN)
    {
        firstname=fN;
    }
    void set_last_name(string lN)
    {
        lastname=lN;
    }
    int get_age()
    {
        return age;
    }
    int get_standard()
    {
        return standard;
    }
    string get_first_name()
    {
        return firstname;
    }
    string get_last_name()
    {
        return lastname;
    }
    string to_string()
    {
        string str;
        ostringstream a;
        a<<age;
        string ag=a.str();
        ostringstream s;
        s<<standard;
        string std=s.str();
        str = ag+","+firstname+","+lastname+","+std;
        return str;
    }

};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout<<st.to_string();
    
    return 0;
}