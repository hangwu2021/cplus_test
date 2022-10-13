#ifndef DATABASE_H_
#define DATABASE_H_

#include "Employee.h"

#include <string>
#include <vector>
#include <exception>

namespace Records
{
const int FirstEmployeeNumber { 1000 };

class Database 
{
public:
    Employee& addEmployee(const std::string& firstName, const std::string& lastName);
    
    Employee& getEmployee(int employeeNumber);
    Employee& getEmployee(const std::string& firstName, const std::string& lastName);
    
    void displayAll() const;
    void displayCurrent() const;
    void displayFormer() const;
    
private:
    std::vector<Employee> m_employees;
    int m_nextEmployeeNumber { FirstEmployeeNumber };
};

}   // namespace Records

#endif // DATABASE_H_
