/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b1d7dc; name: FUN_01b1d7dc
 */


bool FUN_01b1d7dc(long param_1,undefined *param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long *local_58 [4];
  long *local_38;
  undefined *local_28;
  
  local_28 = param_2;
  if ((param_3 & 1) == 0) {
    local_98 = param_2;
    FUN_00e52f24(local_58,&local_98);
  }
  else {
    FUN_01df5b88(local_58,&local_28);
  }
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = PTR_DAT_047d8e88 + 0x10;
  local_90 = (long *)0x0;
  FUN_00dc5c18(&local_98,0,local_58,0,*(undefined8 *)(param_1 + 8));
  lVar1 = (**(code **)(*local_90 + 0x70))();
  if (lVar1 == 0) {
    FUN_00db239c(&local_98);
  }
  else {
    uVar2 = (**(code **)(*local_90 + 0x70))();
    FUN_01f2b60c(param_1,uVar2,param_4);
    FUN_00db239c(&local_98);
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_58[0] != (long *)0x0) {
    (**(code **)(*local_58[0] + 0x20))();
  }
  return lVar1 != 0;
}


