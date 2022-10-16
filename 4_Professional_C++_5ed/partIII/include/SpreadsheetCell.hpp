#ifndef SPREADSHEETCELL_H_
#define SPREADSHEETCELL_H_

#include <iostream>
#include <string>
#include <string_view>
#include <charconv>
#include <memory>

class SpreadsheetCell
{
public:
    SpreadsheetCell();  // Default Constructor 
    SpreadsheetCell(double initialValue);
    SpreadsheetCell(std::string initialValue);
    SpreadsheetCell(const SpreadsheetCell& src);  // Copy Constructor

    SpreadsheetCell& operator=(const SpreadsheetCell& rhs);

    ~SpreadsheetCell();

    void setValue(double value);
    double getValue() const;

    void setString(/* std::string_view */ std::string value);
    std::string getString() const;

private:
    std::string doubleToString(double value) const;
    double stringToDouble(/* std::string_view */ std::string value) const;

    void setFactoryId();

private:
    /* data */
    double m_value {0};
    size_t m_id {0};

public:
    static size_t ref_count;
};

#endif // SPREADSHEETCELL_H_
