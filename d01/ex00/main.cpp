#include "Pony.hpp"

void	ponyOnTheStack(void)
{
	Pony stack = Pony("Sweet Sorbet", "Razzmatazz", true);

	std::cout << stack.getName() << " is a majestic " << stack.getColor();
	std::cout << " stack pony\n";

	return ;
}

void	ponyOnTheHeap(void)
{
	Pony *heap = new Pony("Tiny Thunder", "Feldgrau", false);

	std::cout << heap->getName() << " is a beautiful " << heap->getColor();
	std::cout << " heap stallion\n";
	delete heap;
	return ;
}

int	main()
{
	ponyOnTheHeap();
	std::cout << "RIP Heap pony\n\n";
	ponyOnTheStack();
	std::cout << "RIP Stack pony\n\n";

	return 0;
}
