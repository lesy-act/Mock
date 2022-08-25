#include"ContactEmail.h"
ContactEmail::ContactEmail()
{
	m_emailAddress = " ";
}

ContactEmail::ContactEmail(const std::string& contactName, const std::string& contactAddress, const std::string& STT, const std::string& emailAddress) :Contact(contactName, contactAddress, STT)
{
	m_emailAddress = emailAddress;
}
ContactEmail::ContactEmail(const ContactEmail& contactEmail)
{
	m_emailAddress = contactEmail.getEmailAddress();
}

ContactEmail::~ContactEmail()
{

}

void ContactEmail::setEmailAddress(const std::string& emailAddress)
{
	m_emailAddress = emailAddress;
}

std::string ContactEmail::getEmailAddress()const
{
	return m_emailAddress;
}

bool ContactEmail::checkValidEmail(std::string emailAddress)
{
	const std::regex pattern(
		"(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
	return std::regex_match(emailAddress, pattern);
}

void ContactEmail::initObjFromData(const std::string& s)
{
	std::stringstream ss(s);
	std::string token;
	std::vector<std::string>data;
	while (ss >> token)
	{
		data.push_back(token);
	}
	setSTT(data[0]);
	setContactName(data[1]);
	setEmailAddress(data[2]);
	setContactAddress(data[3]);
}
void ContactEmail::inPut()
{
	std::string contactName, contactAddress, emailAddress;
	std::cout << "Enter contact name: " << std::endl;
	std::cin >> contactName;
	setContactName(contactName);
	std::cout << "Enter contact address: " << std::endl;
	std::cin >> contactAddress;
	setContactAddress(contactAddress);
	std::cout << "Enter email address: " << std::endl;
	std::cin >> emailAddress;
	if (checkValidEmail(emailAddress) == true)
	{
		setEmailAddress(emailAddress);
	}
	else
	{
		std::cout << "Email invalid\n";
		setEmailAddress("...");
	}
	
}
void ContactEmail::showInfo()
{
	std::cout << std::setw(30) << std::left << getSTT() << std::setw(30) << std::left << getContactName() << std::setw(30) << " "<< std::left << getEmailAddress() << std::setw(26)<<" " << std::left << getContactAddress() << std::endl;
	std::cout << "\n\n";
}
std::ostream& operator<<(std::ostream& out, ContactEmail& contactEmail)
{
	contactEmail.showInfo();
	return out;
}
std::string ContactEmail::writeToFile()
{

	return getSTT() +"                          " + getContactName() +"                                                    " + getEmailAddress() +"                          " + getContactAddress();
}
