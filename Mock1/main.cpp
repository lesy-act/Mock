#include"ContactList.h"
#include"Controller.h"
#include"ViewController.h"
#include"ModelController.h"

int main()
{
	ModelController modelCtrl;
	ViewController viewObj;
	ContactList ctlObj;
	ctlObj.setMyContactList(modelCtrl.readConractFromFile("ContactList.txt"));
	Controller ctrlObj(viewObj, ctlObj);
	while (true)
	{
		ctrlObj.startProgram();
	}
	
	return 0;
}