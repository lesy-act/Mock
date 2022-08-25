#ifndef CONTACT_EMAIL_H_
#define CONTACT_EMAIL_H_
#include"Contact.h"
#include<regex>
#include<iomanip>
class ContactEmail:public Contact
{
private:
	std::string m_emailAddress;
public:
	ContactEmail();
	ContactEmail(const std::string &contactName,const std::string &contactAddress, const std::string& STT, const std::string &emailAddress);
	explicit ContactEmail(const ContactEmail& contactEmail);
	~ContactEmail();
	void setEmailAddress(const std::string& emailAddress);
	std::string getEmailAddress()const;
	bool checkValidEmail(std::string emailAddress);
	void initObjFromData(const std::string& s)override;
	virtual void inPut()override;
	virtual void showInfo();
	virtual std::string writeToFile()override;
	friend std::ostream& operator<<(std::ostream& out, ContactEmail &contactEmail);
};
#endif // !CONTACT_EMAIL_H_
