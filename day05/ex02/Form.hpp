
#ifndef FORM_HPP
# define FORM_HPP

#include <istream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        std::string const name;
        bool isSigned;
        int const gradeToSign;
        int const gradeToExecute;
    public:
        Form();
        Form(Form const &obj);
        Form(std::string _name = "default", bool sign = false, int _grS = 15, int _grE = 40);
        Form &operator=(Form const &obj);
        virtual ~Form();
        std::string getName() const;
        bool ifSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        bool beSigned(Bureaucrat &bur);
        void setGradeToSign(const int &newGradeToSign);
        void setGradeToExecute(const int &newGradeToExecutes);
        virtual bool execute(Bureaucrat const & executor) const = 0;

        class GradeTooHighException : public std::exception {
        public:
            virtual const char * what() const throw();
        };

        class GradeTooLowException : public std::exception {
        public:
            virtual const char * what() const throw();
        };

        class IsNotSigned : public std::exception {
        public:
            virtual const char * what() const throw();
        };
};


std::ostream & operator<<(std::ostream &o, Form const &obj);
#endif