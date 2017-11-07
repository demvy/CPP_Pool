
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main(){
    {
        try
        {
            Bureaucrat but("Bur", 155656);
        }
        catch (std::exception & e)
        {
            std::cout<<e.what()<<std::endl;
        }
    }
    {
        try
        {
            Bureaucrat but("Bur", 0);
        }
        catch (std::exception & e)
        {
            std::cout<<e.what()<<std::endl;
        }
    }
    {
        try
        {
            Bureaucrat but("Bur", 1);
            but.incrementGrade();
        }
        catch (std::exception & e)
        {
            std::cout<<e.what()<<std::endl;
        }
    }
    {
        try
        {
            Bureaucrat but("Bur", 150);
            but.decrementGrade();
        }
        catch (std::exception & e)
        {
            std::cout<<e.what()<<std::endl;
        }
    }
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
    return (0);
}
