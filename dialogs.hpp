//Game start
class set_params {
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.20 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_lps_frame_text;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.18 * safezoneH;//28
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_yes_text;
			tooltip = $STR_antistasi_dialogs_generic_button_yes_tooltip;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "loadLastSave = true; closeDialog 0;";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_no_text;
			tooltip = $STR_antistasi_dialogs_generic_button_no_tooltip;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "loadLastSave = false; closeDialog 0;";
		};
	};
};

//FLAG
class HQ_menu 			{
	idd=100;
	movingenable=false;

	class controls {
		//Structure
		class HQ_box: BOX
		{
			idc = 101;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.492103 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = 102;
			text = $STR_antistasi_dialogs_hq_frame_text;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.462103 * safezoneH;
		};
		class HQ_button_back: RscButton
		{
			idc = 103;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0";
		};
		//Buttons L and R
		class HQ_button_load: RscButton
		{
			idc = 104; 	//L1
			text = $STR_antistasi_dialogs_hq_button_withdraw_text;
			tooltip = $STR_antistasi_dialogs_hq_button_withdraw_tooltip;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "if (isMultiPlayer) then {if (player == theBoss) then {nul=call A3A_fnc_theBossSteal} else {[""Money Grab"", ""Only Player Commander has access to this function""] call A3A_fnc_customHint;}} else {[""Money Grab"", ""This function is MP only""] call A3A_fnc_customHint;};";
		};
		class HQ_button_savegame: RscButton
		{
			idc = 105; 	//L2
			text = $STR_antistasi_dialogs_hq_button_garrisons_text;
			tooltip = $STR_antistasi_dialogs_hq_button_garrisons_tooltip;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;if (player == theBoss) then {nul=CreateDialog ""build_menu""} else {[""Garrisons"", ""Only Player Commander has access to this function""] call A3A_fnc_customHint;};";
		};
		class HQ_button_moveHQ: RscButton
		{
			idc = 106;	//L3
			text = $STR_antistasi_dialogs_hq_button_move_headquarters_text;
			tooltip = $STR_antistasi_dialogs_hq_button_move_headquarters_tooltip;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;if (player == theBoss) then {nul = [] spawn A3A_fnc_moveHQ;} else {[""Move HQ"", ""Only Player Commander has access to this function""] call A3A_fnc_customHint;};";
		};
		class HQ_button_recruitUnit: RscButton
		{
			idc = 107;	//R1
			text = $STR_antistasi_dialogs_hq_button_members_list_text;
			tooltip = $STR_antistasi_dialogs_hq_button_members_list_tooltip;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "if (player == theBoss) then {if (isMultiplayer) then {nul = [] call A3A_fnc_membersList} else {[""Members List"", ""This function is MP only""] call A3A_fnc_customHint;}} else {[""Members List"", ""Only Player Commander has access to this function""] call A3A_fnc_customHint;};";
		};
		class HQ_button_recruitSquad: RscButton
		{
			idc = 108;	//R2
			text = $STR_antistasi_dialogs_hq_button_rebuild_assets_text;
			tooltip = $STR_antistasi_dialogs_hq_button_rebuild_assets_tooltip;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;if (player == theBoss) then {nul=[] spawn A3A_fnc_rebuildAssets} else {[""Recruit Squad"", ""Only Player Commander has access to this function""] call A3A_fnc_customHint;};";
		};
		class HQ_button_vehicle: RscButton
		{
			idc = 109;	//R3
			text = $STR_antistasi_dialogs_hq_button_train_ai_text;
			tooltip = $STR_antistasi_dialogs_hq_button_train_ai_tooltip;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;if (player == theBoss) then {nul = [] call A3A_fnc_FIAskillAdd} else {[""Recruit Vehicle"", ""Only Player Commander has access to this function""] call A3A_fnc_customHint;};";
		};
		class HQ_button_skill: RscButton
		{
			idc = 110;	//M4
			text = $STR_antistasi_dialogs_hq_button_garage_text;
			tooltip = $STR_antistasi_dialogs_hq_button_garage_tooltip;
			x = 0.37749 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = QUOTE(closeDialog 0;nul = [GARAGE_FACTION] spawn A3A_fnc_garage);
		};
	};
}; 										//slots: 6+1
class build_menu  			{
	idd=-1;
	movingenable=false;

