#include"ContactList.h"
ContactList::ContactList()
{

}
ContactList::~ContactList()
{
	
}
std::list<Contact*>ContactList::findByName(const std::string& nameToFind)
{
	std::list<Contact*>tmpList;
	for (auto res : m_myContactList)
	{
		if (res->getContactName().compare(nameToFind) == 0)
		{
			tmpList.push_back(res);
		}
	}
	return tmpList;
}
std::list<Contact*>ContactList::findByPhoneNumber(const std::string& phoneNumberToFind)
{
	std::list<Contact*>tmpList;
	for (auto res : m_myContactList)
	{
		if (res->getNumberPhone1().compare(phoneNumberToFind) == 0)
		{
			tmpList.push_back(res);
		}
	}
	return tmpList;
}
std::list<Contact*>ContactList::findByEmailAddress(const std::string& EmailAddressToFind)
{
	std::list<Contact*>tmpList;
	for (auto res : m_myContactList)
	{
		if (res->getEmailAddress().compare(EmailAddressToFind) == 0)
		{
			tmpList.push_back(res);
		}
	}
	return tmpList;
}
void ContactList::delContact(const std::string& STT)
{
	std::list<Contact*>::iterator it = m_myContactList.begin();
	for (auto res : m_myContactList)
	{
		if (res->getSTT().compare(STT) == 0)
		{
			break;
		}
		it++;
	}
	m_myContactList.erase(it);
}
std::list<Contact*>ContactList::sortAZ()
{
	std::list<Contact*>tmpList;
	tmpList = m_myContactList;
	tmpList.sort((sortAZ_()));
	int index = 0;
	for (auto res : tmpList)
	{
		++index;
		res->setSTT(std::to_string(index));
	}
	return tmpList;
}
void ContactList::updataContact(std::string STT,  Contact* newContact)
{
	std::list<Contact*>::iterator it = m_myContactList.begin();
	for (auto res : m_myContactList)
	{
		if (res->getSTT().compare(STT) == 0)
		{
			break;
		}
		it++;
	}
	*it = newContact;
}
std::list<Contact*>ContactList::getMyContectList()
{
	return m_myContactList;
}
void ContactList::setMyContactList(const std::list<Contact*>& myContactList)
{
	m_myContactList = myContactList;
}
