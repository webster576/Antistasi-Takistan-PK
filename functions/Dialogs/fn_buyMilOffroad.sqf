private ["_display","_childControl"];
_nul = createDialog "mil_vehicle_offroad";

//sleep 1;
disableSerialization;

_display = findDisplay 100;

if (str (_display) != "no display") then
{
	_ChildControl = _display displayCtrl 101;
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €",[vehSDKBike] call A3A_fnc_vehiclePrice];
	
	_ChildControl = _display displayCtrl 102;
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €",[vehSDKLightUnarmed] call A3A_fnc_vehiclePrice];	
	
	_ChildControl = _display displayCtrl 103;
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €",[vehSDKLightTruck] call A3A_fnc_vehiclePrice];
	
	_ChildControl = _display displayCtrl 104;
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €",[vehSDKLightArmed] call A3A_fnc_vehiclePrice];
	
	_ChildControl = _display displayCtrl 105;
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €",[vehSDKGL] call A3A_fnc_vehiclePrice];
	
	_ChildControl = _display displayCtrl 106;
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €",[vehSDKAT] call A3A_fnc_vehiclePrice];
	
	_ChildControl = _display displayCtrl 107;
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €",[vehSDKAA] call A3A_fnc_vehiclePrice];
	
	_ChildControl = _display displayCtrl 108;
	_ChildControl  ctrlSetTooltip format ["Cost: %1 €",[vehSDKBTR80] call A3A_fnc_vehiclePrice];
};