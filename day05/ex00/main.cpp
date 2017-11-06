
#include "Bureaucrat.hpp"

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
            std::cout<<but;
        }
        catch (std::exception & e)
        {
            std::cout<<e.what()<<std::endl;
        }
    }
    return (0);
}
