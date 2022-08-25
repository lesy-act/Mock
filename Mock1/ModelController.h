#ifndef MODELCONTROLLER_H_
#define MODELCONTROLLER_H_
#include"Contact.h"
#include<list>
#include"ContactPhone.h"
#include"ContactEmail.h"
#include"Message.h"
#include"MessageSMS.h"
#include"MessageEmail.h"

class ModelController:public Contact
{
public:
	ModelController();
	~ModelController();
	Contact* createNewContact(contactType myContactType, const std::string& s);
	std::list<Contact*> readConractFromFile(const std::string path);
	void saveContactToFile(const std::string path, std::list<Contact*>& Contact);
};

#endif // !MODELCONTROLLER_H_