	class controls {
		//Structure
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.30 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_build_frame_text;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.28 * safezoneH;
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0;_nul = createDialog ""HQ_menu"";";
		};
		//Action Buttons
		class 4slots_L1: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_build_minefield_button_text;
			tooltip = $STR_antistasi_dialogs_build_minefield_button_tooltip;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;_nul = createDialog ""minebuild_menu"";";
		};
		class 4slots_R1: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_build_outpost_button_text;
			tooltip = $STR_antistasi_dialogs_build_outpost_button_tooltip;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; [""create""] spawn A3A_fnc_outpostDialog";
		};
		class 4slots_L2: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_build_recruit_units_button_text;
			tooltip = $STR_antistasi_dialogs_build_recruit_units_button_tooltip;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; [""add""] spawn A3A_fnc_garrisonDialog";
		};
		class 4slots_R2: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_build_disband_units_button_text;
			tooltip = $STR_antistasi_dialogs_build_disband_units_button_tooltip;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; [""rem""] spawn A3A_fnc_garrisonDialog";
		};
	};
}; 										//slots: 4
class garrison_recruit 			{
	idd=100;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = 101;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.492103 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = 102;
			text = $STR_antistasi_dialogs_garrison_recruit_frame_text;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.462103 * safezoneH;
		};
		class HQ_button_back: RscButton
		{
			idc = 103;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			tooltip = $STR_antistasi_dialogs_generic_button_back_tooltip;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0;_nul = createDialog ""build_menu"";";
		};
		class HQ_button_rifleman: RscButton
		{
			idc = 104;
			text = $STR_antistasi_dialogs_garrison_spawn_rifleman_text;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKMil] spawn A3A_fnc_garrisonAdd";
		};
		class HQ_button_autorifleman: RscButton
		{
			idc = 105;
			text = $STR_antistasi_dialogs_garrison_spawn_autorifleman_text;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKMG] spawn A3A_fnc_garrisonAdd";
		};
		class HQ_button_medic: RscButton
		{
			idc = 126;
			text = $STR_antistasi_dialogs_garrison_spawn_medic_text;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKMedic] spawn A3A_fnc_garrisonAdd";
		};
		class HQ_button_engineer: RscButton
		{
			idc = 107;
			text = $STR_antistasi_dialogs_garrison_spawn_squad_lead_text;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKSL] spawn A3A_fnc_garrisonAdd";
		};
		class HQ_button_explosive: RscButton
		{
			idc = 108;
			text = $STR_antistasi_dialogs_garrison_spawn_mortar_text;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [staticCrewTeamPlayer] spawn A3A_fnc_garrisonAdd";
		};
		class HQ_button_grenadier: RscButton
		{
			idc = 109;
			text = $STR_antistasi_dialogs_garrison_spawn_grenadier_text;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKGL] spawn A3A_fnc_garrisonAdd";
		};
		class HQ_button_marksman: RscButton
		{
			idc = 110;
			text = $STR_antistasi_dialogs_garrison_spawn_marksman_text;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKSniper] spawn A3A_fnc_garrisonAdd";
		};

		class HQ_button_AT: RscButton
		{
			idc = 111;
			text = $STR_antistasi_dialogs_garrison_spawn_at_text;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKATman] spawn A3A_fnc_garrisonAdd";
		};
	};
};										//slots: 8
class minebuild_menu 			{
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.30 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_minefield_frame_text;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.28 * safezoneH;
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0;_nul = createDialog ""build_menu"";";
		};
		class HQ_button_mortar: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_minefield_button_anti_personel_text;
			tooltip = $STR_antistasi_dialogs_minefield_button_anti_personel_tooltip;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;[""APERSMine""] spawn A3A_fnc_mineDialog";
		};
		class HQ_button_MG: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_minefield_button_remove_text;
			tooltip = $STR_antistasi_dialogs_minefield_button_remove_tooltip;
			x = 0.37749 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; [""delete""] spawn A3A_fnc_mineDialog;";
		};
		class HQ_button_AT: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_minefield_button_anti_tank_text;
			tooltip = $STR_antistasi_dialogs_minefield_button_anti_tank_tooltip;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; [""ATMine""] spawn A3A_fnc_mineDialog";
		};
	};
};
class unit_recruit 		{
	idd= 100;
	movingenable=false;
	class controls {
		class HQ_box: BOX
		{
			idc = 101;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.492103 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = 102;
			text = $STR_antistasi_dialogs_unit_recruit_frame_text;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.462103 * safezoneH;
		};
		class HQ_button_back: RscButton
		{
			idc = 103;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0";
		};
		class HQ_button_rifleman: RscButton
		{
			idc = 104;
			text = $STR_antistasi_dialogs_unit_recruit_militiaman_text;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKMil] spawn A3A_fnc_reinfPlayer";
		};
		class HQ_button_autorifleman: RscButton
		{
			idc = 105;
			text = $STR_antistasi_dialogs_unit_recruit_mg_text;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKMG] spawn A3A_fnc_reinfPlayer";
		};
		class HQ_button_medic: RscButton
		{
			idc = 126;
			text = $STR_antistasi_dialogs_unit_recruit_medic_text;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKMedic] spawn A3A_fnc_reinfPlayer";
		};
		class HQ_button_engineer: RscButton
		{
			idc = 107;
			text = $STR_antistasi_dialogs_unit_recruit_engineer_text;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKEng] spawn A3A_fnc_reinfPlayer";
		};
		class HQ_button_explosive: RscButton
		{
			idc = 108;
			text = $STR_antistasi_dialogs_unit_recruit_explosive_text;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKExp] spawn A3A_fnc_reinfPlayer";
		};
		class HQ_button_grenadier: RscButton
		{
			idc = 109;
			text = $STR_antistasi_dialogs_unit_recruit_grenadier_text;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKGL] spawn A3A_fnc_reinfPlayer";
		};
		class HQ_button_marksman: RscButton
		{
			idc = 110;
			text = $STR_antistasi_dialogs_unit_recruit_marksman_text;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKSniper] spawn A3A_fnc_reinfPlayer";
		};

		class HQ_button_AT: RscButton
		{
			idc = 111;
			text = $STR_antistasi_dialogs_unit_recruit_antitank_text;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [SDKATman] spawn A3A_fnc_reinfPlayer";
		};
	};
};
class vehicle_option 	{
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.20 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_vehicle_purchase_buy_text;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.18 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_vehicle_purchase_civie_text;
			tooltip = $STR_antistasi_dialogs_vehicle_purchase_civie_tooltip;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; [] spawn A3A_fnc_buyVehicleCiv;";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_vehicle_purchase_military_text;
			tooltip = $STR_antistasi_dialogs_vehicle_purchase_military_tooltip;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			//action = "closeDialog 0; [] spawn A3A_fnc_buyVehicle;";
			action = "closeDialog 0; nul = createDialog ""mil_vehicles"";";
		};
	};
};
class air_vehicles {
	idd=100;
	movingenable=false;
	
	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.40 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_vehicle_purchase_military_air_vehicles;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.38 * safezoneH;
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0; nul = createDialog ""mil_vehicles"";";
		};
		class HQ_button_mi8: RscButton
		{
			idc = 101;
			text = "Mi-8 AMT";
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKHeliMi8] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_mi8mt: RscButton
		{
			idc = 102;
			text = "Mi-8 MT";
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKHeliMi8MT] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_mi24v: RscButton
		{
			idc = 103;
			text = "Mi-24V";
			x = 0.272481 * safezoneW + safezoneX;
		 	y = 0.415981 * safezoneH + safezoneY;
		 	w = 0.175015 * safezoneW;
		 	h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKHeliMi24V] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_l39: RscButton
		{
			idc = 104;
			text = "L39 Albatros";
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKPlaneL39] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_su25: RscButton
		{
			idc = 105;
			text = "Su-25";
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKPlaneSu25] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_mig29: RscButton
		{
			idc = 106;
			text = "MiG-29S";
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKPlaneMig29S] spawn A3A_fnc_addFIAveh;";
		};
	}
}
class mil_vehicles {
	idd=-1;
	movingenable=false;
	
	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.30 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_vehicle_purchase_military_text;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.28 * safezoneH;
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0; nul = createDialog ""vehicle_option"";";
		};
		class HQ_button_support: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_vehicle_purchase_military_support_text;
			tooltip = $STR_antistasi_dialogs_vehicle_purchase_military_support_tooltip;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; [] spawn A3A_fnc_buySupportVehicle;";
		};
		class HQ_button_offroad: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_vehicle_purchase_military_offroad_text;
			tooltip = $STR_antistasi_dialogs_vehicle_purchase_military_offroad_tooltip;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; [] spawn A3A_fnc_buyMilOffroad;";
		};
		class HQ_button_armored: RscButton
		{
			idc = -1;
		 	text = $STR_antistasi_dialogs_vehicle_purchase_military_armored_text;
			tooltip = $STR_antistasi_dialogs_vehicle_purchase_military_armored_tooltip;
			x = 0.272481 * safezoneW + safezoneX;
		 	y = 0.415981 * safezoneH + safezoneY;
		 	w = 0.175015 * safezoneW;
		 	h = 0.0560125 * safezoneH;
			action = "closeDialog 0; [] spawn A3A_fnc_buyMilArmored;";
		};
		class HQ_button_static: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_vehicle_purchase_military_static_text;
			tooltip = $STR_antistasi_dialogs_vehicle_purchase_military_static_tooltip;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; [] spawn A3A_fnc_buyMilStatic;";
		};
	}
}
class mil_vehicle_support {
	idd=100;
	movingenable=false;
	
	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.492103 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_vehicle_purchase_military_support_text;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.462103 * safezoneH;
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0; nul = createDialog ""mil_vehicles"";";
		};
		class HQ_button_heal: RscButton
		{
			idc = 101;
			text = "Heal truck";
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKHeal] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_mtruck: RscButton
		{
			idc = 102;
			text = "Medium Truck";
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKMediumTruck] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_truck: RscButton
		{
			idc = 103;
			text = "Truck";
			x = 0.272481 * safezoneW + safezoneX;
		 	y = 0.415981 * safezoneH + safezoneY;
		 	w = 0.175015 * safezoneW;
		 	h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKTruck] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_htruck: RscButton
		{
			idc = 104;
			text = "Heavy Truck";
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKHeavyTruck] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_fuel: RscButton
		{
			idc = 105;
			text = "Fuel truck";
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKFuel] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_repair: RscButton
		{
			idc = 106;
			text = "Repair truck";
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKRepair] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_ammo: RscButton
		{
			idc = 107;
			text = "Ammo truck";
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKAmmo] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_carrier: RscButton
		{
			idc = 108;
			text = "Carrier truck";
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKCarrier] spawn A3A_fnc_addFIAveh;";
		};
	}
}
class mil_vehicle_offroad {
	idd=100;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.492103 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_dialog_vehicle_purchase_civ_text;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.462103 * safezoneH;
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0; nul = createDialog ""mil_vehicles"";";
		};
		class HQ_button_quad: RscButton
		{
			idc = 101;
			text = "Quad bike";
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKBike] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_uaz_open: RscButton
		{
			idc = 102;
			text = "UAZ Open";
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKLightUnarmed] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_uaz_covered: RscButton
		{
			idc = 103;
		 	text = "GAZ66 Open";
			x = 0.272481 * safezoneW + safezoneX;
		 	y = 0.415981 * safezoneH + safezoneY;
		 	w = 0.175015 * safezoneW;
		 	h = 0.0560125 * safezoneH;
		 	action = "closeDialog 0;[vehSDKLightTruck] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_dshkm: RscButton
		{
			idc = 104;
			text = "UAZ DShKM";
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKLightArmed] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_ags: RscButton
		{
			idc = 105;
			text = "UAZ AGS";
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKGL] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_spg9: RscButton
		{
			idc = 106;
			text = "UAZ SPG9";
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKAT] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_ural_aa: RscButton
		{
			idc = 107;
			text = "URAL ZSU-23";
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKAA] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_brdm: RscButton
		{
			idc = 108;
			text = "BRDM 2M";
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKBRDM] spawn A3A_fnc_addFIAveh;";
		};
	};
};
class mil_vehicle_armored {
	idd=100;
	movingenable=false;
	
	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.492103 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_vehicle_purchase_military_text;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.462103 * safezoneH;
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0; nul = createDialog ""mil_vehicles"";";
		};
		class HQ_button_atgm: RscButton
		{
			idc = 101;
			text = "BRDM2 ATGM";
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closedialog 0; nul = [vehSDKATGM] spawn A3A_fnc_addFIAveh";
		};
		class HQ_button_btr: RscButton
		{
			idc = 102;
			text = "BTR80";
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKBTR] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_zsu: RscButton
		{
			idc = 103;
			text = "ZSU-23-4";
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKZSU] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_bmd: RscButton
		{
			idc = 104;
			text = "BMD1P";
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKBMD] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_bmp: RscButton
		{
			idc = 105;
			text = "BMP 2";
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKBMP] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_t72ba: RscButton
		{
			idc = 106;
			text = "T72 BA";
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKT72BA] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_t72bb: RscButton
		{
			idc = 107;
			text = "T72 BB";
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKT72BB] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_2S1: RscButton
		{
			idc = 108;
			text = "2C1";
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDK2S1] spawn A3A_fnc_addFIAveh;";
		};
	};
}
class mil_vehicle_static {
	idd=100;
	movingenable=false;
	
	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.492103 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_vehicle_purchase_military_text;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.462103 * safezoneH;
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0; nul = createDialog ""mil_vehicles"";";
		};
		class HQ_button_nsvt: RscButton
		{
			idc = 101;
			text = "NSVT";
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closedialog 0; nul = [SDKMGStatic1] spawn A3A_fnc_addFIAveh";
		};
		class HQ_button_dshkm: RscButton
		{
			idc = 102;
			text = "DSHKM";
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [SDKMGStatic] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_gl: RscButton
		{
			idc = 103;
			text = "AGS 30";
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [SDKGLStatic] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_at: RscButton
		{
			idc = 104;
			text = "SPG9M";
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [staticATteamPlayer] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_atm: RscButton
		{
			idc = 105;
			text = "AT Metis";
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [SDKATStatic] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_zu23: RscButton
		{
			idc = 106;
			text = "ZU-23-2";
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [staticAATeamPlayer] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_igla: RscButton
		{
			idc = 107;
			text = "Igla AA Pod";
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [SDKAAStatic] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_2b14: RscButton
		{
			idc = 108;
			text = "2B14 Podnos";
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [SDKMortar] spawn A3A_fnc_addFIAveh;";
		};
	};
}
class civ_vehicle {
	idd=100;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.30 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_dialog_vehicle_purchase_civ_text;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.28 * safezoneH;
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0; nul = createDialog ""vehicle_option"";";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = 104;
			text = $STR_antistasi_dialogs_dialog_vehicle_purchase_civ_offroad_text;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [civCar] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = 105;
			text = $STR_antistasi_dialogs_dialog_vehicle_purchase_civ_truck_text;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [civTruck] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_Gremove: RscButton
		{
			idc = 106;
			text = $STR_antistasi_dialogs_dialog_vehicle_purchase_civ_heli_text;
			//x = 0.37749 * safezoneW + safezoneX;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [civHeli] spawn A3A_fnc_addFIAveh;";
		};
		class HQ_button_offroad: RscButton
		{
			idc = 107;
		 	text = $STR_antistasi_dialogs_dialog_vehicle_purchase_civ_boat_text;
			x = 0.272481 * safezoneW + safezoneX;
		 	y = 0.415981 * safezoneH + safezoneY;
		 	w = 0.175015 * safezoneW;
		 	h = 0.0560125 * safezoneH;
		 	action = "closeDialog 0;[civBoat] spawn A3A_fnc_addFIAveh;";
		 };
	};
};

//Map
class game_options 		{
		idd=-1;
	movingenable=false;
	class controls {
		//Menu Structure
		class 8slots_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.492103 * safezoneH;
		};
		class 8slots_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_maps_game_options;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.462103 * safezoneH;
		};
		class 8slots_Back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;
			h = 0.05 * safezoneH;
			action = "closeDialog 0";
		};
		//Action Buttons
		class 8slots_L1: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_maps_civ_limit;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_maps_civ_limit_tooltip;
			action = "if (player == theBoss || call BIS_fnc_admin > 0 || isServer) then {closeDialog 0; nul = createDialog ""civ_config""} else {[""Civilian Spawn"", ""Only our Commander or admin has access to this function""] call A3A_fnc_customHint;};";
		};
		class 8slots_R1: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_maps_spawn_distance;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_maps_spawn_distance_tooltip;
			action = "if (player == theBoss || call BIS_fnc_admin > 0 || isServer) then {closeDialog 0; nul = createDialog ""spawn_config""} else {[""Spawn Distance"", ""Only our Commander or admin has access to this function""] call A3A_fnc_customHint;};";
		};
		class 8slots_L2: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_maps_ai_limiter;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_maps_ai_limiter_tooltip;
			action = "if (player == theBoss || call BIS_fnc_admin > 0 || isServer) then {closeDialog 0; nul = createDialog ""fps_limiter""} else {[""AI Limiter"", ""Only our Commander or admin has access to this function""] call A3A_fnc_customHint;};";
		};
		class 8slots_R2: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_maps_music;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_maps_music_tooltip;
			action = "closedialog 0; if (musicON) then {musicON = false; [""Music"", ""Music turned OFF""] call A3A_fnc_customHint;} else {musicON = true; [""Music"", ""Music turned ON""] call A3A_fnc_customHint;}; nul = execVM ""musica.sqf"";";
		};
		/*
		class 8slots_L3: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "";
			action = "";
		};
		class 8slots_R3: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "";
			action = "";
		};

		class 8slots_L4: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "";
			action = "";
		};
		class 8slots_R4: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = "";
			action = "";
		};
		*/
		class 8slots_M4: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_maps_save;
			x = 0.37749 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_maps_save_tooltip;
			action = "closeDialog 0; [] spawn A3A_fnc_persistentSave;";
		};
	};
};										//slots 6+1
class fps_limiter 			{
	idd=-1;
	movingenable=false;

