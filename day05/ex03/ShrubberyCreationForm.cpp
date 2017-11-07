
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

std::string ShrubberyCreationForm::getFileContents (std::ifstream& File) const
{
    std::string Lines = "";
    if (File) {
        while (File.good ()) {
            std::string TempLine;
            std::getline (File , TempLine);
            TempLine += "\n";
            Lines += TempLine;
        }
        return Lines;
    }
    else {
        return "ERROR File does not exist.";
    }
}

bool ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    if (this->ifSigned() && (executor.getGrade() <= this->getGradeToExecute())) {
        std::ifstream r_file("Tree.txt");
        std::string art = getFileContents(r_file);
        std::ofstream o_file(target+"_shrubbery");
        o_file << art;
        return true;
    }
    else if (!this->ifSigned())
        throw Form::IsNotSigned();
    else
        throw Form::GradeTooLowException();
}