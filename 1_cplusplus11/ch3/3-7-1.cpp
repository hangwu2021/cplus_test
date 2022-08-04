
struct Student
{
    Student(bool g, int a) : gender(g), age(a)
    {
        
    }
    
    bool gender;
    int age;
};

union T
{
    Student s;
    int id;
    char name[10];
};
