/*
Copyright (C) 2014 CU Galaxies
*/

#ifndef EVENTVADERCHOKECOMMAND_H_
#define EVENTVADERCHOKECOMMAND_H_

#include "server/zone/objects/scene/SceneObject.h"

class EventVaderChokeCommand : public QueueCommand {
public:

	EventVaderChokeCommand(const String& name, ZoneProcessServer* server)
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

#endif //EVENTVADERCHOKECOMMAND_H_
