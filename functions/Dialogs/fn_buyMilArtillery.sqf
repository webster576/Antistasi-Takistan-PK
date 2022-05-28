private ["_display","_childControl"];
_nul = createDialog "mil_vehicle_artillery";

//sleep 1;
disableSerialization;

_display = findDisplay 100;

if (str (_display) != "no display") then
{
	_ChildControl = _display displayCtrl 101;
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €",[vehSDKHpodnos] call A3A_fnc_vehiclePrice];
	_childControl ctrlSetText format ["%1",getText (configFile >> "CfgVehicles" >> vehSDKHpodnos >> "displayName")];
	_ChildControl = _display displayCtrl 102;
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €",[SDKD30] call A3A_fnc_vehiclePrice];
	_childControl ctrlSetText format ["%1",getText (configFile >> "CfgVehicles" >> SDKD30 >> "displayName")];
	_ChildControl = _display displayCtrl 103;
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €",[vehSDK2S1] call A3A_fnc_vehiclePrice];
	_childControl ctrlSetText format ["%1",getText (configFile >> "CfgVehicles" >> vehSDK2S1 >> "displayName")];
	_ChildControl = _display displayCtrl 104;
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €",[vehSDKBM21] call A3A_fnc_vehiclePrice];
	_childControl ctrlSetText format ["%1",getText (configFile >> "CfgVehicles" >> vehSDKBM21 >> "displayName")];
};