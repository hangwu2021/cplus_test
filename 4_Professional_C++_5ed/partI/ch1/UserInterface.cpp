#include "Employee.h"
#include "Database.h"

using namespace Records;

int displayMenu();
void doHire(Database& db);
void doFire(Database& db);
void doPromote(Database& db);

int main()
{
    Database employeeDB;
    bool done { false };
    while(!done)
    {
        int selection { displayMenu() };
        switch(selection)
        {
        case 0:
            done = true;
            break;
        case 1:
            doHire(employeeDB);
            break;
        case 2:
            doFire(employeeDB);
            break;
        case 3:
            doPromote(employeeDB);
            break;
        case 4:
            employeeDB.displayAll();
            break;
        case 5:
            employeeDB.displayCurrent();
            break;
        case 6:
            employeeDB.displayFormer();
            break;
        default:
            std::cerr << "Unknown command." << std::endl;
            break;
        }
    }
    
    return 0;
}


// function 
int displayMenu()
{
    int selection = 0;
    
    std::cout << "\nEmployee Database" << std::endl;
    std::cout << "===================" << std::endl;
    std::cout << "1) Hire a new employee" << std::endl;
    std::cout << "2) Fire an employee" << std::endl;
    std::cout << "3) Promote an employee" << std::endl;
    std::cout << "4) List all employees" << std::endl;
    std::cout << "5) List all current employees" << std::endl;
    std::cout << "6) List all former employees" << std::endl;
    std::cout << "0) Quit\n" << std::endl;
    
    std::cout << "--->";
    std::cin >> selection;
    
    return selection;
}

void doHire(Database& db)
{
    std::string firstName;
    std::string lastName;
    
    std::cout << "First name? ";
    std::cin >> firstName;
    
    std::cout << "Second name? ";
    std::cin >> lastName;
    
    auto& employee { db.addEmployee(firstName, lastName) };
    std::cout << "Hired employee " << firstName << " " << lastName << " with employee number " << employee.getEmployeeNumber() << "." << std::endl;
}

void doFire(Records::Database& db)
{
    int employeeNumber;
    std::cout << "Employee number? ";
    std::cin >> employeeNumber;
    
    try 
    {
        Employee& emp {db.getEmployee(employeeNumber)};
        emp.fire();
        
        std::cout << "Employee " << employeeNumber << " terminated." << std::endl;
    }
    catch (const std::logic_error& exception) 
    {
        std::cerr << "Unable to terminate employee: " << exception.what() << std::endl;
    }
}

void doPromote(Records::Database& db)
{
    int employeeNumber;
    std::cout << "Employee number? ";
    std::cin >> employeeNumber;
    
    int raiseAmount;
    std::cout << "How much of a raise? ";
    std::cin >> raiseAmount;
    
    try 
    {
        auto& emp {db.getEmployee(employeeNumber)};
        emp.promote(raiseAmount);
    }
    catch(...)
    {
        
    }
}



