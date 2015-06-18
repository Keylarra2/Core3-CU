at_st = Creature:new {
	objectName = "@mob/creature_names:at_st",
	socialGroup = "imperial",
	faction = "imperial",
	level = 125,
	chanceHit = 4.75,
	damageMin = 770,
	damageMax = 1250,
	baseXp = 11859,
	baseHAM = 50000,
	baseHAMmax = 61000,
	armor = 2,
	resists = {35,35,-1,100,100,15,15,100,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = ATTACKABLE + OVERT,
	creatureBitmask = PACK + KILLER,
	optionsBitmask = 128,
	diet = NONE,

	templates = {"object/mobile/atst.iff"},
	lootGroups = {},
	conversationTemplate = "",
	defaultAttack = "defaultdroidattack",
	defaultWeapon = "object/weapon/ranged/vehicle/vehicle_atst_ranged.iff",
}

CreatureTemplates:addCreatureTemplate(at_st, "at_st")