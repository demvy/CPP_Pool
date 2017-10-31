
#include "Pony.hpp"

void ponyOnTheStack()
{
	Pony pony;
	std::string input;

	std::cout<<"Pony1 created!! Batya v zdanii"<<std::endl;
	std::cout<<"Enter name for Pony1: ";
	std::getline(std::cin, input);
	pony.setPonyName(input);
	std::cout<<"Pony name on stack is "<<pony.getPonyName()<<std::endl;
	std::cout<<"Enter age for Pony1: ";
	std::getline(std::cin, input);
	try
	{
		int age = std::stoi(input);
		pony.setPonyAge(age);
	}
	catch (...)
	{
		std::cout<<"Wrong input! Age can't be a string!"<<std::endl;
	}
	std::cout<<"Pony_age on stack is "<<pony.getPonyAge()<<std::endl;
	std::cout<<"Pony1 deleted!! Batya ne v hate"<<std::endl;
}

void ponyOnTheHeap()
{
	std::string input;

	std::cout<<"Enter name for Pony2: ";
	std::getline(std::cin, input);
	Pony* pony = new Pony(input);
	std::cout<<"Pony2 created!! Heap is on the ground"<<std::endl;
	std::cout<<"Pony name on heap is "<<pony->getPonyName()<<std::endl;
	std::cout<<"Enter age for Pony2: ";
	std::getline(std::cin, input);
	try
	{
		int age = std::stoi(input);
		pony->setPonyAge(age);
	}
	catch (...)
	{
		std::cout<<"Wrong input! Age can't be a string!"<<std::endl;
	}
	std::cout<<"Pony_age on heap is "<<pony->getPonyAge()<<std::endl;
	delete pony;
	std::cout<<"Pony2 deleted!! Delaet nogi"<<std::endl;
}

int	main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}