#include "SpreadsheetCell.hpp"

void printCell(const SpreadsheetCell& cell)
{
    std::cout << cell.getString() << std::endl;
}

int main()
{
    SpreadsheetCell myCell, anotherCell;
    myCell.setValue(6.5);
    anotherCell.setString("3.2");
    std::cout << "cell 1: " << myCell.getValue() << std::endl;
    std::cout << "cell 2: " << anotherCell.getValue() << std::endl;

    SpreadsheetCell* myCell3Ptr { new SpreadsheetCell {} };
    myCell3Ptr->setValue(3.7);
    std::cout << "cell 3: " << myCell3Ptr->getValue() << std::endl;
    delete myCell3Ptr;
    myCell3Ptr = nullptr;

    //auto myCell4 {std::make_unique<SpreadsheetCell>()};
    std::unique_ptr<SpreadsheetCell> myCell4 {new SpreadsheetCell};
    myCell4->setString("7.2");
    std::cout << "cell 4: " << myCell4->getString() << std::endl;

    SpreadsheetCell aThirdCell {"4.4"};
    std::unique_ptr<SpreadsheetCell> aFourthCell {std::make_unique<SpreadsheetCell>("5.5")};

    myCell = anotherCell;
    std::cout << "myCell: " << myCell.getValue() << std::endl;
    std::cout << "anotherCell: " << anotherCell.getValue() << std::endl;
    
    return 0;
}