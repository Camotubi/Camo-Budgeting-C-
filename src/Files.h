#ifndef FILES_H
#define FILES_H
#include <iostream>
#include <fstream>
#include <vector>
#include <src/Income.h>
#include <src/Expense.h>
class Files
{
public:
    Files();
    ~Files();
    save(std::vector<Income>,std::vector<Expense>,std::string);

};

#endif // FILES_H
