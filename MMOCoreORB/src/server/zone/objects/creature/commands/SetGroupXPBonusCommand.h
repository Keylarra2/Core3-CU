/*
Copyright (C) 2014 CU Galaxies
*/

#ifndef SETGROUPXPBONUSCOMMAND_H_
#define SETGROUPXPBONUSCOMMAND_H_

#include "server/zone/objects/scene/SceneObject.h"

class SetGroupXPBonusCommand : public QueueCommand {
public:

	SetGroupXPBonusCommand(const String& name, ZoneProcessServer* server)
		: QueueCommand(name, server) {

	}

	int doQueueCommand(CreatureObject* creature, const uint64& target, const UnicodeString& arguments) const {

		if (!checkStateMask(creature))
			return INVALIDSTATE;

		if (!checkInvalidLocomotions(creature))
			return INVALIDLOCOMOTION;

		return SUCCESS;
	}

};

#endif //SETGROUPXPBONUSCOMMAND_H_
