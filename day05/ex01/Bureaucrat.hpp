
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat {

    class GradeTooHighException : public std::exception {
        public:
            virtual const char * what() const throw();
    };

    class GradeTooLowException : public std::exception {
        public:
            virtual const char * what() const throw();
    };

    private:
        std::string const name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string const _name = "Vasya", int _grade = 50);
        ~Bureaucrat();
        Bureaucrat(Bureaucrat const &obj);
        Bureaucrat &operator=(Bureaucrat const &obj);
        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        void signForm(Form &form);
};

std::ostream & operator<<(std::ostream &o, Bureaucrat const &obj);
#endif