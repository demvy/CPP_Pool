
#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
    public:
        Intern();
        ~Intern();
        Intern &operator=(Intern const &obj);
        Intern(Intern const &obj);
        Form* makeForm(std::string type, std::string target);

        class FormDoesNotExist : public std::exception {
        public:
            virtual const char * what() const throw();
        };
};

#endif