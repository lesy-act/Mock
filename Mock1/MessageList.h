#ifndef MESSAGE_LIST_H_
#define MESSAGE_LIST_H_
#include"Message.h"
#include"MessageEmail.h"
#include"MessageSMS.h"

class MessageList:public Message
{
public:
	void addNewMess(std::list<Message*>myMessList);
	void filSMSType(std::list<Message*>myMessList);
	void filEmailType (std::list<Message*>myMessList);
	void findWithPhoneNumber(std::list<Message*>myMessList);
	void findWithEmail(std::list<Message*>myMessList);
	void sortMess(std::list<Message*>myMessList);
};
#endif // !MESSAGE_LIST_H_

