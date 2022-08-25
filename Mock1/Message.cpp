#include"Message.h"
Message::Message()
{

}
Message::Message(const std::string& Sender, const std::string& Receiver, const std::string& Content, const Contact& contact, const FolderType& folderType, const DateTime& dateTime)
{
	m_sender = Sender;
	m_receiver = Receiver;
	m_Content = Content;
	m_Contact = contact;
	m_folderType = folderType;
	m_dateTime = dateTime;
}
Message::Message(const Message& message)
{
	m_sender = message.m_sender;
	m_receiver = message.m_receiver;
	m_Content = message.m_Content;
	m_Contact = message.m_Contact;
	m_folderType = message.m_folderType;
	m_dateTime = message.m_dateTime;
}
Message::~Message()
{

}
void Message::setSender(const std::string& Sender)
{
	m_sender = Sender;
}
void Message::setReceiver(const std::string& Receiver)
{
	m_receiver = Receiver;
}
void Message::setContent(const std::string& content)
{
	m_Content = content;
}
void Message::setContact(const Contact& contact)
{
	m_Contact = contact;
}
void Message::setFolderType(const FolderType& folderType)
{
	m_folderType = folderType;
}
void Message::setDateTime(const DateTime& dateTime)
{
	m_dateTime = dateTime;
}
std::string Message::getSender()const
{
	return m_sender;
}
std::string Message::getReceiver()const
{
	return m_receiver;
}
std::string Message::getContent()const
{
	return m_Content;
}
Contact Message::getContact()const
{
	return m_Contact;
}
FolderType Message::getFolderType()const
{
	return m_folderType;
}
DateTime Message::getDateTime()const
{
	return m_dateTime;
}