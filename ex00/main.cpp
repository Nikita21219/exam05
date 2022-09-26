#include "iostream"
#include "Warlock.hpp"

// c;clang++ *.cpp -Wall -Wextra -Werror -fsanitize=address && ./a.out

int main()
{
    Warlock const richard("Richard", "Mistress of Magma");
    richard.introduce();
    std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

    Warlock* jack = new Warlock("Jack", "the Long");
    jack->introduce();
    jack->setTitle("the Mighty");
    jack->introduce();

    delete jack;

  return (0);
}
