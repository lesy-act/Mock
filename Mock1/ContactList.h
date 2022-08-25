#ifndef CONTACT_LIST_H_
#define CONTACT_LIST_H_
#include"Contact.h"
#include<list>
#include<algorithm>
struct sortAZ_
{
	bool operator()(const Contact* s1, const Contact* s2)
	{
		return (s1->getContactName()< s2->getContactName());
	}
};

class ContactList
{
private:
	std::list<Contact*>m_myContactList;
public:
	ContactList();
	~ContactList();
	void setMyContactList(const std::list<Contact*>& myContactList);
	std::list<Contact*>getMyContectList();
	std::list<Contact*>findByName(const std::string &nameToFind);
	std::list<Contact*>findByPhoneNumber(const std::string &phoneNumberToFind);
	std::list<Contact*>findByEmailAddress (const std::string &EmailAddressToFind);
	void delContact(const std::string &STT);
	void updataContact(std::string STT, Contact *newContact);
	std::list<Contact*>sortAZ();

};
#endif // !CONTACT_LIST_H_
