/*
Copyright (C) 2014 CU Galaxies
*/

#ifndef SETVERBALASSAULTCOMMAND_H_
#define SETVERBALASSAULTCOMMAND_H_

#include "server/zone/objects/scene/SceneObject.h"

class SetVerbalAssaultCommand : public QueueCommand {
public:

	SetVerbalAssaultCommand(const String& name, ZoneProcessServer* server)
		: QueueCommand(name, server) {

	}

	int doQueueCommand(CreatureObject* creature, const uint64& target, const UnicodeString& arguments) {

		if (!checkStateMask(creature))
			return INVALIDSTATE;

		if (!checkInvalidLocomotions(creature))
			return INVALIDLOCOMOTION;

		return SUCCESS;
	}

};

#endif //SETVERBALASSAULTCOMMAND_H_
