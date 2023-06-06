#include "PhoneBook.hpp"


std::string myimput(std::string print){
	std::string imp;
	std::cout << print;
	std::getline(std::cin, imp);
	if(imp.empty())
	{
		imp = "emptyerror";
	}
	return imp;
}

void Phonebook::ADD(){

	std::string temp;
	temp = myimput("Name: ");
	if(!temp.compare("emptyerror"))
	{
		std::cout << "Imput cannot empty." << std::endl;
		return ;
	}
	persons[i].setSurname(temp);

	temp = myimput("Surname: ");
	if(!temp.compare("emptyerror"))
	{
		std::cout << "Imput cannot empty." << std::endl;
		return ;
	}
	persons[i].setSurname(temp);

	temp = myimput("Nickname: ");
	if(!temp.compare("emptyerror"))
	{
		std::cout << "Imput cannot empty." << std::endl;
		return ;
	}
	persons[i].setNickname(temp);

	temp = myimput("PhoneNumber: ");
	if(!temp.compare("emptyerror"))
	{
		std::cout << "Imput cannot empty." << std::endl;
		return ;
	}
	persons[i].setPhoneNumber(temp);

	temp = myimput("DarkestSecret: ");
	if(!temp.compare("emptyerror"))
	{
		std::cout << "Imput cannot empty." << std::endl;
		return ;
	}
	persons[i].setDarkestSecret(temp);
	i++;
}

void Phonebook::SEARCH(){
	std::cout << "test";
	std::cout << persons[i].getName() << std::endl;
}

int main()
{
	Phonebook x;

	x.i = 0;
	std::string tmp;
	int i = 0;

	while (31)
	{
		std::cout << "PHONEBOOK" << std::endl;
		getline(std::cin, tmp);
		if(!tmp.compare("ADD"))
			x.ADD();
		else if (!tmp.compare("SEARCH"))
			x.SEARCH();
		else if (!tmp.compare("EXIT"))
			exit(0);
	}
}