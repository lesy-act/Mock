#ifndef MESSAGE_EMAIL_H_
#define MESSAGE_EMAIL_H_
#include"Message.h"
class  MessageEmail :public Message
{
private:
	std::string m_sendAddressEmail;
	std::string m_recvAddressEmail;
	std::string m_Subject;
	std::vector<std::string> m_cc;
	std::vector<std::string> m_bcc;
public:
	MessageEmail();
	MessageEmail(const std::string& sendAddressEmail, const std::string& recvAddressEmail, const std::string& Subject, const std::vector<std::string>& cc, const std::vector<std::string>& bcc, const std::string Content);
	MessageEmail(const MessageEmail& mess);
	~MessageEmail();
	void setSendAddressEmail(const std::string& sendAddressEmail);
	void setRecvAddressEmail(const std::string& recvAddressEmail);
	void setSubject(const std::string& Subject);
	void setCc(const std::vector<std::string>& cc);
	void setBcc(const std::vector<std::string>& bcc);
	std::string getSendAddressEmail()const;
	std::string getRecvAddressEmail()const;
	std::string getSubject()const;
	std::vector<std::string> getCc()const;
	std::vector<std::string> getBcc()const;
};
#endif // !MESSAGE_EMAIL_H_
