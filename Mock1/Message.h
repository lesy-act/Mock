#ifndef MESSAGE_H_
#define MESSAGE_H_
#include<string>
#include"Contact.h"
#include"DateTime.h"
enum class FolderType
{
	eFolder_Inbox,
	eFolder_Outbox
};
class Message
{	
private:
	std::string m_sender;
	std::string m_receiver;
	std::string m_Content;
	Contact m_Contact;
	FolderType m_folderType;
	DateTime m_dateTime;
public:
	Message();
	Message(const std::string &Sender, const std::string &Receiver,const std::string &Content,const Contact &contact,const FolderType &folderType,const DateTime&dateTime);
	Message(const Message& message);
	virtual ~Message();
	void setSender(const std::string &Sender);
	void setReceiver(const std::string &Receiver);
	void setContent(const std::string &content);
	void setContact(const Contact& contact);
	void setFolderType(const FolderType& folderType);
	void setDateTime(const DateTime& dateTime);
	std::string getSender()const;
	std::string getReceiver()const;
	std::string getContent()const;
	Contact getContact()const;
	FolderType getFolderType()const;
	DateTime getDateTime()const;
};
#endif // !MESSAGE_H_
