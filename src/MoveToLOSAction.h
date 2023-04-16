#pragma once
#ifndef __MOVE_TO_LOS_ACTION__
#define __MOVE_TO_LOS_ACTION__

#include "ActionNode.h"

class MoveToLOSAction : public ActionNode
{
public:
	MoveToLOSAction(Agent* agent );
	virtual ~MoveToLOSAction();

	virtual void Action() override; // Define our action here
};

#endif /* defined (__MOVE_TO_LOS_ACTION__) */