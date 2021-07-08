private ["_display","_childControl"];
_nul = createDialog "mil_vehicle_armored";

//sleep 1;
disableSerialization;

_display = findDisplay 100;

if (str (_display) != "no display") then
{
	_ChildControl = _display displayCtrl 101;
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €",[vehSDKATGM] call A3A_fnc_vehiclePrice];
	
	_ChildControl = _display displayCtrl 102;
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €",[vehSDKBTR] call A3A_fnc_vehiclePrice];
	
	_ChildControl = _display displayCtrl 103;
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €",[vehSDKZSU] call A3A_fnc_vehiclePrice];
	
	_ChildControl = _display displayCtrl 104;
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €",[vehSDKBMD] call A3A_fnc_vehiclePrice];
	
	_ChildControl = _display displayCtrl 105;
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €",[vehSDKBMP] call A3A_fnc_vehiclePrice];
	
	_ChildControl = _display displayCtrl 106;
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €",[vehSDKT72BA] call A3A_fnc_vehiclePrice];
	
	_ChildControl = _display displayCtrl 107;
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €",[vehSDKT72BB] call A3A_fnc_vehiclePrice];
	
	_ChildControl = _display displayCtrl 108;
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €",[vehSDK2S1] call A3A_fnc_vehiclePrice];
};