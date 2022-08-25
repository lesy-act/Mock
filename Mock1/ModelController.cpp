#include"ModelController.h"
ModelController::ModelController()
{

}

ModelController::~ModelController()
{

}
Contact* ModelController::createNewContact(contactType myContactType, const std::string& s)
{
	switch (myContactType)
	{
	case Contact::contactType::eContactType_Phone:
	{
		Contact* newContact = new ContactPhone();
		newContact->initObjFromData(s);
		return newContact;
		break;
	}
	case Contact::contactType::eContactType_Email:
	{
		Contact* newContact = new ContactEmail();
		newContact->initObjFromData(s);
		return newContact;
		break;
	}
	default:
		break;
	}
	return nullptr;
}
std::list<Contact*> ModelController::readConractFromFile(const std::string path)
{
	std::list<Contact*>listContact;
	std::ifstream in(path);
	std::vector<std::string>Lines;
	std::string currentLine;
	if (in.is_open())
	{
		while (std::getline(in, currentLine))
		{
			Lines.push_back(currentLine);
		}
		Lines.erase(Lines.begin());
		for (std::string res : Lines)
		{
			if (res.find("@") != std::string::npos)
			{
				listContact.push_back(createNewContact(contactType::eContactType_Email, res));
			}
			else
			{
				listContact.push_back(createNewContact(contactType::eContactType_Phone, res));
			}	
		}
	}
	else
	{
		std::cout << "can not open file" << std::endl;
	}
	in.close();
	return listContact;
}

void ModelController::saveContactToFile(const std::string path, std::list<Contact*>&Contact)
{
	std::ofstream output;
	output.open(path, std::ios::out || std::ios::app);
	if (output)
	{
		for (auto res : Contact)
		{
			output << res->writeToFile() << std::endl;
		}
	}
	
}