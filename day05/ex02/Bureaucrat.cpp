
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
    std::cout << "Bureaucrat created by default!" << std::endl;
}

Bureaucrat::Bureaucrat(std::string  const _name, int _grade) : name(_name) {
    if (_grade > 150)
        throw GradeTooLowException();
    else if (_grade < 1)
        throw GradeTooHighException();
    else
        grade = _grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat const &obj) : name(obj.getName()), grade(obj.getGrade()){
    std::cout << "Bureaucrat copy constructor!" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj) {
    grade = obj.getGrade();
    const_cast<std::string&>((this)->name) = obj.getName();
    return (*this);
}

std::string Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const {
    return grade;
}

void Bureaucrat::incrementGrade() {
    grade--;
    if (grade < 1)
        throw GradeTooHighException();
}

void Bureaucrat::decrementGrade() {
    grade++;
    if (grade > 150)
        throw GradeTooLowException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade is too low");
}

void Bureaucrat::signForm(Form &form) {
    try
    {
        form.beSigned(*this);
        std::cout << name << " signs " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << name << " cannon sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

std::ostream & operator<<(std::ostream &o, Bureaucrat const &obj) {
    o << obj.getName()<< ", bureaucrat grade " << obj.getGrade();
    return o;
}