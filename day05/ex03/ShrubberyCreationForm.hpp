
#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
private:
    std::string target;
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &obj);
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string _target);
    ShrubberyCreationForm(ShrubberyCreationForm const &obj);
    ~ShrubberyCreationForm();
    bool execute(Bureaucrat const & executor) const ;
    std::string getFileContents (std::ifstream& File) const;
};

#endif