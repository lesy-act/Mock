#include"Controller.h"
Controller::Controller(const ViewController& viewCtrl, const ContactList& contactCtrl)
{
	m_viewCtrl = viewCtrl;
	m_ContactCtrl = contactCtrl;
}
void Controller::startProgram()
{
	m_viewCtrl.showTopScreen();
	std::string s;
	std::cin >> s;
	if (s == "1")
	{
		std::cout << "Enter contact feature\n";
		startContactFeature();
	}
	else if (s == "2")
	{
		std::cout << "Enter messages feature\n";
	}
}
void Controller::Controller::startContactFeature()
{
	m_viewCtrl.showContactListScreen(m_ContactCtrl.getMyContectList());
	std::string userCmd;
	std::cin >> userCmd;
	if (userCmd == "1")
	{
		std::cout << "Enter name to find:\n";
		std::string s;
		std::cin >> s;
		std::list<Contact*>tmpContactList = m_ContactCtrl.findByName(s);
		if (!tmpContactList.empty())
		{
			std::cout << "-------------------------------------------------------------" << std::endl;
			for (auto res : tmpContactList)
			{
				res->showInfo();
			}
		}
		else
		{
			std::cout << "can not found with current name " << std::endl;
		}
		std::cout << "-------------------------------------------------------------" << std::endl;
	}
	if (userCmd == "2")
	{
		std::cout << "Enter phone number to find: " << std::endl;
		std::string s;
		std::cin >> s;
		std::list<Contact*>tmpContactList = m_ContactCtrl.findByPhoneNumber(s);
		if (!tmpContactList.empty())
		{
			std::cout << "-------------------------------------------------------------" << std::endl;
			for (auto res : tmpContactList)
			{
				res->showInfo();
			}
		}
		else
		{
			std::cout << "can not found with current phone number " << std::endl;
		}
		std::cout << "-------------------------------------------------------------" << std::endl;
	}
	if (userCmd == "3")
	{
		std::cout << "Enter email address to find:\n";
		std::string s;
		std::cin >> s;
		std::list<Contact*>tmpContactList = m_ContactCtrl.findByEmailAddress(s);
		if (!tmpContactList.empty())
		{
			std::cout << "-------------------------------------------------------------" << std::endl;
			for (auto res : tmpContactList)
			{
				res->showInfo();
			}
		}
		else
		{
			std::cout << "can not found with current email address " << std::endl;
		}
		std::cout << "-------------------------------------------------------------" << std::endl;
	}
	if (userCmd == "4")
	{
		int index = 0;
		std::cout << "Enter STT to delete contact:\n";
		std::string s;
		std::cin >> s;
		m_ContactCtrl.delContact(s);
		for (auto res : m_ContactCtrl.getMyContectList())
		{
			++index;
			res->setSTT(std::to_string(index));
		}
	}
	if (userCmd == "5")
	{
		std::string userCmd;
		std::cout << "1. update contact phone number" << std::endl;
		std::cout << "2. update contact email address" << std::endl;
		std::cin >> userCmd;
		if (userCmd == "1")
		{
			std::string id;
			std::cout << "Enter STT to update:" << std::endl;
			std::cin >> id;
			Contact* newContact = new ContactPhone();
			newContact->setSTT(id);
			newContact->inPut();
			m_ContactCtrl.updataContact(id, newContact);
		}
		if (userCmd == "2")
		{
			std::string id;
			std::cout << "Enter STT to update:" << std::endl;
			std::cin >> id;
			Contact* newContact = new ContactEmail();
			newContact->setSTT(id);
			newContact->inPut();
			m_ContactCtrl.updataContact(id, newContact);
		}
		ModelController m;
		std::list<Contact*>tmpContactList = m_ContactCtrl.getMyContectList();
		m.saveContactToFile("OutContactList.txt",tmpContactList);
	}
	if (userCmd == "6")
	{
		std::list<Contact*>tmpContactList = m_ContactCtrl.sortAZ();
		for (auto res : tmpContactList)
		{
			res->showInfo();
		}
	}
	if (userCmd == "7")
	{
		int index = 0;
		std::list<Contact*>tmpContactList = m_ContactCtrl.sortAZ();
		tmpContactList.reverse();
		for (auto res : tmpContactList)
		{
			index++;
			res->setSTT(std::to_string(index));
			res->showInfo();
		}
	}
	if (userCmd == "8")
	{
		startProgram();
	}
}