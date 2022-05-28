private ["_display","_childControl"];
_nul = createDialog "mil_vehicle_tanks";

//sleep 1;
disableSerialization;

_display = findDisplay 100;

if (str (_display) != "no display") then
{
	_ChildControl = _display displayCtrl 101;
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €",[vehSDKT3485] call A3A_fnc_vehiclePrice];
	_childControl ctrlSetText format ["%1",getText (configFile >> "CfgVehicles" >> vehSDKT3485 >> "displayName")];
	_ChildControl = _display displayCtrl 102;
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €",[vehSDKT55] call A3A_fnc_vehiclePrice];
	_childControl ctrlSetText format ["%1",getText (configFile >> "CfgVehicles" >> vehSDKT55 >> "displayName")];
	_ChildControl = _display displayCtrl 103;
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €",[vehSDKM60A3] call A3A_fnc_vehiclePrice];
	_childControl ctrlSetText format ["%1",getText (configFile >> "CfgVehicles" >> vehSDKM60A3 >> "displayName")];
	_ChildControl = _display displayCtrl 104;
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €",[vehSDKT72BA] call A3A_fnc_vehiclePrice];
	_childControl ctrlSetText format ["%1",getText (configFile >> "CfgVehicles" >> vehSDKT72BA >> "displayName")];
};