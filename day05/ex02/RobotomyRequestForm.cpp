
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", false, 72, 45) {

}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : Form("RobotomyRequestForm", false, 72, 45) {
    target = _target;
}

RobotomyRequestForm::~RobotomyRequestForm() {

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj) : Form(obj) {

}

bool RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    if (this->ifSigned() && (executor.getGrade() <= this->getGradeToExecute())) {
        std::cout<<"dz"<<std::endl;
        return true;
    }
    else if (!this->ifSigned())
        throw Form::IsNotSigned();
    else
        throw Form::GradeTooLowException();
}