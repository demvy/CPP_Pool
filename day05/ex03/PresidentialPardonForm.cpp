
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential form", false, 25, 5) {

}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : Form("Presidential form", false, 25, 5) {
    target = _target;
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj) : Form(obj) {

}

bool PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    if (this->ifSigned() && (executor.getGrade() <= this->getGradeToExecute())) {
        std::cout<<target<<" has been pardoned by Zafod Beeblebrox"<<std::endl;
        return true;
    }
    else if (!this->ifSigned())
        throw Form::IsNotSigned();
    else
        throw Form::GradeTooLowException();
}

