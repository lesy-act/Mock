#ifndef CONTACT_PHONE_H_
#define CONTACT_PHONE_H_
#include"Contact.h"
#include<vector>
#include<iomanip>
class ContactPhone:public Contact
{
private:
	std::string m_phoneNumber1;
public:
	ContactPhone();
	ContactPhone(std::string contactName, std::string Address, std::string STT, std::string phoneNumber1);
	explicit ContactPhone(const ContactPhone &newContactPhone);
	~ContactPhone();
	void setAddress(std::string Address);
	void setNumberPhone1(std::string numberPhone1);
	std::string getNumberPhone1()const;
	std::string getAddress()const;
	void initObjFromData(const std::string& s)override;
	bool checkValidPhoneNumber(std::string phoneNumbers);
	bool checkValidAddress();
	virtual void inPut()override;
	virtual std::string writeToFile()override;
	virtual void showInfo();
	//friend std::ostream& operator<<(std::ostream& out, ContactPhone &contactPhone);
};
#endif
