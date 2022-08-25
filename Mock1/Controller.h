#ifndef CONTROLLER_H_
#define CONTROLLER_H_
#include"ViewController.h"
#include"Contact.h"
#include"ModelController.h"
class  Controller
{
private:
	ViewController m_viewCtrl;
	ContactList m_ContactCtrl;
public:
	Controller(const ViewController& viewCtrl, const ContactList& contactCtrl);
	void startProgram();
	void startContactFeature();
};

#endif // !CONTROLLER_H_
