#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:
	Brain* _brain;
	public:
		Cat();
		Cat(Cat &src);
		~Cat();

		Cat &operator=(const Cat &src);

		void makeSound() const;
};

#endif