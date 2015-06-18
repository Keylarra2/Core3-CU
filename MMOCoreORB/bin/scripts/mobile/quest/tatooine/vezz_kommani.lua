vezz_kommani = Creature:new {
	objectName = "",
	socialGroup = "",
	faction = "",
	level = 7,
	chanceHit = 0.260000,
	damageMin = 55,
	damageMax = 65,
	baseXp = 147,
	baseHAM = 270,
	baseHAMmax = 330,
	armor = 0,
	resists = {0,0,0,0,0,0,0,-1,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0.000000,
	ferocity = 0,
	pvpBitmask = NONE,
	creatureBitmask = HERD,
	optionsBitmask = 136,
	diet = HERBIVORE,

	templates = {"object/mobile/dressed_tatooine_scavenger.iff"},
	lootGroups = {},
	weapons = {},
	conversationTemplate = "fixer_mission_target_convotemplate",
	attacks = {}
}

CreatureTemplates:addCreatureTemplate(vezz_kommani, "vezz_kommani")