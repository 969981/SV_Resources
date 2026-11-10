/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028e6eb0; name: FUN_028e6eb0
 */


void FUN_028e6eb0(long param_1,undefined8 *param_2,byte param_3)

{
  long *plVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *plStack_78;
  undefined1 auStack_70 [24];
  long *local_58;
  undefined1 auStack_40 [8];
  long *local_38;
  
  local_90 = *param_2;
  uStack_88 = param_2[1];
  local_80 = param_2[2];
  plVar1 = (long *)param_2[3];
  plStack_78 = plVar1;
  if (plVar1 == (long *)0x0) {
    FUN_028e6c04(auStack_70,param_1,&local_90);
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1);
    FUN_028e6c04(auStack_70,param_1,&local_90);
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  plVar1 = (long *)FUN_00c8f0cc(param_1 + 0x1a0,auStack_70);
  *(byte *)(*(long *)(param_1 + 0x208) + *plVar1 * 0x40 + 0x29) = param_3 & 1;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_028e6b98(auStack_40);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


