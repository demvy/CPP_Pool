
#include "Bureaucrat.hpp"
#include "Form.hpp"

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
            Bureaucrat but("Bur", 13);
            Form f("dddddd", false, 40, 59);
            but.signForm(f);
        }
        catch (std::exception & e)
        {
            std::cout<<e.what()<<std::endl;
        }
    }
    {
        try
        {
            Bureaucrat but("Bur", 13);
            Form f("dddddd", false, 1, 1);
            but.signForm(f);
        }
        catch (std::exception & e)
        {
            std::cout<<e.what()<<std::endl;
        }
    }
    return (0);
}
