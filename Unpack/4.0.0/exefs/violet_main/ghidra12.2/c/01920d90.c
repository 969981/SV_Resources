/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01920d90; name: FUN_01920d90
 */


void FUN_01920d90(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined2 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined4 local_74;
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [48];
  
  FUN_01246154(auStack_50);
  FUN_01920e80(&local_b0);
  local_7c = 5;
  local_78 = 2;
  local_ac = 0xd;
  local_74 = 0;
  local_80 = 3;
  plVar1 = (long *)FUN_01242508(param_1);
  local_74 = (**(code **)(*plVar1 + 0x98))();
  plVar1 = (long *)FUN_01242508(param_1);
  local_b0 = (**(code **)(*plVar1 + 0x98))();
  FUN_01582534(param_1);
  uVar2 = FUN_01920e44();
  FUN_01920e4c(uVar2,auStack_5c);
  uVar2 = FUN_01249340(param_1);
  FUN_01920eb8(uVar2,&local_b0);
  return;
}