	class controls {

		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.20 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_maps_ai_limiter;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.18 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0;_nul = createDialog ""game_options"";";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_maps_fps_limiter_plus;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "[player,'maxUnits','increase'] remoteExecCall ['A3A_fnc_HQGameOptions',2];";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_maps_fps_limiter_minus;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "[player,'maxUnits','decrease'] remoteExecCall ['A3A_fnc_HQGameOptions',2];";
		};
	};
};
class spawn_config 			{
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.20 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_maps_spawn_config;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.18 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0;_nul = createDialog ""game_options"";";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_maps_spawn_config_plus;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "[player,'distanceSPWN','increase'] remoteExecCall ['A3A_fnc_HQGameOptions',2];";

		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_maps_spawn_config_minus;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "[player,'distanceSPWN','decrease'] remoteExecCall ['A3A_fnc_HQGameOptions',2];";
		};
	};
};
class civ_config 			{
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.20 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_maps_civ_config;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.18 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0;_nul = createDialog ""game_options"";";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_maps_civ_config_plus;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "[player,'civPerc','increase'] remoteExecCall ['A3A_fnc_HQGameOptions',2];";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_maps_civ_config_minus;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "[player,'civPerc','decrease'] remoteExecCall ['A3A_fnc_HQGameOptions',2];";
		};
	};
};

