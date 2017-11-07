
#include "Form.hpp"

std::string Form::getName() const {
    return name;
}

bool Form::ifSigned() const {
    return isSigned;
}

int Form::getGradeToSign() const {
    return gradeToSign;
}

int Form::getGradeToExecute() const {
    return gradeToExecute;
}

Form::Form() : name("default"), gradeToSign(10), gradeToExecute(43) {
    std::cout << "Form created by default!" << std::endl;
}

Form::Form(Form const &obj) : name(obj.getName()), isSigned(obj.ifSigned()),
                              gradeToSign(obj.getGradeToSign()),
                              gradeToExecute(obj.getGradeToExecute()) {
}

Form::Form(std::string _name, bool sign, int _grS, int _grE) : name(_name), isSigned(sign),
                                                               gradeToSign(_grS),
                                                               gradeToExecute(_grE) {
    if (_grS > 150 || _grE > 150)
        throw GradeTooLowException();
    if (_grE < 1 || _grS < 1)
        throw GradeTooHighException();
}

Form& Form::operator=(Form const &obj) {
    const_cast<std::string&>((this)->name) = obj.getName();
    isSigned = obj.ifSigned();
    const_cast<int&>(gradeToSign) = obj.getGradeToSign();
    const_cast<int&>(gradeToExecute) = obj.getGradeToExecute();
    return (*this);
}

Form::~Form() {

}

bool Form::beSigned(Bureaucrat &bur) {
    if (bur.getGrade() <= gradeToSign)
    {
        isSigned = true;
        return true;
    }
    else
        throw GradeTooLowException();

}

std::ostream & operator<<(std::ostream &o, Form const &obj) {
    o << obj.getName()<< ", form signed = " << obj.ifSigned() <<", grade to execute = "
      << obj.getGradeToExecute() << ", grade to sign = " << obj.getGradeToSign() << std::endl;
    return o;
}

const char *Form::GradeTooHighException::what() const throw() {
    return ("Form Grade is too high");
}

const char *Form::GradeTooLowException::what() const throw() {
    return ("Form Grade is too low");
}

const char* Form::IsNotSigned::what() const throw() {
    return ("Form is not signed");
}

void Form::setGradeToSign(const int &newGradeToSign) {
    const_cast<int&>(gradeToSign) = newGradeToSign;
}

void Form::setGradeToExecute(const int &newGradeToExecutes) {
    const_cast<int&>(gradeToExecute) = newGradeToExecutes;
}
