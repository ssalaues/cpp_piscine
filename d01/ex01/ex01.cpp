void	memoryLeak()
{
	std::string		*panthers = new std::string("String panthers");

	std::cout << *panthers << std::endl;
	delete panthers;
}
