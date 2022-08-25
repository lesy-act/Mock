#ifndef CONTACT_H_
#define CONTACT_H_
#include<string>
#include<sstream>
#include<fstream>
#include<iostream>
#include<vector>
class Contact
{
public:
	enum class contactType { eContactType_Phone, eContactType_Email };
private:
	std::string m_contactName;
	std::string m_contactAddress;
	std::string m_STT;
public:
	Contact();
	Contact(const std::string& contactName,const std::string &contactAddress, const std::string& STT);
	Contact(const Contact& contact);
	virtual ~Contact();
	void setContactName(const std::string& contacName);
	std::string getContactName()const;
	void setContactAddress(const std::string& contacAddress);
	std::string getContactAddress()const;
	void setSTT(std::string STT);
	std::string getSTT()const;
	bool checkValidContactName();
	bool checkIsChar();
	virtual void inPut() {}
	virtual void showInfo() {}
	virtual void initObjFromData(const std::string& s) {};
	virtual std::string writeToFile(){return "";}
	virtual std::string getEmailAddress()const { return""; }
	virtual std::string getNumberPhone1()const{ return ""; }
};

#endif // !CONTACT_H_	
