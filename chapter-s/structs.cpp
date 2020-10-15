

struct Employee
{
    short id;
    int age;
    double wage;
};

int main()
{
    Employee joe;
    
    joe.id = 14;
    joe.age = 32;
    joe.wage = 24.15;

    Employee frank;
    
    frank.id = 14;
    frank.age = 32;
    frank.wage = 24.15;

    Employee karen = {1, 32, 6000.0};

    return 0;
}