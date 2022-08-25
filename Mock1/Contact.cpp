#include"Contact.h"

Contact::Contact()
{

}
Contact::Contact(const std::string& contactName, const std::string& contactAddress, const std::string& STT)
{
	m_contactName = contactName;
	m_contactAddress = contactAddress;
	m_STT = STT;
}
Contact::Contact(const Contact& contact)
{
	m_contactName = contact.m_contactName;
	m_contactAddress = contact.m_contactAddress;
}
Contact::~Contact()
{

}
void Contact::setContactName(const std::string& contactName)
{
	m_contactName = contactName;
}
std::string Contact::getContactName()const
{
	return m_contactName;
}
void Contact::setContactAddress(const std::string& contacAddress)
{
	m_contactAddress = contacAddress;
}
std::string Contact::getContactAddress()const
{
	return m_contactAddress;
}
bool Contact::checkIsChar()
{
	for (auto c : m_contactName)
	{
		if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) != true)
		{
			return false;
		}
	}
	return true;
}
bool Contact::checkValidContactName()
{

	if (m_contactName.length() < 128 && checkIsChar())
	{
		return true;
	}
	return false;
}

void Contact::setSTT(std::string STT)
{
	m_STT = STT;
}

std::string Contact::getSTT()const
{
	return m_STT;
}