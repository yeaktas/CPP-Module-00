#include "PhoneBook.hpp"

void Contact::setName(std::string name){
	_name = name;
}
std::string Contact::getName( void ){
	return _name;
}


void Contact::setSurname(std::string surname){
	_surname = surname;
}
std::string Contact::getSurname( void ){
	return _surname;
}


void Contact::setNickname(std::string nickname){
	_nickname = nickname;
}
std::string Contact::getNickName( void ){
	return _nickname;
}


void Contact::setPhoneNumber(std::string phonenumber){
	_phoneNumber = phonenumber;
}
std::string Contact::getPhoneNumber( void ){
	return _phoneNumber;
}


void Contact::setDarkestSecret(std::string darkestsecret){
	_darkestSecret = darkestsecret;
}
std::string Contact::getDarkestSecret( void ){
	return _darkestSecret;
}

void Phonebook::ADD(){

	persons[i].flag = 0;
	std::string temp;
	std::cout << "Name: ";
	getline(std::cin, temp);
	while(temp.empty())
	{
		std::cout << "Input cannot be empty." << std::endl << "Name: ";
		getline(std::cin, temp);
	}
	persons[i].setName(temp);
	
	std::cout << "Surname: ";
	getline(std::cin, temp);
	while(temp.empty())
	{
		std::cout << "Input cannot be empty." << std::endl << "Surname: ";
		getline(std::cin, temp);
	}
	persons[i].setSurname(temp);

	std::cout << "Nickname: ";
	getline(std::cin, temp);
	while(temp.empty())
	{
		std::cout << "Input cannot be empty." << std::endl << "Nickname: ";
		getline(std::cin, temp);
	}
	persons[i].setNickname(temp);

	std::cout << "Phonenumber: ";
	getline(std::cin, temp);
	while(temp.empty())
	{
		std::cout << "Input cannot be empty." << std::endl << "Phonenumber: ";
		getline(std::cin, temp);
	}
	persons[i].setPhoneNumber(temp);

	std::cout << "Darkest Secret: ";
	getline(std::cin, temp);
	while(temp.empty())
	{
		std::cout << "Input cannot be empty." << std::endl << "Darkest Secret: ";
		getline(std::cin, temp);
	}
	persons[i].setDarkestSecret(temp);
	persons[i].flag = 1;
	i++;
	i %= 8;
}