//Solomon Maru
class mission_menu 		{
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.492103 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_mission_menu_available_missions;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.462103 * safezoneH;
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0";
		};
		class HQ_button_AS: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_mission_menu_assasination_missions;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;if (([player] call A3A_fnc_isMember) or (not(isPlayer theBoss))) then {[""AS"", clientOwner] remoteExec [""A3A_fnc_missionRequest"", 2]} else {[""Mission Request"", ""Only Player Commander has access to this function""] call A3A_fnc_customHint;};";
		};
		class HQ_button_CONV: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_mission_menu_convoy_ambush;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;if (([player] call A3A_fnc_isMember) or (not(isPlayer theBoss))) then {[""CONVOY"", clientOwner] remoteExec [""A3A_fnc_missionRequest"", 2]} else {[""Mission Request"", ""Only Player Commander has access to this function""] call A3A_fnc_customHint;};";
		};
		class HQ_button_DES: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_mission_menu_destroy_missions;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;if (([player] call A3A_fnc_isMember) or (not(isPlayer theBoss))) then {[""DES"", clientOwner] remoteExec [""A3A_fnc_missionRequest"", 2]} else {[""Mission Request"", ""Only Player Commander has access to this function""] call A3A_fnc_customHint;};";
		};
		class HQ_button_vehicle: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_mission_menu_conquest_missions;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;if (([player] call A3A_fnc_isMember) or (not(isPlayer theBoss))) then {[""CON"", clientOwner] remoteExec [""A3A_fnc_missionRequest"", 2]} else {[""Mission Request"", ""Only Player Commander has access to this function""] call A3A_fnc_customHint;};";
		};
		class HQ_button_LOG: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_mission_menu_logistics_missions;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_mission_menu_logistics_missions_tooltip;
			action = "closeDialog 0;if (([player] call A3A_fnc_isMember) or (not(isPlayer theBoss))) then {[""LOG"", clientOwner] remoteExec [""A3A_fnc_missionRequest"", 2]} else {[""Mission Request"", ""Only Player Commander has access to this function""] call A3A_fnc_customHint;};";
		};
		class HQ_button_SUPP: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_mission_menu_support_missions;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_mission_menu_support_missions_tooltip;
			action = "closeDialog 0;if (([player] call A3A_fnc_isMember) or (not(isPlayer theBoss))) then {[""SUPP"", clientOwner] remoteExec [""A3A_fnc_missionRequest"", 2]} else {[""Mission Request"", ""Only Player Commander has access to this function""] call A3A_fnc_customHint;};";
		};
		class HQ_button_RES: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_mission_menu_rescue_missions;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;if (([player] call A3A_fnc_isMember) or (not(isPlayer theBoss))) then {[""RES"", clientOwner] remoteExec [""A3A_fnc_missionRequest"", 2]} else {[""Mission Request"", ""Only Player Commander has access to this function""] call A3A_fnc_customHint;};";
		};
		class HQ_button_exit: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;";
		};
	};
};


