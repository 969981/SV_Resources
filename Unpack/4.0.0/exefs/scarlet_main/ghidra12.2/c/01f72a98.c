/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f72a98; name: FUN_01f72a98
 */


void FUN_01f72a98(undefined8 param_1)

{
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_38 = 0;
  local_30 = FUN_01cf7e20();
  uStack_28 = 0;
  local_58 = 0;
  local_40 = &local_38;
  local_50 = FUN_01cf7e20();
  uStack_48 = 0;
  local_68 = 0;
  local_70 = 0;
  puStack_60 = &local_58;
  FUN_01f72b20(param_1,&local_40,&puStack_60,&local_68,&local_70);
  FUN_01cfa44c(&puStack_60,local_58);
  FUN_01cfa44c(&local_40,local_38);
  return;
}


