/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012f06c0; name: FUN_012f06c0
 */


void FUN_012f06c0(undefined8 param_1)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  undefined8 local_8;
  
  local_40 = 0x7ff2e4c30d588160;
  pcStack_38 = "trinity_CharacterCreationComponent";
  local_30 = 0x22;
  local_28 = (long *)0x0;
  local_8 = param_1;
  FUN_012f077c(&local_40,&local_8);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x8c79009df4516fee;
  pcStack_38 = "trinity_CharacterCreationMasterComponent";
  local_30 = 0x28;
  local_28 = (long *)0x0;
  local_8 = param_1;
  FUN_012f0888(&local_40,&local_8);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


