/*
 * commandsNEW.h
 *
 *  Created on: 16/01/2010
 *      Author: victor
 */

#ifndef COMMANDSNEW_H_
#define COMMANDSNEW_H_

#include "AdminCommand.h"
#include "AbandonQuestCommand.h"
#include "AborthyperspaceCommand.h"
#include "ActivateCloneCommand.h"
#include "ActivateInstanceCommand.h"
#include "ActivateQuestCommand.h"
#include "AddAllowedPlayerCommand.h"
#include "AddBannedPlayerCommand.h"
#include "AddFriendCommand.h"
#include "AddIgnoreCommand.h"
#include "AddMapLocationCommand.h"
#include "AddPowerCommand.h"
#include "AdjustLotCountCommand.h"
#include "AdrenalBoostCommand.h"
#include "AiIgnoreCommand.h"
#include "AimCommand.h"
#include "AimedShotCommand.h"
#include "AlertCommand.h"
#include "AnonCommand.h"
#include "ApplyPowerupCommand.h"
#include "AreaTauntCommand.h"
#include "AreatrackCommand.h"
#include "ArmorBreakCommand.h"
#include "AssignDroidCommand.h"
#include "AssistCommand.h"
#include "AssociateDroidControlDeviceWithShipCommand.h"
#include "AttackCommand.h"
#include "AuctionAcceptCommand.h"
#include "AuctionBidCommand.h"
#include "AuctionCancelCommand.h"
#include "AuctionCommand.h"
#include "AuctionCreateCommand.h"
#include "AuctionQueryCommand.h"
#include "AuctionRetrieveCommand.h"
#include "AuctionsayCommand.h"
#include "AvoidIncapacitationCommand.h"
#include "BactaInfusionCommand.h"
#include "BactaJabCommand.h"
#include "BactaShotCommand.h"
#include "BactaSprayCommand.h"
#include "BactaTossCommand.h"
#include "BandFlourishCommand.h"
#include "BandageCommand.h"
#include "BattlefieldStatusCommand.h"
#include "BerserkCommand.h"
#include "BetCommand.h"
#include "BindingStrikeCommand.h"
#include "BlazeOfGloryCommand.h"
#include "BleedAttackCommand.h"
#include "BlindAttackCommand.h"
#include "BlindRecoveryCommand.h"
#include "BoardShuttleCommand.h"
#include "BodyHitCommand.h"
#include "BodyShotCommand.h"
#include "BoosterOffCommand.h"
#include "BoosterOnCommand.h"
#include "BoostmoraleCommand.h"
#include "BroadcastAreaCommand.h"
#include "BroadcastCommand.h"
#include "BroadcastGalaxyCommand.h"
#include "BroadcastPlanetCommand.h"
#include "Bstrike1Command.h"
#include "Bstrike2Command.h"
#include "Bstrike3Command.h"
#include "BurstRunCommand.h"
#include "BurstShotCommand.h"
#include "CallToArmsCommand.h"
#include "CalledShotCommand.h"
#include "CancelCraftingSessionCommand.h"
#include "CenterOfBeingCommand.h"
#include "CenterStageCommand.h"
#include "ChangeBandMusicCommand.h"
#include "ChangeDanceCommand.h"
#include "ChangeMusicCommand.h"
#include "ChannelForceCommand.h"
#include "ChargeCommand.h"
#include "ChargeShotCommand.h"
#include "CheckForceStatusCommand.h"
#include "CityInfoCommand.h"
#include "CityReportCommand.h"
#include "CitybanCommand.h"
#include "CitypardonCommand.h"
#include "ClaimVeteranRewardCommand.h"
#include "ClearCompletedQuestCommand.h"
#include "ClearQueueCommand.h"
#include "ClearVeteranRewardCommand.h"
#include "ClientQualifiedForSkillCommand.h"
#include "CloakOfLavaCommand.h"
#include "CloneCommand.h"
#include "CloseContainerCommand.h"
#include "CloseLotteryContainerCommand.h"
#include "CloseWingsCommand.h"
#include "CobCommand.h"
#include "ColorSwirlCommand.h"
#include "ColorlightsCommand.h"
#include "CombatCommand.h"
#include "CombatEscapeCommand.h"
#include "CombatFeintCommand.h"
#include "CombatModeCheckCommand.h"
#include "CombatQueueCommand.h"
#include "CombatSpamCommand.h"
#include "CombatTargetCommand.h"
#include "ComboAttackCommand.h"
#include "CompleteQuestCommand.h"
#include "ConcealCommand.h"
#include "ConcealShotCommand.h"
#include "ConcussionShotCommand.h"
#include "ConfusionShotCommand.h"
#include "ConsentCommand.h"
#include "CorpseCommand.h"
#include "CounterAttackCommand.h"
#include "CountertoxinCommand.h"
#include "CountertoxinSprayCommand.h"
#include "CoupDeGraceCommand.h"
#include "CoverCommand.h"
#include "CoverchargeCommand.h"
#include "CraftCommand.h"
#include "CreateCreatureCommand.h"
#include "CreateManfSchematicCommand.h"
#include "CreateMissionElementCommand.h"
#include "CreateNPCCommand.h"
#include "CreatePrototypeCommand.h"
#include "CreateSpawningElementCommand.h"
#include "CreateSpawningElementWithDifficultyCommand.h"
#include "CreateStaticItemCommand.h"
#include "CreateVendorCommand.h"
#include "CreatureAreaAttackCommand.h"
#include "CreatureAreaBleedingCommand.h"
#include "CreatureAreaComboCommand.h"
#include "CreatureAreaDiseaseCommand.h"
#include "CreatureAreaKnockdownCommand.h"
#include "CreatureAreaPoisonCommand.h"
#include "CreatureBlindAttackCommand.h"
#include "CreatureDizzyAttackCommand.h"
#include "CreatureIntimidationAttackCommand.h"
#include "CreatureKnockdownAttackCommand.h"
#include "CreatureMeleeAttackCommand.h"
#include "CreaturePostureDownAttackCommand.h"
#include "CreaturePostureUpAttackCommand.h"
#include "CreatureRangedAttackCommand.h"
#include "CreatureStunAttackCommand.h"
#include "CreditsCommand.h"
#include "CrippleAttackCommand.h"
#include "CripplingShotCommand.h"
#include "CriticalShotCommand.h"
#include "CriticalStrikeCommand.h"
#include "CsAppendCommentCommand.h"
#include "CsCancelTicketCommand.h"
#include "CsConnectPlayerCommand.h"
#include "CsCreateTicketCommand.h"
#include "CsDisconnectPlayerCommand.h"
#include "CsGetArticleCommand.h"
#include "CsGetCommentsCommand.h"
#include "CsGetTicketsCommand.h"
#include "CsRequestCategoriesCommand.h"
#include "CsSearchKnowledgeBaseCommand.h"
#include "CuiConsentResponseCommand.h"
#include "CureDiseaseCommand.h"
#include "CurePackCommand.h"
#include "CurePoisonCommand.h"
#include "CustomizeDroidCommand.h"
#include "CustomizeVehicleCommand.h"
#include "CyborgBurstRunCommand.h"
#include "CyborgCriticalSnipeCommand.h"
#include "CyborgKickDownCommand.h"
#include "CyborgLightningCommand.h"
#include "CyborgReviveCommand.h"
#include "CyborgStrengthBuffCommand.h"
#include "CyborgSureShotCommand.h"
#include "DatabaseCommand.h"
#include "DazzleCommand.h"
#include "DeactivateQuestCommand.h"
#include "DeadBangCommand.h"
#include "DeathBlowCommand.h"
#include "DeathCountCommand.h"
#include "DebugCommand.h"
#include "DeclareOvertCommand.h"
#include "DeclareresidenceCommand.h"
#include "DeclineCommand.h"
#include "DecontaminateCommand.h"
#include "DecrepitStrikeCommand.h"
#include "DefaultActionCommand.h"
#include "DefaultAttackCommand.h"
#include "DefaultDroidAttackCommand.h"
#include "DefuseMinefieldCommand.h"
#include "DelegateFactionPointsCommand.h"
#include "DemolitionShotCommand.h"
#include "DenyServiceCommand.h"
#include "DeployTrapCommand.h"
#include "DestroyCommand.h"
#include "DestroyTargetCommand.h"
#include "DestroystructureCommand.h"
#include "DetonateDroidCommand.h"
#include "DeuteriumTossCommand.h"
#include "DiagnoseCommand.h"
#include "DisableTargetCommand.h"
#include "DisarmingShotCommand.h"
#include "DisbandCommand.h"
#include "DiseaseInnoculationCommand.h"
#include "DisinfectCommand.h"
#include "DismissGroupMemberCommand.h"
#include "DismountCommand.h"
#include "DismountandstoreCommand.h"
#include "DistractCommand.h"
#include "DiveShotCommand.h"
#include "DizzyAttackCommand.h"
#include "DizzyRecoveryCommand.h"
#include "DockCommand.h"
#include "DominateMindCommand.h"
#include "DotPackCommand.h"
#include "DoubleTimeCommand.h"
#include "DragIncapacitatedPlayerCommand.h"
#include "DragPlayerCommand.h"
#include "DrainForceCommand.h"
#include "DroidCommand.h"
#include "DuelCommand.h"
#include "DuelistStanceCommand.h"
#include "DumpObjectInformationCommand.h"
#include "DumpTargetInformationCommand.h"
#include "DumpZoneInformationCommand.h"
#include "EatCommand.h"
#include "EditAppearanceCommand.h"
#include "EditBankAccountCommand.h"
#include "EditBankCommand.h"
#include "EditStatsCommand.h"
#include "EjectCommand.h"
#include "ElectroliteDrainCommand.h"
#include "EmboldenpetsCommand.h"
#include "EmptyMailTargetCommand.h"
#include "EndDuelCommand.h"
#include "EndorphineInjectionCommand.h"
#include "EnragepetsCommand.h"
#include "Epulse1Command.h"
#include "Epulse2Command.h"
#include "Epulse3Command.h"
#include "EquilibriumCommand.h"
#include "EscapePodCommand.h"
#include "EshieldsCommand.h"
#include "EthrustCommand.h"
#include "EuphoriaCommand.h"
#include "EventBuffAreaCommand.h"
#include "EventBuffCommand.h"
#include "EventBuffTargetCommand.h"
#include "EventClearStatesCommand.h"
#include "EventDamageCommand.h"
#include "EventMoveToMeCommand.h"
#include "EventStorePetCommand.h"
#include "EventTefAreaCommand.h"
#include "EventTefClearCommand.h"
#include "EventTefTargetCommand.h"
#include "EventUndoMoveToMeCommand.h"
#include "EventVaderChokeCommand.h"
#include "EventWeaponCommand.h"
#include "EweaponsCommand.h"
#include "ExecuteKnowledgeBaseMessageCommand.h"
#include "ExtinguishFireCommand.h"
#include "ExtractObjectCommand.h"
#include "EyeShotCommand.h"
#include "FactoryCrateSplitCommand.h"
#include "FanShotCommand.h"
#include "FeaturedSoloCommand.h"
#include "FeignDeathCommand.h"
#include "FindCommand.h"
#include "FindFriendCommand.h"
#include "FindMyTrainerCommand.h"
#include "FindObjectCommand.h"
#include "FindPlayerCommand.h"
#include "FirearmStrikeCommand.h"
#include "Firejet2Command.h"
#include "FirejetCommand.h"
#include "FishCommand.h"
#include "FlashSpeederCommand.h"
#include "FloCommand.h"
#include "FloorLightsCommand.h"
#include "FlourishCommand.h"
#include "FocusFireCommand.h"
#include "ForageCommand.h"
#include "ForceAbsorbCommand.h"
#include "ForceArmorCommand.h"
#include "ForceAuraCommand.h"
#include "ForceBreachCommand.h"
#include "ForceChokeCommand.h"
#include "ForceCloakCommand.h"
#include "ForceCommandCommand.h"
#include "ForceCureDiseaseCommand.h"
#include "ForceCurePoisonCommand.h"
#include "ForceExtinguishCommand.h"
#include "ForceFeedbackCommand.h"
#include "ForceHealCommand.h"
#include "ForceHitCommand.h"
#include "ForceInfusionCommand.h"
#include "ForceIntimidateCommand.h"
#include "ForceKnockdownCommand.h"
#include "ForceLightningAreaCommand.h"
#include "ForceLightningCommand.h"
#include "ForceMeditateCommand.h"
#include "ForceOfWillCommand.h"
#include "ForcePowersQueueCommand.h"
#include "ForceProtectionCommand.h"
#include "ForceResistBleedingCommand.h"
#include "ForceResistDiseaseCommand.h"
#include "ForceResistPoisonCommand.h"
#include "ForceResistStatesCommand.h"
#include "ForceRunCommand.h"
#include "ForceSapCommand.h"
#include "ForceShieldCommand.h"
#include "ForceShockCommand.h"
#include "ForceSpeedCommand.h"
#include "ForceStrikeCommand.h"
#include "ForceSuppressionCommand.h"
#include "ForceThrowCommand.h"
#include "ForceValorCommand.h"
#include "ForceWaveCommand.h"
#include "ForceWeakenCommand.h"
#include "ForceWoundHealCommand.h"
#include "FormupCommand.h"
#include "FreezePlayerCommand.h"
#include "FullAutoAreaCommand.h"
#include "GCommand.h"
#include "GallopCommand.h"
#include "GallopStopCommand.h"
#include "GcCommand.h"
#include "GcwStatusCommand.h"
#include "GenerateCraftedItemCommand.h"
#include "GetAccountInfoCommand.h"
#include "GetAttributesBatchCommand.h"
#include "GetAttributesCommand.h"
#include "GetFriendListCommand.h"
#include "GetGameTimeCommand.h"
#include "GetIgnoreListCommand.h"
#include "GetMapLocationsCommand.h"
#include "GetObjVarsCommand.h"
#include "GetPlayerIdCommand.h"
#include "GetPrototypeCommand.h"
#include "GetRankCommand.h"
#include "GetSpawnDelaysCommand.h"
#include "GetStationNameCommand.h"
#include "GetVeteranRewardTimeCommand.h"
#include "GetVeteranRewardTimeCsCommand.h"
#include "GiveItemCommand.h"
#include "GiveMaintenanceToVendorCommand.h"
#include "GivevendormaintCommand.h"
#include "GmCreateClassResourceCommand.h"
#include "GmCreateSpecificResourceCommand.h"
#include "GmForceCommandCommand.h"
#include "GmForceRankCommand.h"
#include "GmFsVillageCommand.h"
#include "GmJediStateCommand.h"
#include "GmReviveCommand.h"
#include "GmWeaponCommand.h"
#include "GotoCommand.h"
#include "GrantBadgeAreaCommand.h"
#include "GrantBadgeCommand.h"
#include "GrantPadawanTrialsEligibilityCommand.h"
#include "GrantSkillCommand.h"
#include "GrantTitleCommand.h"
#include "GrantZoningRightsCommand.h"
#include "GroupChatCommand.h"
#include "GroupLootCommand.h"
#include "GuildCommand.h"
#include "GuildremoveCommand.h"
#include "GuildstatusCommand.h"
#include "HandleClientLoginCommand.h"
#include "HarmfulCommand.h"
#include "HarmlessCommand.h"
#include "HarvestCorpseCommand.h"
#include "HarvesterActivateCommand.h"
#include "HarvesterDeactivateCommand.h"
#include "HarvesterDiscardHopperCommand.h"
#include "HarvesterGetResourceDataCommand.h"
#include "HarvesterHarvestCommand.h"
#include "HarvesterMakeCrateCommand.h"
#include "HarvesterSelectResourceCommand.h"
#include "HarvesterTakeSurveyCommand.h"
#include "HasVeteranRewardCommand.h"
#include "HaveconsentCommand.h"
#include "HeadHitCommand.h"
#include "HeadShotCommand.h"
#include "HealDroidDamageCommand.h"
#include "HealDroidWoundCommand.h"
#include "HealPetCommand.h"
#include "HealStateCommand.h"
#include "HealStatesCommand.h"
#include "HealWoundCommand.h"
#include "HemmorrhageCommand.h"
#include "HighYieldCommand.h"
#include "HoloEmoteCommand.h"
#include "HyperspaceCommand.h"
#include "IffscrambleCommand.h"
#include "ImagedesignCommand.h"
#include "ImpaleCommand.h"
#include "InfectCommand.h"
#include "InitializeComponentCommand.h"
#include "InnateCommand.h"
#include "InsertItemIntoShipComponentSlotCommand.h"
#include "InsidiousMaladyCommand.h"
#include "InspacereloadCommand.h"
#include "InspacerepairCommand.h"
#include "InspacerrCommand.h"
#include "InspectCommand.h"
#include "InspireCommand.h"
#include "InstallMissionTerminalCommand.h"
#include "InstallShipComponentCommand.h"
#include "InsureCommand.h"
#include "IntimidateCommand.h"
#include "IntimidateShotCommand.h"
#include "IntimidationAttackCommand.h"
#include "InviteCommand.h"
#include "InvulnerableCommand.h"
#include "ItemmovebackCommand.h"
#include "ItemmovedownCommand.h"
#include "ItemmoveforwardCommand.h"
#include "ItemmoveupCommand.h"
#include "ItemrotateleftCommand.h"
#include "ItemrotaterightCommand.h"
#include "JediMindTrickCommand.h"
#include "JoinCommand.h"
#include "JoinGameCommand.h"
#include "Jstart1Command.h"
#include "Jstart2Command.h"
#include "Jstart3Command.h"
#include "KickCommand.h"
#include "KillCommand.h"
#include "KillPlayerCommand.h"
#include "KipUpShotCommand.h"
#include "KneecapShotCommand.h"
#include "KneelCommand.h"
#include "KnockdownAttackCommand.h"
#include "KnockdownFireCommand.h"
#include "KnockdownRecoveryCommand.h"
#include "LagCommand.h"
#include "LaserShowCommand.h"
#include "LastDitchCommand.h"
#include "LaunchCountermeasureCommand.h"
#include "LaunchFireworkCommand.h"
#include "LaunchIntoSpaceCommand.h"
#include "LaunchMissileCommand.h"
#include "LeaveGameCommand.h"
#include "LeaveGroupCommand.h"
#include "LeaveStationCommand.h"
#include "LegHitCommand.h"
#include "LegShotCommand.h"
#include "LegSweepCommand.h"
#include "LethalShotCommand.h"
#include "LfgCommand.h"
#include "LightEngineScrambleCommand.h"
#include "ListActiveQuestsCommand.h"
#include "ListCompletedQuestsCommand.h"
#include "ListGuildsCommand.h"
#include "ListenCommand.h"
#include "LogoutCommand.h"
#include "LogoutServerCommand.h"
#include "LootAiCorpseCommand.h"
#include "LootAllCommand.h"
#include "LootCommand.h"
#include "LootPlayerCorpseCommand.h"
#include "LowBlowCommand.h"
#include "LungeCommand.h"
#include "MakeLeaderCommand.h"
#include "MakeMasterLooterCommand.h"
#include "MakeSurveyCommand.h"
#include "ManufactureCommand.h"
#include "MarketCommand.h"
#include "MaskscentCommand.h"
#include "MaxCombatAbilityCommand.h"
#include "MaxForcePowerCommand.h"
#include "MaxStatsCommand.h"
#include "MedicalForageCommand.h"
#include "MeditateCommand.h"
#include "MeleeAssaultCommand.h"
#include "MeleeHitCommand.h"
#include "MeleeStrikeCommand.h"
#include "MindBlastCommand.h"
#include "MinefieldAttackCommand.h"
#include "MoneyCommand.h"
#include "MountCommand.h"
#include "MoveFurnitureCommand.h"
#include "MultiTargetPistolShotCommand.h"
#include "MultiTargetShotCommand.h"
#include "NameStructureCommand.h"
#include "NblastCommand.h"
#include "NeurotoxinCommand.h"
#include "NewbieRequestStartingLocationsCommand.h"
#include "NewbieSelectStartingLocationCommand.h"
#include "NewbiehelperCommand.h"
#include "NextCraftingStageCommand.h"
#include "NpcCommand.h"
#include "NpcConversationSelectCommand.h"
#include "NpcConversationStartCommand.h"
#include "NpcConversationStopCommand.h"
#include "NutrientInjectionCommand.h"
#include "ObjectCommand.h"
#include "ObjvarCommand.h"
#include "OpenContainerCommand.h"
#include "OpenLotteryContainerCommand.h"
#include "OpenWingsCommand.h"
#include "OverchargeShotCommand.h"
#include "OverkillShotCommand.h"
#include "OverrideActiveMonthsCommand.h"
#include "OverridePadawanTrialsEligibilityCommand.h"
#include "OverwhelmingShotCommand.h"
#include "PaWithdrawCommand.h"
#include "PaintTargetCommand.h"
#include "PanicShotCommand.h"
#include "ParalyzeCommand.h"
#include "ParryRiposteCommand.h"
#include "PauseDanceCommand.h"
#include "PauseMusicCommand.h"
#include "PaymaintenanceCommand.h"
#include "PeaceCommand.h"
#include "PermissionListModifyCommand.h"
#include "PetBleedAttackCommand.h"
#include "PetBlindAttackCommand.h"
#include "PetDefenseBreakAttackCommand.h"
#include "PetIntimidateAttackCommand.h"
#include "PetKnockdownAttackCommand.h"
#include "PetPinAttackCommand.h"
#include "PetStareAttackCommand.h"
#include "PetStunAttackCommand.h"
#include "PilotShipCommand.h"
#include "PistolWhipCommand.h"
#include "PlaceBattlefieldStructureCommand.h"
#include "PlaceStructureCommand.h"
#include "PlaceStructureModeCommand.h"
#include "PlacedShotCommand.h"
#include "PlanetCommand.h"
#include "PlanetsayCommand.h"
#include "PlanetwarpCommand.h"
#include "PlanetwarpTargetCommand.h"
#include "PlayerInfoCommand.h"
#include "PlayerManagerCommand.h"
#include "PointBlankAreaCommand.h"
#include "PointBlankShotCommand.h"
#include "PoisonInnoculationCommand.h"
#include "PostureDownAttackCommand.h"
#include "PostureUpAttackCommand.h"
#include "PowerAttackCommand.h"
#include "PowerBoostCommand.h"
#include "ProneCommand.h"
#include "Ptrap1Command.h"
#include "Ptrap2Command.h"
#include "PumpreactorCommand.h"
#include "PurchaseReinforcementCommand.h"
#include "PurchaseTicketCommand.h"
#include "QatoolCommand.h"
#include "QuickDrawCommand.h"
#include "RallyCommand.h"
#include "RallyPointCommand.h"
#include "RampageCommand.h"
#include "RangedShotCommand.h"
#include "RapidFireCommand.h"
#include "RecklessShotCommand.h"
#include "ReconnectToTransferServerCommand.h"
#include "RecruitSkillTrainerCommand.h"
#include "RegainConsciousnessCommand.h"
#include "RegenerationCommand.h"
#include "RegisterWithLocationCommand.h"
#include "ReloadCommand.h"
#include "RemoteCommand.h"
#include "RemoveAllowedPlayerCommand.h"
#include "RemoveBannedPlayerCommand.h"
#include "RemoveFriendCommand.h"
#include "RemoveIgnoreCommand.h"
#include "RepairBattlefieldStructureCommand.h"
#include "RepairShipComponentInSlotCommand.h"
#include "ReportCommand.h"
#include "RequestBadgesCommand.h"
#include "RequestBiographyCommand.h"
#include "RequestCharacterMatchCommand.h"
#include "RequestCharacterSheetInfoCommand.h"
#include "RequestCoreSampleCommand.h"
#include "RequestCraftingSessionCommand.h"
#include "RequestDraftSlotsBatchCommand.h"
#include "RequestDraftSlotsCommand.h"
#include "RequestManfSchematicSlotsCommand.h"
#include "RequestQuestTimersAndCountersCommand.h"
#include "RequestResourceWeightsBatchCommand.h"
#include "RequestResourceWeightsCommand.h"
#include "RequestSetStatMigrationDataCommand.h"
#include "RequestSpaceTrainerCommand.h"
#include "RequestStatMigrationDataCommand.h"
#include "RequestStatMigrationStartCommand.h"
#include "RequestStatMigrationStopCommand.h"
#include "RequestStimpackCommand.h"
#include "RequestSurveyCommand.h"
#include "RequestWaypointAtPositionCommand.h"
#include "ResSampleLoopCommand.h"
#include "RescueCommand.h"
#include "ResendLoginMessageToAllCommand.h"
#include "ResetJediCommand.h"
#include "ResourceCommand.h"
#include "ResourceContainerSplitCommand.h"
#include "ResourceContainerTransferCommand.h"
#include "ResourceSetNameCommand.h"
#include "RespecStatCommitCommand.h"
#include "RestartConversionCommand.h"
#include "RestartCraftingSessionCommand.h"
#include "RestrainingShotCommand.h"
#include "ResuscitatePlayerCommand.h"
#include "RetreatCommand.h"
#include "RevisionInfoCommand.h"
#include "RevivePlayerCommand.h"
#include "RevokeBadgeCommand.h"
#include "RevokeSkillCommand.h"
#include "RolePlayCommand.h"
#include "RollShotCommand.h"
#include "RotateFurnitureCommand.h"
#include "SaberArmorBreakCommand.h"
#include "SaberBlindCommand.h"
#include "SaberBodyHitCommand.h"
#include "SaberDervishCommand.h"
#include "SaberHeadHitCommand.h"
#include "SaberHitCommand.h"
#include "SaberLegHitCommand.h"
#include "SaberPowerAttackCommand.h"
#include "SaberSlashCommand.h"
#include "SaberSpinAttackCommand.h"
#include "SaberStrikeCommand.h"
#include "SaberStunStrikeCommand.h"
#include "SaberSweepCommand.h"
#include "SaberSwipeCommand.h"
#include "SaberThrowCommand.h"
#include "SampleCommand.h"
#include "SampleDNACommand.h"
#include "ScatterHitCommand.h"
#include "ScatterShotCommand.h"
#include "ScriptCommand.h"
#include "SeGogglesCommand.h"
#include "SearchCorpseCommand.h"
#include "SecondChanceCommand.h"
#include "SecretSpawnSpamCommand.h"
#include "SeethingAngerCommand.h"
#include "SelectDraftSchematicCommand.h"
#include "SendFormObjectDataCommand.h"
#include "SerotoninInjectionCommand.h"
#include "ServerAsteroidDataListenCommand.h"
#include "ServerAsteroidDataStopListeningCommand.h"
#include "ServerCommand.h"
#include "ServerCommandFactory.h"
#include "ServerDestroyObjectCommand.h"
#include "ServerInfoCommand.h"
#include "ServerStatisticsCommand.h"
#include "ServerSysGroupCommand.h"
#include "SetBiographyAdminCommand.h"
#include "SetBiographyCommand.h"
#include "SetBlazeOfGloryCommand.h"
#include "SetBoostmoraleCommand.h"
#include "SetCallToArmsCommand.h"
#include "SetCalledShotCommand.h"
#include "SetChargeCommand.h"
#include "SetCombatFeintCommand.h"
#include "SetCurrentSkillTitleCommand.h"
#include "SetDoubleTimeCommand.h"
#include "SetExperienceCommand.h"
#include "SetFactionCommand.h"
#include "SetFactionStandingCommand.h"
#include "SetFirstNameCommand.h"
#include "SetFormupCommand.h"
#include "SetGodModeCommand.h"
#include "SetGrievousAuthorizedCommand.h"
#include "SetGroupXPBonusCommand.h"
#include "SetHighYieldCommand.h"
#include "SetHueCommand.h"
#include "SetIntimidateCommand.h"
#include "SetLastNameCommand.h"
#include "SetLoginMessageCommand.h"
#include "SetLoginTitleCommand.h"
#include "SetMatchMakingCharacterIdCommand.h"
#include "SetMatchMakingPersonalIdCommand.h"
#include "SetMaximumSpawnTimeCommand.h"
#include "SetMinimumSpawnTimeCommand.h"
#include "SetMoodCommand.h"
#include "SetMoodInternalCommand.h"
#include "SetNameCommand.h"
#include "SetOwnerCommand.h"
#include "SetPaintTargetCommand.h"
#include "SetPerformanceBuffTargetCommand.h"
#include "SetPlanetLimitCommand.h"
#include "SetPlayerAppearanceCommand.h"
#include "SetPlayerStateCommand.h"
#include "SetPublicStateCommand.h"
#include "SetRankCommand.h"
#include "SetRetreatCommand.h"
#include "SetSecondChanceCommand.h"
#include "SetSpeedCommand.h"
#include "SetSpokenLanguageCommand.h"
#include "SetSteadyaimCommand.h"
#include "SetTEFCommand.h"
#include "SetTacticsCommand.h"
#include "SetToughenCommand.h"
#include "SetVerbalAssaultCommand.h"
#include "SetVeteranRewardCommand.h"
#include "SetWarcryCommand.h"
#include "SetWaypointActiveStatusCommand.h"
#include "SetWaypointNameCommand.h"
#include "SetpermissionCommand.h"
#include "SetprivacyCommand.h"
#include "SherKarRageCommand.h"
#include "ShockCommand.h"
#include "ShowCouncilRankCommand.h"
#include "ShowDanceVisualsCommand.h"
#include "ShowFactionInformationCommand.h"
#include "ShowLockoutCommand.h"
#include "ShowMusicianVisualsCommand.h"
#include "ShowPvPRatingCommand.h"
#include "ShowSpawnRegionCommand.h"
#include "SitServerCommand.h"
#include "Sk_ShockWaveCommand.h"
#include "SkillCommand.h"
#include "SmokebombCommand.h"
#include "SniperShotCommand.h"
#include "SnoopCommand.h"
#include "SocialCommand.h"
#include "SocialInternalCommand.h"
#include "SpatialChatCommand.h"
#include "SpatialChatInternalCommand.h"
#include "SpawnStatusCommand.h"
#include "SpinAttackCommand.h"
#include "SplitCreditsWithGroupCommand.h"
#include "SpotlightCommand.h"
#include "SprayShotCommand.h"
#include "SquadLeaderCommand.h"
#include "StabilizersCommand.h"
#include "StandCommand.h"
#include "StartBandCommand.h"
#include "StartCitySpawnerCommand.h"
#include "StartDanceCommand.h"
#include "StartMusicCommand.h"
#include "StartSpawnerCommand.h"
#include "StartTargetSpawnerCommand.h"
#include "StartTraceLoggingCommand.h"
#include "StartleShotCommand.h"
#include "StasisCommand.h"
#include "StatCommand.h"
#include "SteadyaimCommand.h"
#include "StopBandCommand.h"
#include "StopBleedingCommand.h"
#include "StopCitySpawnerCommand.h"
#include "StopCraftingSessionCommand.h"
#include "StopDanceCommand.h"
#include "StopMusicCommand.h"
#include "StopSpawnerCommand.h"
#include "StopTargetSpawnerCommand.h"
#include "StopTraceLoggingCommand.h"
#include "StoplisteningCommand.h"
#include "StoppingShotCommand.h"
#include "StopwatchingCommand.h"
#include "StormLordSpecialCommand.h"
#include "StructurestatusCommand.h"
#include "StunAttackCommand.h"
#include "StunRecoveryCommand.h"
#include "StunningBlowCommand.h"
#include "SuppressionFireCommand.h"
#include "SurrenderSkillCommand.h"
#include "SurveyCommand.h"
#include "SweepAttackCommand.h"
#include "SwitchWeaponModeCommand.h"
#include "SwordFlurryCommand.h"
#include "SynchronizedUiListenCommand.h"
#include "SynchronizedUiStopListeningCommand.h"
#include "SystemMessageCommand.h"
#include "TacticsCommand.h"
#include "TakeCoverCommand.h"
#include "TameCommand.h"
#include "TargetCommand.h"
#include "TauntCommand.h"
#include "TeachCommand.h"
#include "TeleportCommand.h"
#include "TeleportTargetCommand.h"
#include "TeleportToCommand.h"
#include "TellpetCommand.h"
#include "ThrowGrenadeCommand.h"
#include "ThrowTrapCommand.h"
#include "ThrowbugGrenadeCommand.h"
#include "ThrowcryobanGrenadeCommand.h"
#include "ThrowfragmentationGrenadeCommand.h"
#include "ThrowglopGrenadeCommand.h"
#include "Throwimperial_detonatorGrenadeCommand.h"
#include "ThrowprotonGrenadeCommand.h"
#include "Throwthermal_detonatorGrenadeCommand.h"
#include "ThyroidRuptureCommand.h"
#include "TipCommand.h"
#include "ToggleAwayFromKeyBoardCommand.h"
#include "ToggleCombatTauntsCommand.h"
#include "ToggleDisplayingFactionRankCommand.h"
#include "TorsoShotCommand.h"
#include "TotalHealCommand.h"
#include "ToughenCommand.h"
#include "TrainPetCommand.h"
#include "TransferForceCommand.h"
#include "TransferItemArmorCommand.h"
#include "TransferItemCommand.h"
#include "TransferItemMiscCommand.h"
#include "TransferItemWeaponCommand.h"
#include "TransferstructureCommand.h"
#include "TraumatizeCommand.h"
#include "TumbleToKneelingCommand.h"
#include "TumbleToProneCommand.h"
#include "TumbleToStandingCommand.h"
#include "TurretFireCommand.h"
#include "TurretFireManualCommand.h"
#include "TurretShotCommand.h"
#include "UnCityBanCommand.h"
#include "UnassociateDroidControlDeviceWithShipCommand.h"
#include "UnconsentCommand.h"
#include "UnderHandShotCommand.h"
#include "UndockCommand.h"
#include "UnfreezePlayerCommand.h"
#include "UninstallShipComponentCommand.h"
#include "UninviteCommand.h"
#include "UnpilotShipCommand.h"
#include "UnsnoopCommand.h"
#include "UnstickCommand.h"
#include "UseDoctorBagCommand.h"
#include "UseReconDroneCommand.h"
#include "UseSkillBuffCommand.h"
#include "VendorInfoCommand.h"
#include "VentriloquismCommand.h"
#include "VerbalAssaultCommand.h"
#include "VertFurnitureCommand.h"
#include "VitalizeCommand.h"
#include "VolleyFireAttackCommand.h"
#include "VolleyFireCommand.h"
#include "VrepairCommand.h"
#include "VrepairotherCommand.h"
#include "WarcryCommand.h"
#include "WarningShotCommand.h"
#include "WatchCommand.h"
#include "WaypointCommand.h"
#include "WeatherCommand.h"
#include "WipeItemsCommand.h"
#include "WookieeRoarCommand.h"





#endif /* COMMANDSNEW_H_ */

