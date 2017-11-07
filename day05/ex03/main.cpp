
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(){
    srand(time(0));

    //ShrubberyCreationForm tests
    {
        try
        {
            ShrubberyCreationForm f("straw");
            std::cout<<f<<std::endl;
            Bureaucrat but("Bur", 10);
            but.signForm(f);
            std::cout<<but<<std::endl;
            but.executeForm(f);
        }
        catch (std::exception & e)
        {
            std::cout<<"in catch all is good"<<std::endl;
            std::cout<<e.what()<<std::endl;
        }
    }
    {
        try
        {
            ShrubberyCreationForm f("straw 1");
            std::cout<<f<<std::endl;
            Bureaucrat but("Bur", 150);
            but.signForm(f);
            std::cout<<but<<std::endl;
            but.executeForm(f);
        }
        catch (std::exception & e)
        {
            std::cout<<"in catch not enought grade"<<std::endl;
            std::cout<<e.what()<<std::endl;
        }
    }
    {
        try
        {
            ShrubberyCreationForm f("straw 2");
            std::cout<<f<<std::endl;
            Bureaucrat but("Bur", 10);
            std::cout<<but<<std::endl;
            but.executeForm(f);
        }
        catch (std::exception & e)
        {
            std::cout<<"in catch not signed"<<std::endl;
            std::cout<<e.what()<<std::endl;
        }
    }

    //Robotomy tests
    {
        try
        {
            RobotomyRequestForm f("robo");
            std::cout<<f<<std::endl;
            Bureaucrat but("Bur", 10);
            but.signForm(f);
            std::cout<<but<<std::endl;
            but.executeForm(f);
        }
        catch (std::exception & e)
        {
            std::cout<<"in catch all is good"<<std::endl;
            std::cout<<e.what()<<std::endl;
        }
    }
    {
        try
        {
            RobotomyRequestForm f("robo 1");
            std::cout<<f<<std::endl;
            Bureaucrat but("Bur", 150);
            but.signForm(f);
            std::cout<<but<<std::endl;
            but.executeForm(f);
        }
        catch (std::exception & e)
        {
            std::cout<<"in catch not enought grade"<<std::endl;
            std::cout<<e.what()<<std::endl;
        }
    }
    {
        try
        {
            RobotomyRequestForm f("robo 2");
            std::cout<<f<<std::endl;
            Bureaucrat but("Bur", 10);
            std::cout<<but<<std::endl;
            but.executeForm(f);
        }
        catch (std::exception & e)
        {
            std::cout<<"in catch not signed"<<std::endl;
            std::cout<<e.what()<<std::endl;
        }
    }

    //PresidentialPardon tests
    {
        try
        {
            PresidentialPardonForm f("pardon");
            std::cout<<f<<std::endl;
            Bureaucrat but("Bur", 1);
            but.signForm(f);
            std::cout<<but<<std::endl;
            but.executeForm(f);
        }
        catch (std::exception & e)
        {
            std::cout<<"in catch all is good"<<std::endl;
            std::cout<<e.what()<<std::endl;
        }
    }
    {
        try
        {
            PresidentialPardonForm f("pardon 1");
            std::cout<<f<<std::endl;
            Bureaucrat but("Bur", 150);
            but.signForm(f);
            std::cout<<but<<std::endl;
            but.executeForm(f);
        }
        catch (std::exception & e)
        {
            std::cout<<"in catch not enought grade"<<std::endl;
            std::cout<<e.what()<<std::endl;
        }
    }
    {
        try
        {
            PresidentialPardonForm f("pardon 2");
            std::cout<<f<<std::endl;
            Bureaucrat but("Bur", 10);
            std::cout<<but<<std::endl;
            but.executeForm(f);
        }
        catch (std::exception & e)
        {
            std::cout<<"in catch not signed"<<std::endl;
            std::cout<<e.what()<<std::endl;
        }
    }

    //Intern tests
    {
        Intern  someRandomIntern;
        Form*   rrf;
        try {
            rrf = someRandomIntern.makeForm("robotomy request", "Bender");
            delete rrf;
        }
        catch (std::exception &e) {
            std::cout<<e.what()<<std::endl;
        }

    }
    {
        Intern  someRandomIntern;
        Form*   rrf;
        try {
            rrf = someRandomIntern.makeForm("Govno", "Bender");
            delete rrf;
        }
        catch (std::exception &e) {
            std::cout<<e.what()<<std::endl;
        }

    }
    return (0);
}
