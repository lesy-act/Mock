#ifndef VIEWCONTROLLER_H_
#define VIEWCONTROLLER_H_

#include"ContactList.h"
#include"MessageList.h"
#include"ModelController.h"
#include"Contact.h"
#include<list>

class ViewController
{
public:
	void showTopScreen();
	void showContactListScreen(const std::list<Contact*>& contactList); 
	void showMessageListScreen(const std::list<Message*>& messtList);
};

#endif // !VIEWCONTROLLER_H_