//Y menu
class radio_comm 		{
	idd=-1;
	movingenable=false;
	class controls {
		//Menu Structure
		class 8slots_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.492103 * safezoneH;
		};
		class 8slots_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_radio_comm;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.462103 * safezoneH;
		};
		class 8slots_Back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;
			h = 0.05 * safezoneH;
			action = "closeDialog 0";
		};
		//Action Buttons
		class 8slots_L1: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_radio_comm_fast_travel;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_radio_comm_fast_travel_tooltip;
			action = "closeDialog 0; [] spawn A3A_fnc_fastTravelRadio;";
		};
		class 8slots_R1: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_radio_comm_player_money;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_radio_comm_player_money_tooltip;
			action = "closeDialog 0;if (isMultiPlayer) then {nul = createDialog ""player_money""} else {[""Money"", ""MP Only Menu""] call A3A_fnc_customHint;};";
		};
		class 8slots_L2: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_radio_comm_undercover;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_radio_comm_undercover_tooltip;
			action = "closeDialog 0;nul = [] spawn A3A_fnc_goUndercover";
		};
		class 8slots_R2: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_radio_comm_construct;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_radio_comm_construct_tooltip;
			action = "closeDialog 0;_nul = createDialog ""construction_menu"";";
		};
		class 8slots_L3: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_radio_comm_garage;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_radio_comm_garage_tooltip;
			action = "closeDialog 0; if (isMultiplayer && [player] call A3A_fnc_isMember) then {_nul = createDialog ""garage_check""} else {nul = [false] call A3A_fnc_garageVehicle};";
		};
		class 8slots_R3: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_radio_comm_unlock_vehicle;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_radio_comm_unlock_vehicle_tooltip;
			action = "closeDialog 0;[] call A3A_fnc_unlockVehicle";
		};
		class 8slots_L4: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_radio_comm_ai_management;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_radio_comm_ai_management_tooltip;
			action = "if (player == leader group player) then {closeDialog 0;nul = createDialog ""AI_management""} else {[""AI Management"", ""Only group leaders may access to this option""] call A3A_fnc_customHint;};";
		};
		class 8slots_R4: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_radio_comm_commander;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_radio_comm_commander_tooltip;
			action = "closeDialog 0; nul = createDialog ""commander_comm"";";
		};
	};
}; 										// slots: 8
class vehicle_manager 		{
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.30 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_vehicle_manager;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.28 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0;_nul = createDialog ""radio_comm"";";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_vehicle_manager_garage_sell_vehicle;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_vehicle_manager_garage_sell_vehicle_tooltip;
			action = "closeDialog 0;nul = createDialog ""garage_sell"";";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_vehicle_manager_vehicles_squads;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_vehicle_manager_vehicles_squads_tooltip;
			action = "closeDialog 0; if (player == theBoss) then {nul = createDialog ""squad_manager""} else {[""Vehicle Management"", ""Only Player Commander has access to this function""] call A3A_fnc_customHint;};";
		};

		class HQ_button_Gremove: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_vehicle_manager_add_air_support;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_vehicle_manager_add_air_support_tooltip;
			action = "closeDialog 0;nul = [] call A3A_fnc_addBombRun";
		};
		class HQ_button_unlock: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_vehicle_manager_unlock_vehicle;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_vehicle_manager_unlock_vehicle_tooltip;
			action = "closeDialog 0;[] call A3A_fnc_unlockVehicle";
		};
	};
};
class veh_query 				{
	idd=100;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = 101;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.20 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = 102;
			text = $STR_antistasi_dialogs_vehicle_manager_veh_query;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.18 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = 103;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0;vehQuery = nil; if (player == theBoss) then { [] spawn A3A_fnc_squadRecruit; } else {[""Recruit Squad"", ""Only Player Commander has access to this function""] call A3A_fnc_customHint;};";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = 104;
			text = $STR_antistasi_dialogs_generic_button_yes_text;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; vehQuery = true";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = 105;
			text = $STR_antistasi_dialogs_generic_button_no_text;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; vehQuery = nil";
		};
	};
};
class squad_manager 			{
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.30 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_squad_manager;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.28 * safezoneH;
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0;_nul = createDialog ""radio_comm"";";
		};
		class HQ_button_mortar: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_squad_manager_add_vehicle;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_squad_manager_add_vehicle_tooltip;
			action = "closeDialog 0;[] call A3A_fnc_addSquadVeh;";
		};
		class HQ_button_MG: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_squad_manager_squad_sitrep;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_squad_manager_squad_sitrep_tooltip;
			action = "[""stats""] call A3A_fnc_vehStats;";
		};
		class HQ_button_AT: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_squad_manager_mount;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_squad_manager_mount_tooltip;
			action = "[""mount""] call A3A_fnc_vehStats";
		};
		class HQ_button_AA: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_squad_manager_static_autotarget;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_squad_manager_static_autotarget_tooltip;
			action = "closeDialog 0; [] spawn A3A_fnc_staticAutoT";
		};
	};
};
class AI_management 		{
	idd=-1;
	movingenable=false;
	class controls {
		//Menu Structure
		class 8slots_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.492103 * safezoneH;
		};
		class 8slots_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_AI_management;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.462103 * safezoneH;
		};
		class 8slots_Back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;
			h = 0.05 * safezoneH;
			action = "closeDialog 0;nul = createDialog ""radio_comm"";";
		};
		//Action Buttons
		class 8slots_L1: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_AI_management_AI_control;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_AI_management_AI_control_tooltip;
		action = "closeDialog 0; if ((count groupselectedUnits player > 0) and (count hcSelected player > 0)) exitWith {[""AI Control"", ""You must select from HC or Squad Bars, not both""] call A3A_fnc_customHint;}; if (count groupselectedUnits player == 1) then {nul = [groupselectedUnits player] execVM ""REINF\controlunit.sqf""}; if (count hcSelected player == 1) then {nul = [hcSelected player] execVM ""REINF\controlHCsquad.sqf"";};";
		};
		class 8slots_R1: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_AI_management_auto_rearm;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_AI_management_auto_rearm_tooltip;
			action = "closeDialog 0; if (count groupselectedUnits player == 0) then {nul = (units group player) spawn A3A_fnc_rearmCall} else {nul = (groupselectedUnits player) spawn A3A_fnc_rearmCall};";
		};
		class 8slots_L2: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_AI_management_auto_heal;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_AI_management_auto_heal_tooltip;
			action = "if (autoHeal) then {autoHeal = false; [""AI Auto Heal"", ""Auto Healing disabled""] call A3A_fnc_customHint;} else {autoHeal = true; [""AI Auto Heal"", ""Auto Heal enabled""] call A3A_fnc_customHint; nul = [] spawn A3A_fnc_autoHealFnc}";
		};
		class 8slots_R2: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_AI_management_SITREP;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_AI_management_SITREP_tooltip;
			action = "[""stats""] call A3A_fnc_vehStats;";
		};
		class 8slots_L3: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_AI_management_garrison;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_AI_management_garrison_tooltip;
			action = "closeDialog 0;if (count groupselectedUnits player > 0) then {nul = [groupselectedUnits player] execVM ""REINF\addToGarrison.sqf""} else {if (count (hcSelected player) > 0) then {nul = [hcSelected player] execVM ""REINF\addToGarrison.sqf""}}; if ((count groupselectedUnits player == 0) and (count hcSelected player == 0)) then {[""Garrison"", ""No units or squads selected""] call A3A_fnc_customHint;}";
		};
		class 8slots_R3: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_AI_management_squad_add_vehicle;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_AI_management_squad_add_vehicle_tooltip;
			action = "closeDialog 0;[] call A3A_fnc_addSquadVeh;";
		};
		class 8slots_L4: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_AI_management_dismiss_units;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_AI_management_dismiss_units_tooltip;
			action = "closeDialog 0;if (count groupselectedUnits player > 0) then {nul = [groupselectedUnits player] execVM ""REINF\dismissPlayerGroup.sqf""} else {if (count (hcSelected player) > 0) then {nul = [hcSelected player] execVM ""REINF\dismissSquad.sqf""}}; if ((count groupselectedUnits player == 0) and (count hcSelected player == 0)) then {[""Dismiss Squad"", ""No units or squads selected""] call A3A_fnc_customHint;}";
		};
		class 8slots_R4: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_AI_management_mount;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_AI_management_mount_tooltips;
			action = "[""mount""] call A3A_fnc_vehStats";
		};
	};
};
class commander_comm 		{
	idd=-1;
	movingenable=false;
	class controls {
		//Menu Structure
		class 8slots_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.492103 * safezoneH;
		};
		class 8slots_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_commander_comm;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.462103 * safezoneH;
		};
		class 8slots_Back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;
			h = 0.05 * safezoneH;
			action = "closeDialog 0;nul = createDialog ""radio_comm"";";
		};
		//Action Buttons
		class 8slots_L1: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_commander_comm_recruit;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_commander_comm_recruit_tooltip;
			action = "closeDialog 0;if (player == theBoss) then { [] spawn A3A_fnc_squadRecruit; } else {[""Recruit Squad"", ""Only Player Commander has access to this function""] call A3A_fnc_customHint;};";
		};
		class 8slots_R1: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_commander_comm_air_support;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_commander_comm_air_support_tooltip;
			action = "closeDialog 0;if (player == theBoss) then {_nul = createDialog ""carpet_bombing""} else {[""Air Support"", ""Only Player Commander has access to this function""] call A3A_fnc_customHint;};";
		};
		class 8slots_L2: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_commander_comm_roadblock;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_commander_comm_roadblock_tooltip;
			action = "if (player == theBoss) then {closeDialog 0;[""create""] spawn A3A_fnc_outpostDialog} else {[""Outposts/Roadblocks"", ""You're not the Commander!""] call A3A_fnc_customHint;};";
		};
		class 8slots_R2: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_commander_comm_clean;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_commander_comm_clean_tooltip;
			action = "if (player == theBoss) then {closedialog 0;[] remoteExec [""A3A_fnc_garbageCleaner"",2]} else {[""Garbage Cleaner"", ""Only Player Commander has access to this function""] call A3A_fnc_customHint;};";
		};
		class 8slots_L3: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_commander_comm_roadblock_delete;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_commander_comm_roadblock_delete_tooltip;
			action = "if (player == theBoss) then {closeDialog 0; [""delete""] spawn A3A_fnc_outpostDialog} else {[""Outposts/Roadblocks"", ""You're not the Commander!""] call A3A_fnc_customHint;};";
		};
		class 8slots_R3: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_commander_comm_faction_garage;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_commander_comm_faction_garage_tooltip;
			action = "closeDialog 0; [true] call A3A_fnc_garageVehicle;";
		};
		class 8slots_L4: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_commander_comm_resign;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_commander_comm_resign_tooltip;
			action = "if (isMultiplayer) then {closedialog 0;[player, cursorTarget] remoteExec [""A3A_fnc_theBossToggleEligibility"", 2]} else {[""Resign Commander"", ""This feature is MP Only""] call A3A_fnc_customHint;};";
		};
		class 8slots_R4: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_commander_comm_sell;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_commander_comm_sell_tooltip;
			action = "if (player == theBoss) then {closeDialog 0; nul = [player,cursorObject] remoteExecCall [""A3A_fnc_sellVehicle"",2]} else {[""Sell Vehicle"", ""Only the Commander can sell vehicles""] call A3A_fnc_customHint;};";
		};
	};
};
class carpet_bombing 			{
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.30 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_carpet_bombing;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.28 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0; nul = createDialog ""radio_comm"";";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_carpet_bombing_HE;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_carpet_bombing_tooltip;
			action = "closeDialog 0;[""HE""] spawn A3A_fnc_NATObomb;";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_carpet_bombing_cluster;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_carpet_bombing_tooltip;
			action = "closeDialog 0;[""CLUSTER""] spawn A3A_fnc_NATObomb;";
		};
		class 4slots_L2: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_carpet_bombing_napalm;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_carpet_bombing_tooltip;
			action = "closeDialog 0;[""NAPALM""] spawn A3A_fnc_NATObomb;";
		};
		class 4slots_R2: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_carpet_bombing_add;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_carpet_bombing_add_tooltip;
			action = "closeDialog 0;nul = [] call A3A_fnc_addBombRun";
		};
	};
};


