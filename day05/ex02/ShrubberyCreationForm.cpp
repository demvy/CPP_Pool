
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrabberyForm", false, 145, 137) {

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : Form("ShrabberyForm", false, 145, 137) {
    target = _target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj) : Form(obj) {

}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {

}