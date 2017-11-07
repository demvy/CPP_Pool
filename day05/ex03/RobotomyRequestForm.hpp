
#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include <fstream>

class RobotomyRequestForm : public Form {
private:
    std::string target;
    RobotomyRequestForm &operator=(RobotomyRequestForm const &obj);
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string _target);
    RobotomyRequestForm(RobotomyRequestForm const &obj);
    ~RobotomyRequestForm();
    bool execute(Bureaucrat const & executor) const ;
};

#endif