class dismiss_menu 				{
	idd=100;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.20 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_dismiss_menu;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.18 * safezoneH;//28
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_dismiss_menu_dismiss;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_dismiss_menu_dismiss_tooltip;
			action = "closeDialog 0;if (count groupselectedUnits player > 0) then {nul = [groupselectedUnits player] execVM ""REINF\dismissPlayerGroup.sqf""} else {if (count (hcSelected player) > 0) then {nul = [hcSelected player] execVM ""REINF\dismissSquad.sqf""}}; if ((count groupselectedUnits player == 0) and (count hcSelected player == 0)) then {[""Garrison Squad"", ""No units or squads selected""] call A3A_fnc_customHint;}";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_dismiss_menu_garrison;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_dismiss_menu_garrison_tooltip;
			action = "closeDialog 0;if (count groupselectedUnits player > 0) then {nul = [groupselectedUnits player] execVM ""REINF\addToGarrison.sqf""} else {if (count (hcSelected player) > 0) then {nul = [hcSelected player] execVM ""REINF\addToGarrison.sqf""}}; if ((count groupselectedUnits player == 0) and (count hcSelected player == 0)) then {[""Garrison Static"", ""No units or squads selected""] call A3A_fnc_customHint;}";
		};
		/*
		class HQ_button_Gremove: RscButton
		{
			idc = -1;
			text = "Remove Garrison Squads"; //--- ToDo: Localize;
			x = 0.37749 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [] call removeGarrison";
		};
		*/
	};
};
class construction_menu 	{
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.30 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_construction_menu;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.28 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0;_nul = createDialog ""radio_comm"";";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_construction_menu_small_trench;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_construction_menu_small_trench_tooltip;
			action = "closeDialog 0;nul = [""ST""] spawn A3A_fnc_build;";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_construction_menu_medium_trench;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_construction_menu_medium_trench_tooltip;
			action = "closeDialog 0; nul = [""MT""] spawn A3A_fnc_build;";
		};

		class HQ_button_Gremove: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_construction_menu_vehicle_obstacles;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_construction_menu_vehicle_obstacles_tooltip;
			action = "closeDialog 0;nul = [""RB""] spawn A3A_fnc_build;";
		};
		class HQ_button_unlock: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_construction_menu_bunker_options;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_construction_menu_bunker_options_tooltip;
			action = "closeDialog 0;nul = createDialog ""bunker_menu""";
		};
	};
};
class bunker_menu 				{
	idd=-1;
	movingenable=false;

