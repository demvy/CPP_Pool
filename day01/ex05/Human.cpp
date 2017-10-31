
#include "Human.hpp"

Human::Human() {
	Brain mew;
	_brain = mew;
}

Human::~Human() {}

std::string Human::identify() const {
	return _brain.identify();
}

const Brain &Human::getBrain(){
	return _brain;
}