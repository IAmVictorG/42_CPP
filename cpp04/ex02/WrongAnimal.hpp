#ifndef WRONG_ANIMAL_CPP
# define WRONG_ANIMAL_CPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal &wrongAnimal);
		virtual ~WrongAnimal();
		virtual void makeSound() const;
		std::string getType() const;
};


#endif