	class controls {

		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.20 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_construction_menu_bunker_type;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.18 * safezoneH;//28
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_construction_menu_sandbag;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_construction_menu_bunker_tooltip;
			action = "closeDialog 0;nul = [""SB""] spawn A3A_fnc_build;";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_construction_menu_bunker_concrete;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_construction_menu_bunker_tooltip;
			action = "closeDialog 0;nul = [""CB""] spawn A3A_fnc_build;";
		};
		/*
		class HQ_button_Gremove: RscButton
		{
			idc = -1;
			text = "Remove Garrison Squads"; //--- ToDo: Localize;
			x = 0.37749 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [] call removeGarrison";
		};
		*/
	};
};
class squad_recruit 			{
	idd=100;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = 101;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.492103 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = 102;
			text = $STR_antistasi_dialogs_squad_recruit;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.462103 * safezoneH;
		};
		class HQ_button_back: RscButton
		{
			idc = 103;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0; _nul = createDialog ""radio_comm"";";
		};
		class HQ_button_infsquad: RscButton
		{
			idc = 104;
			text = $STR_antistasi_dialogs_squad_recruit_inf;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; [] spawn A3A_fnc_squadOptions;";
		};
		class HQ_button_infteam: RscButton
		{
			idc = 105;
			text = $STR_antistasi_dialogs_squad_recruit_inf_team;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [groupsSDKmid] spawn A3A_fnc_addFIAsquadHC";
		};
		class HQ_button_ATteam: RscButton
		{
			idc = 106;
			text = $STR_antistasi_dialogs_squad_recruit_at;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [groupsSDKAT] spawn A3A_fnc_addFIAsquadHC";
		};
		class HQ_button_sniperTeam: RscButton
		{
			idc = 107;
			text = $STR_antistasi_dialogs_squad_recruit_sniper;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [groupsSDKSniper] spawn A3A_fnc_addFIAsquadHC";
		};
		class HQ_button_infsquadM: RscButton
		{
			idc = 108;
			text = $STR_antistasi_dialogs_squad_recruit_mg;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [SDKMGStatic] spawn A3A_fnc_addFIAsquadHC";
		};
		class HQ_button_infteamM: RscButton
		{
			idc = 109;
			text = $STR_antistasi_dialogs_squad_recruit_at_car;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [vehSDKAT] spawn A3A_fnc_addFIAsquadHC";
		};
		class HQ_button_ATteamM: RscButton
		{
			idc = 110;
			text = $STR_antistasi_dialogs_squad_recruit_aa_car;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [staticAAteamPlayer] spawn A3A_fnc_addFIAsquadHC";
		};

		class HQ_button_mortar: RscButton
		{
			idc = 111;
			text = $STR_antistasi_dialogs_squad_recruit_mortar;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [SDKMortar] spawn A3A_fnc_addFIAsquadHC";
		};
	};
};
class player_money 			{
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.30 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_player_money;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.28 * safezoneH;
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0;_nul = createDialog ""radio_comm"";";
		};
		class HQ_button_mortar: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_player_money_add_member;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_player_money_add_member_tooltip;
			action = "if (isMultiplayer) then {closeDialog 0;nul = [""add""] call A3A_fnc_memberAdd;} else {[""Membership"", ""This function is MP only""] call A3A_fnc_customHint;};";
		};
		class HQ_button_MG: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_player_money_remove_member;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_player_money_remove_member_tooltip;
			action = "if (isMultiplayer) then {closeDialog 0;nul = [""remove""] call A3A_fnc_memberAdd;} else {[""Membership"", ""This function is MP only""] call A3A_fnc_customHint;};";
		};
		class HQ_button_AT: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_player_money_donate_player;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "[true] call A3A_fnc_donateMoney;";
		};
		class HQ_button_AA: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_player_money_donate_faction;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_player_money_donate_faction_tooltip;
			action = "[] call A3A_fnc_donateMoney;";
		};
	};
};
class garage_sell 			{
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.20 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_garage_sell;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.18 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0;_nul = createDialog ""vehicle_manager"";";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_garage_sell_add;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; if (isMultiplayer && [player] call A3A_fnc_isMember) then {_nul = createDialog ""garage_check""} else {nul = [false] call A3A_fnc_garageVehicle};";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_garage_sell_sell;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; if (player == theBoss) then {nul = [player,cursorObject] remoteExecCall [""A3A_fnc_sellVehicle"",2]} else {[""Sell Vehicle"", ""Only the Commander can sell vehicles""] call A3A_fnc_customHint;};";
		};
		/*
		class HQ_button_Gremove: RscButton
		{
			idc = -1;
			text = "Remove Garrison Squads"; //--- ToDo: Localize;
			x = 0.37749 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [] call removeGarrison";
		};
		*/
	};
};
class garage_check 				{
	idd=-1;
	movingenable=false;

	class controls {

		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.20 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_garage_check;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.18 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0;_nul = createDialog ""radio_comm"";";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_garage_personal;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [false] call A3A_fnc_garageVehicle;";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_garage_faction;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; nul = [true] call A3A_fnc_garageVehicle;";
		};
		/*
		class HQ_button_Gremove: RscButton
		{
			idc = -1;
			text = "Remove Garrison Squads"; //--- ToDo: Localize;
			x = 0.37749 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [] call removeGarrison";
		};
		*/
	};
};
class tu_madre 				{
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.30 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_carpet_bombing;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.28 * safezoneH;//28
		};
		class HQ_button_back: RscListBox
		{
			idc = -1;
			//text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 35) * 1.2)";
			colorText[] = {1,1,1,1}; // Text and frame color
			colorDisabled[] = {1,1,1,0.5}; // Disabled text color
			colorSelect[] = {1,1,1,1}; // Text selection color
			colorSelect2[] = {1,1,1,1}; // Text selection color (oscillates between this and colorSelect)
			colorShadow[] = {0,0,0,0.5}; // Text shadow color (used only when shadow is 1)
			pictureColor[] = {1,1,1,1}; // Picture color
			pictureColorSelect[] = {1,1,1,1}; // Selected picture color
			pictureColorDisabled[] = {0,1,0,1}; // Disabled picture color


			//action = "closeDialog 0; nul = createDialog ""NATO_Options"";";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_carpet_bombing_he;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_carpet_bombing_he_tooltip;
			action = "closeDialog 0;[""HE""] spawn A3A_fnc_NATObomb;";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_carpet_bombing_cluster;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_carpet_bombing_he_tooltip;
			action = "closeDialog 0;[""CLUSTER""] spawn A3A_fnc_NATObomb;";
		};

		class HQ_button_Gremove: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_carpet_bombing_napalm;
			x = 0.37749 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			tooltip = $STR_antistasi_dialogs_carpet_bombing_he_tooltip;
			action = "closeDialog 0;[""NAPALM""] spawn A3A_fnc_NATObomb;";
		};
	};
};



//Mortar shift+Y
class mortar_type {
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.20 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_mortar_type;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.18 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_mortar_type_he;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; typeAmmunition = SDKMortarHEMag;";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_mortar_type_smoke;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; typeAmmunition = SDKMortarSmokeMag;";
		};
		/*
		class HQ_button_Gremove: RscButton
		{
			idc = -1;
			text = "Remove Garrison Squads"; //--- ToDo: Localize;
			x = 0.37749 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [] call removeGarrison";
		};
		*/
	};
};
class rounds_number {
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.492103 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_rounds_number;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.462103 * safezoneH;
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0";
		};
		class HQ_button_AS: RscButton
		{
			idc = -1;
			text = "1";
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;roundsX = 1;";
		};
		class HQ_button_CONV: RscButton
		{
			idc = -1;
			text = "2";
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;roundsX = 2";
		};
		class HQ_button_DES: RscButton
		{
			idc = -1;
			text = "3";
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; roundsX = 3";
		};
		class HQ_button_LOG: RscButton
		{
			idc = -1;
			text = "5";
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;roundsX = 5";
		};
		class HQ_button_RES: RscButton
		{
			idc = -1;
			text = "7";
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.514003 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;roundsX = 7";
		};
		class HQ_button_vehicle: RscButton
		{
			idc = -1;
			text = "6";
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;roundsX = 6";
		};
		class HQ_button_fpsplus: RscButton
		{
			idc = -1;
			text = "4";
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; roundsX = 4";
		};

		class HQ_button_AA: RscButton
		{
			idc = -1;
			text = "8";
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.612025 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;roundsX = 8";
		};
	};
};
class strike_type {
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.20 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_strike_type;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.18 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_strike_type_single;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;typeArty = ""NORMAL"";";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_strike_type_barrage;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; typeArty = ""BARRAGE"";";
		};
		/*
		class HQ_button_Gremove: RscButton
		{
			idc = -1;
			text = "Remove Garrison Squads"; //--- ToDo: Localize;
			x = 0.37749 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "nul = [] call removeGarrison";
		};
		*/
	};
};

