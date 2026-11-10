/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02986524; name: FUN_02986524
 */


void FUN_02986524(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 local_b0;
  undefined4 local_ac;
  ushort local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined4 local_74;
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [48];
  
  FUN_01246154(auStack_50);
  FUN_01920e80(&local_b0);
  local_7c = 5;
  local_78 = 2;
  local_80 = 0;
  local_74 = 0;
  local_ac = 0xd;
  plVar1 = (long *)FUN_01242508(param_1);
  local_b0 = (**(code **)(*plVar1 + 0x98))();
  local_78 = 0;
  local_80 = local_80 | 0x3c;
  FUN_01582534(param_1);
  uVar2 = FUN_01920e44();
  FUN_01920e4c(uVar2,auStack_5c);
  uVar2 = FUN_01249340(param_1);
  FUN_01920eb8(uVar2,&local_b0);
  return;
}


