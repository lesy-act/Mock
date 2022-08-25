#ifndef MESSAGE_SMS_H_
#define MESSAGE_SMS_H_
#include"Message.h"

class MessageSMS :public Message
{
private:
	std::string m_senderPhoneNumber;
	std::string m_recvPhoneNumber;
	std::string m_sendTime;
	std::string m_recvTime;
public:
	MessageSMS();
	MessageSMS(const std::string &senderPhoneNumber, const std::string& recvPhoneNumber, const std::string &sendTime, const std::string &recvTimeconst, const std::string& Content);
	MessageSMS(const MessageSMS& mess);
	~MessageSMS();
	void setSenderPhoneNumber(const std::string& senderPhoneNumber);
	void setRecvPhoneNumber(const std::string& recvPhoneNumber);
	void setSendTime(const std::string& sendTime);
	void setRecvTime(const std::string& recvTime);
	std::string getSenderPhoneNumber()const;
	std::string getRecvPhoneNumber()const;
	std::string getSendTime()const;
	std::string getRecvTime()const;
};

#endif // !MESSAGE_SMS_H_