//NATO
class NATO_player {
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.20 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_nato_player_specop;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.18 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_nato_player_quadbike;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;[] call A3A_fnc_NATOQuadbike";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_nato_player_fast;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;[] spawn A3A_fnc_NATOFT";
		};
	};
};


//Undefined
class mbt_type {
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.20 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_mbt_type;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.18 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_mortar_type_he;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; typeAmmunition = ""32Rnd_155mm_Mo_shells"";";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_mortar_type_laser;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; typeAmmunition = ""2Rnd_155mm_Mo_LG"";";
		};

		class HQ_button_Gremove: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_mortar_type_smoke;
			x = 0.37749 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; typeAmmunition = ""6Rnd_155mm_Mo_smoke"";";
		};
	};
};
class squad_options 	{
	idd=100;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.30 * safezoneH;//30
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_squad_options;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.28 * safezoneH;//28
		};
		class HQ_button_back: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_button_back_text;
			x = 0.61 * safezoneW + safezoneX;
			y = 0.251941 * safezoneH + safezoneY;
			w = 0.06 * safezoneW;//0.175015
			h = 0.05 * safezoneH;
			action = "closeDialog 0;_nul = createDialog ""squad_recruit"";";
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = 104;
			text = $STR_antistasi_dialogs_squad_options_normal;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			//tooltip = "";
			action = "closeDialog 0;nul = [groupsSDKSquad] spawn A3A_fnc_addFIAsquadHC;";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = 105;
			text = $STR_antistasi_dialogs_squad_options_engineer;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0; nul = [groupsSDKSquadEng] spawn A3A_fnc_addFIAsquadHC;";
		};

		class HQ_button_Gremove: RscButton
		{
			idc = 106;
			text = $STR_antistasi_dialogs_squad_options_mg;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [groupsSDKSquadSupp,""MG""] spawn A3A_fnc_addFIAsquadHC;";
		};
		class HQ_button_unlock: RscButton
		{
			idc = 107;
			text = $STR_antistasi_dialogs_squad_options_mortar;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;nul = [groupsSDKSquadSupp,""Mortar""] spawn A3A_fnc_addFIAsquadHC;";
		};
	};
};
class diff_menu 			{
	idd=-1;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.30 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_diff_menu;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.28 * safezoneH;
		};
		class HQ_button_mortar: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_diff_menu_easy;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "skillMult = 1; closeDialog 0;";
		};
		class HQ_button_MG: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_diff_menu_normal;
			x = 0.37749 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "skillMult = 2; closeDialog 0;";
		};
		class HQ_button_AT: RscButton
		{
			idc = -1;
			text = $STR_antistasi_dialogs_diff_menu_hard;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "skillMult = 3; closeDialog 0;";
		};
	};
};

class gameMode_menu 			{
	idd=100;
	movingenable=false;

	class controls {
		class HQ_box: BOX
		{
			idc = -1;
			text = $STR_antistasi_dialogs_generic_box_text;
			x = 0.244979 * safezoneW + safezoneX;
			y = 0.223941 * safezoneH + safezoneY;
			w = 0.445038 * safezoneW;
			h = 0.30 * safezoneH;
		};
		class HQ_frame: RscFrame
		{
			idc = -1;
			text = $STR_antistasi_dialogs_gameMode_menu;
			x = 0.254979 * safezoneW + safezoneX;
			y = 0.233941 * safezoneH + safezoneY;
			w = 0.425038 * safezoneW;
			h = 0.28 * safezoneH;
		};
		class HQ_button_Gsquad: RscButton
		{
			idc = 104;
			text = $STR_antistasi_dialogs_gameMode_menu_Reb_vs_Gov_vs_Inv;
			x = 0.272481 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;gameMode = 1;";
		};
		class HQ_button_Gstatic: RscButton
		{
			idc = 105;
			text = $STR_antistasi_dialogs_gameMode_menu_Reb_vs_Gov_and_Inv;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.317959 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;gameMode = 2;";
		};
		class HQ_button_Gremove: RscButton
		{
			idc = 106;
			text = $STR_antistasi_dialogs_gameMode_menu_Reb_vs_Gov;
			//x = 0.37749 * safezoneW + safezoneX;
			x = 0.482498 * safezoneW + safezoneX;
			y = 0.415981 * safezoneH + safezoneY;
			w = 0.175015 * safezoneW;
			h = 0.0560125 * safezoneH;
			action = "closeDialog 0;gameMode = 3;";
		};
		class HQ_button_offroad: RscButton
		{
			idc = 107;
		 	text = $STR_antistasi_dialogs_gameMode_menu_Reb_vs_Inv;
			x = 0.272481 * safezoneW + safezoneX;
		 	y = 0.415981 * safezoneH + safezoneY;
		 	w = 0.175015 * safezoneW;
		 	h = 0.0560125 * safezoneH;
		 	action = "closeDialog 0;gameMode = 4";
		 };
	};
};

class RscTitles {
	class Default {
       idd = -1;
       fadein = 0;
       fadeout = 0;
       duration = 0;
    };
    class H8erHUD {
        idd = 745;
        movingEnable =  0;
        enableSimulation = 1;
        enableDisplay = 1;
        duration     =  10e10;
        fadein       =  0;
        fadeout      =  0;
        name = "H8erHUD";
		onLoad = "with uiNameSpace do { H8erHUD = _this select 0 }";
		class controls {
		    class structuredText {
                access = 0;
                type = 13;
                idc = 1001;
                style = 0x00;
                lineSpacing = 1;
				x = 0.103165 * safezoneW + safezoneX;
				y = 0.007996 * safezoneH + safezoneY;//0.757996
				w = 0.778208 * safezoneW;
				h = 0.0660106 * safezoneH;
                size = 0.055;//0.020
                colorBackground[] = {0,0,0,0};
                colorText[] = {0.34,0.33,0.33,0};//{1,1,1,1}
                text = "";
                font = "PuristaSemiBold";
				class Attributes {
					font = "PuristaSemiBold";
					color = "#C1C0BB";//"#FFFFFF";
					align = "CENTER";
					valign = "top";
					shadow = true;
					shadowColor = "#000000";
					underline = false;
					size = "4";//4
				};
            };
		};
	};
};
