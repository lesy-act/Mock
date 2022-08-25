#include"ContactPhone.h"
ContactPhone::ContactPhone()
{
	m_phoneNumber1 = "0";
}

ContactPhone::ContactPhone(std::string contactName, std::string Address, std::string STT, std::string phoneNumber1) :Contact(contactName, Address,STT)
{
	m_phoneNumber1 = phoneNumber1;
}

ContactPhone::ContactPhone(const ContactPhone& newContactPhone)
{
	setContactName(newContactPhone.getContactName());
	setContactAddress(newContactPhone.getContactAddress());
	m_phoneNumber1 = newContactPhone.m_phoneNumber1;
}

ContactPhone::~ContactPhone()
{

}
void ContactPhone::setAddress(std::string Address)
{
	setContactAddress(Address);
}

void ContactPhone::setNumberPhone1(std::string numberPhone1)
{
	m_phoneNumber1 = numberPhone1;
}

std::string ContactPhone::getNumberPhone1()const
{
	return m_phoneNumber1;
}

std::string ContactPhone::getAddress()const
{
	return getContactAddress();
}

bool ContactPhone::checkValidPhoneNumber(std::string phoneNumbers)
{
	if ((phoneNumbers.length() == 10) && phoneNumbers[0] == '0')
	{
		return true;
	}
	return false;
}

bool ContactPhone::checkValidAddress()
{
	if (getContactAddress().length() < 1024)
	{
		return true;
	}
	return false;
}

void ContactPhone::initObjFromData(const std::string& s)
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
	setAddress(*(data.end() - 1));
	if (data.size() == 4)
	{
		m_phoneNumber1 = data[2];
	}
}
void ContactPhone::inPut()
{
	std::string contactName, contactAddress, phoneNumber1;
	std::cout << "Enter contact name: " << std::endl;
	std::cin >> contactName;
	setContactName(contactName);
	std::cout << "Enter contact address: " << std::endl;
	std::cin >> contactAddress;
	setContactAddress (contactAddress);
	std::cout << "Enter phoneNumber1: " << std::endl;
	std::cin >> phoneNumber1;
	if(checkValidPhoneNumber(phoneNumber1))
	{
		setNumberPhone1(phoneNumber1);
	}
	else
	{
		std::cout << "invalid phone number!" << std::endl;
		setNumberPhone1(getNumberPhone1());
	}
	
}
void ContactPhone::showInfo()
{
	std::cout << std::setw(30) << std::left<<getSTT() << std::setw(30) << std::left << getContactName() << " " << std::setw(30) << std::left << getNumberPhone1() << " " << std::setw(25) << std::left << " " << std::setw(13) << " " << std::left << getContactAddress() << std::endl;
	std::cout << "\n\n";
}
std::ostream& operator<<(std::ostream& out, ContactPhone& contactPhone)
{
	contactPhone.showInfo();
	return out;
}
std::string ContactPhone::writeToFile()
{
	return getSTT() +"                          " + getContactName() +"                          " + getNumberPhone1() + "                                                    " + getContactAddress();
}
