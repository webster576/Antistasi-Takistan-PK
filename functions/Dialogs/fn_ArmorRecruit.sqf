private ["_display","_childControl","_costs","_costHR"];
_nul = createDialog "armor_recruit";

//sleep 1;
disableSerialization;

_display = findDisplay 100;

if (str (_display) != "no display") then
{
	_ChildControl = _display displayCtrl 101;
	_costs = (2*(server getVariable staticCrewTeamPlayer));
	_costHR = 2;
	_costs = _costs + ([vehSDKATGM] call A3A_fnc_vehiclePrice) + ([vehSDKTruck] call A3A_fnc_vehiclePrice);
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €. HR: %2",_costs,_costHR];
	
	_ChildControl = _display displayCtrl 102;
	_costs = (2*(server getVariable staticCrewTeamPlayer));
	_costHR = 2;
	_costs = _costs + ([vehSDKBTR80A] call A3A_fnc_vehiclePrice) + ([vehSDKTruck] call A3A_fnc_vehiclePrice);
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €. HR: %2",_costs,_costHR];
	
	_ChildControl = _display displayCtrl 103;
	_costs = (2*(server getVariable staticCrewTeamPlayer));
	_costHR = 2;
	_costs = _costs + ([vehSDKZSU] call A3A_fnc_vehiclePrice) + ([vehSDKTruck] call A3A_fnc_vehiclePrice);
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €. HR: %2",_costs,_costHR];
	
	_ChildControl = _display displayCtrl 104;
	_costs = (2*(server getVariable staticCrewTeamPlayer));
	_costHR = 2;
	_costs = _costs + ([vehSDKBMD] call A3A_fnc_vehiclePrice) + ([vehSDKTruck] call A3A_fnc_vehiclePrice);
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €. HR: %2",_costs,_costHR];
	
	_ChildControl = _display displayCtrl 105;
	_costs = (2*(server getVariable staticCrewTeamPlayer));
	_costHR = 2;
	_costs = _costs + ([vehSDKBMP] call A3A_fnc_vehiclePrice) + ([vehSDKTruck] call A3A_fnc_vehiclePrice);
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €. HR: %2",_costs,_costHR];
	
	_ChildControl = _display displayCtrl 106;
	_costs = (2*(server getVariable staticCrewTeamPlayer));
	_costHR = 2;
	_costs = _costs + ([vehSDKT72BA] call A3A_fnc_vehiclePrice) + ([vehSDKTruck] call A3A_fnc_vehiclePrice);
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €. HR: %2",_costs,_costHR];
	
	_ChildControl = _display displayCtrl 107;
	_costs = (2*(server getVariable staticCrewTeamPlayer));
	_costHR = 2;
	_costs = _costs + ([vehSDKT72BB] call A3A_fnc_vehiclePrice) + ([vehSDKTruck] call A3A_fnc_vehiclePrice);
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €. HR: %2",_costs,_costHR];
	
	_ChildControl = _display displayCtrl 108;
	_costs = (2*(server getVariable staticCrewTeamPlayer));
	_costHR = 2;
	_costs = _costs + ([vehSDK2S1] call A3A_fnc_vehiclePrice) + ([vehSDKTruck] call A3A_fnc_vehiclePrice);
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €. HR: %2",_costs,_costHR];
};