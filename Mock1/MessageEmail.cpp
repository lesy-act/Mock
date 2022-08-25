#include"MessageEmail.h"
MessageEmail::MessageEmail()
{

}
MessageEmail::MessageEmail(const std::string& sendAddressEmail, const std::string& recvAddressEmail, const std::string& Subject, const std::vector<std::string>& cc, const std::vector<std::string>& bcc, const std::string Content):Message(Content)
{
	m_sendAddressEmail = sendAddressEmail;
	m_recvAddressEmail = recvAddressEmail;
	m_Subject = Subject;
	m_cc = cc;
	m_bcc = bcc;
}
MessageEmail::MessageEmail(const MessageEmail& mess)
{
	m_sendAddressEmail = mess.m_sendAddressEmail;
	m_recvAddressEmail = mess.m_recvAddressEmail;
	m_Subject = mess.m_Subject;
	m_cc = mess.m_cc;
	m_bcc = mess.m_bcc;
}
MessageEmail::~MessageEmail()
{

}
void MessageEmail::setSendAddressEmail(const std::string& sendAddressEmail)
{
	m_sendAddressEmail = sendAddressEmail;
}
void MessageEmail::setRecvAddressEmail(const std::string& recvAddressEmail)
{
	m_recvAddressEmail = recvAddressEmail;
}
void MessageEmail::setSubject(const std::string& Subject)
{
	m_Subject = Subject;
}
void MessageEmail::setCc(const std::vector<std::string>& cc)
{
	m_cc = cc;
}
void MessageEmail::setBcc(const std::vector<std::string>& bcc)
{
	m_bcc = bcc;
}
std::string MessageEmail::getSendAddressEmail()const
{
	return m_sendAddressEmail;
}
std::string MessageEmail::getRecvAddressEmail()const
{
	return m_recvAddressEmail;
}
std::string MessageEmail::getSubject()const
{
	return m_Subject;
}
std::vector<std::string> MessageEmail::getCc()const
{
	return m_cc;
}
std::vector<std::string> MessageEmail::getBcc()const
{
	return m_bcc;
}