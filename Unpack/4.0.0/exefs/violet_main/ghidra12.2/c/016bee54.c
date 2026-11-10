/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016bee54; name: FUN_016bee54
 */


void FUN_016bee54(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0x295b45c2a981f1c7;
  pcStack_38 = "OffScreenCommon::";
  local_30 = 0x11;
  local_28 = (long *)0x0;
  local_60 = *param_2;
  uStack_58 = param_2[1];
  local_50 = param_2[2];
  local_48 = (long *)param_2[3];
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))();
  }
  FUN_01221800(param_1,&local_40,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


