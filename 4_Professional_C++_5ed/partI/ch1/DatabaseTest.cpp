#include "Database.h"

using namespace Records;

int main()
{
    Database myDB;
    Employee& emp1 { myDB.addEmployee("Greg", "Wallis") };
    emp1.fire();
    
    Employee& emp2 { myDB.addEmployee("Marc", "White") };
    emp2.setSalary(100000);
    
    Employee& emp3 { myDB.addEmployee("John", "Doe") };
    emp3.setSalary(10000);
    emp3.promote();
    
    std::cout << "all employees: \n" << std::endl;
    myDB.displayAll();
    
    std::cout << "\ncurrent employee: \n" << std::endl;
    myDB.displayCurrent();
    
    std::cout << "\nformer employee: \n" << std::endl;
    myDB.displayFormer();
    
    return 0;
}
