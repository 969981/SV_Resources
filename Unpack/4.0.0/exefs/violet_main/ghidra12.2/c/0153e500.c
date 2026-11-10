/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0153e500; name: FUN_0153e500
 */


void FUN_0153e500(long param_1,undefined8 param_2)

{
  undefined1 local_14 [4];
  
  nn::hid::SetSupportedNpadStyleSet(*(undefined4 *)(param_1 + 0xa0));
  nn::hid::SetSupportedNpadIdType((uint *)&DAT_03d63564,2);
  nn::hid::SetNpadJoyHoldType(0);
  nn::hid::SetNpadHandheldActivationMode(0);
  nn::hid::BindNpadStyleSetUpdateEvent(&DAT_03d63564,param_1 + 0x40,0);
  nn::hid::BindNpadStyleSetUpdateEvent(&DAT_03d63568,param_1 + 0x70,0);
  FUN_01541284(param_1,PTR_No1_047db080,param_2);
  FUN_01540978(param_1,1,PTR_Handheld_047ddd50,param_2);
  if (*(code **)(param_1 + 0x260) != (code *)0x0) {
    local_14[0] = 1;
    (**(code **)(param_1 + 0x260))(param_1 + 0x280,PTR_Handheld_047ddd50,local_14);
  }
  return;
}


