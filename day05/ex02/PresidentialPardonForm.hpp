
#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include <fstream>

class PresidentialPardonForm : public Form {
private:
    std::string target;
    PresidentialPardonForm &operator=(PresidentialPardonForm const &obj);
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string _target);
    PresidentialPardonForm(PresidentialPardonForm const &obj);
    ~PresidentialPardonForm();
    bool execute(Bureaucrat const & executor) const ;
};

#endif