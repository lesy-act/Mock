#include"MessageSMS.h"
MessageSMS::MessageSMS()
{

}
MessageSMS::MessageSMS(const std::string& senderPhoneNumber, const std::string& recvPhoneNumber, const std::string& sendTime, const std::string& recvTime, const std::string& Content):Message(Content)
{
	m_senderPhoneNumber = senderPhoneNumber;
	m_recvPhoneNumber = recvPhoneNumber;
	m_recvTime = recvTime;
	m_sendTime = sendTime;
}
MessageSMS::MessageSMS(const MessageSMS& mess)
{
	m_recvPhoneNumber = mess.m_recvPhoneNumber;
	m_senderPhoneNumber = mess.m_senderPhoneNumber;
	m_recvTime = mess.m_recvTime;
	m_sendTime = mess.m_sendTime;
}
MessageSMS::~MessageSMS()
{

}
void MessageSMS::setSenderPhoneNumber(const std::string& senderPhoneNumber)
{
	m_senderPhoneNumber = senderPhoneNumber;
}
void MessageSMS::setRecvPhoneNumber(const std::string& recvPhoneNumber)
{
	m_recvPhoneNumber = recvPhoneNumber;
}
void MessageSMS::setSendTime(const std::string& sendTime)
{
	m_sendTime = sendTime;
}
void MessageSMS::setRecvTime(const std::string& recvTime)
{
	m_recvTime = recvTime;
}

std::string MessageSMS::getSenderPhoneNumber()const
{
	return m_senderPhoneNumber;
}
std::string MessageSMS::getRecvPhoneNumber()const
{
	return m_recvPhoneNumber;
}
std::string MessageSMS::getSendTime()const
{
	return m_sendTime;
}
std::string MessageSMS::getRecvTime()const
{
	return m_recvTime;
}
