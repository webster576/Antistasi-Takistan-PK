private ["_display","_childControl","_costs","_costHR"];
_nul = createDialog "mil_support_recruit";

//sleep 1;
disableSerialization;

_display = findDisplay 100;

if (str (_display) != "no display") then
{
	_ChildControl = _display displayCtrl 101;
	_costs = (2*(server getVariable staticCrewTeamPlayer));
	_costHR = 2;
	_costs = _costs + ([vehSDKHeal] call A3A_fnc_vehiclePrice) + ([vehSDKTruck] call A3A_fnc_vehiclePrice);
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €. HR: %2",_costs,_costHR];
	
	_ChildControl = _display displayCtrl 102;
	_costs = (2*(server getVariable staticCrewTeamPlayer));
	_costHR = 2;
	_costs = _costs + ([vehSDKFuel] call A3A_fnc_vehiclePrice) + ([vehSDKTruck] call A3A_fnc_vehiclePrice);
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €. HR: %2",_costs,_costHR];
	
	_ChildControl = _display displayCtrl 103;
	_costs = (2*(server getVariable staticCrewTeamPlayer));
	_costHR = 2;
	_costs = _costs + ([vehSDKRepair] call A3A_fnc_vehiclePrice) + ([vehSDKTruck] call A3A_fnc_vehiclePrice);
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €. HR: %2",_costs,_costHR];
	
	_ChildControl = _display displayCtrl 104;
	_costs = (2*(server getVariable staticCrewTeamPlayer));
	_costHR = 2;
	_costs = _costs + ([vehSDKAmmo] call A3A_fnc_vehiclePrice) + ([vehSDKTruck] call A3A_fnc_vehiclePrice);
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €. HR: %2",_costs,_costHR];
};