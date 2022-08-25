#include"ViewController.h"
void ViewController::showTopScreen()
{
	std::cout << "-----------------\n";
	std::cout << "1.Contact\n";
	std::cout << "2.Messages\n";
	std::cout << "3.exit\n";
	std::cout << "Choice 1-3\n";
	std::cout << "-----------------\n";
}
void ViewController::showContactListScreen(const std::list<Contact*>& contactList)
{
	std::cout << "-----------------\n";
	for (auto res : contactList)
	{
		res->showInfo();
	}
	if (contactList.empty())
	{
		std::cout << "Contact list is empty\n";
	}
	std::cout << "1. Find by name\n";
	std::cout << "2. Find by phone number\n";
	std::cout << "3. Find by email address\n";
	std::cout << "4. Delete contact\n";
	std::cout << "5. Update contact \n";
	std::cout << "6. Sort A-Z\n";
	std::cout << "7. Sort Z-A\n";
	std::cout << "8. Back\n";
	std::cout << "-----------------\n";
}