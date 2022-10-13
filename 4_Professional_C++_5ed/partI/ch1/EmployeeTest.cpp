#include "Employee.h"

using namespace Records;

int main()
{
    std::cout << "Testing the Employee class." << std::endl;
    
    Employee emp {"Jane", "Doe"};
    emp.setFirstName("John");
    emp.setLastName("Doe");
    emp.setEmployeeNumber(13);
    emp.setSalary(50000);
    emp.promote();
    emp.promote(50);
    emp.hire();
    emp.display();
    
    
    return 0;
}
