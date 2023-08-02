#pragma once
#include "Action.h"
#include"../Figures/CFigure.h"
class SelectAction : public Action
{
	////////////////////////..DATA..MEMBER..//////////////////////
	Point p;
	/////////////////////////////////////////////////////////////
public:
	///////////////////////////..FUNCTIONS..//////////////////////
	SelectAction(ApplicationManager* pApp); //Constructor 

	virtual void ReadActionParameters();//Reads parameters required

	virtual void Execute(bool x);//Execute action 
	///////////////////////////////////////////////////////////////
};

