
#include "Intern.hpp"

Intern::Intern() {
    std::cout<<"Default constructor intern"<<std::endl;
}

Intern::Intern(Intern const &obj) {
    (void)obj;
    std::cout<<"Copy constructor Intern"<<std::endl;
}

Intern::~Intern() {
    std::cout<<"Destructor for intern"<<std::endl;
}

Intern& Intern::operator=(Intern const &obj) {
    (void)obj;
    return *this;
}

const char *Intern::FormDoesNotExist::what() const throw() {
    return ("Form does not exist");
}

Form* Intern::makeForm(std::string type, std::string target) {
     if (type == "robotomy request") {
         Form *form = new RobotomyRequestForm(target);
         std::cout<<"Intern creates "<<*form<<std::endl;
         return form;
     }
     else if (type == "shruberry creation") {
         Form *form = new ShrubberyCreationForm(target);
         std::cout<<"Intern creates "<<*form<<std::endl;
         return form;
     }
     else if (type == "presidental pardon") {
         Form *form = new PresidentialPardonForm(target);
         std::cout<<"Intern creates "<<*form<<std::endl;
         return form;
     }
     else
         throw FormDoesNotExist();
}