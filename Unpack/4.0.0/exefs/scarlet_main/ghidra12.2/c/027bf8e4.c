/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027bf8e4; name: FUN_027bf8e4
 */


void FUN_027bf8e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  
  local_50 = 0;
  uStack_48 = 0;
  FUN_00c43ef0(&local_50,param_4);
  local_40 = *(undefined8 *)(param_4 + 0x10);
  local_38 = *(undefined1 *)(param_4 + 0x18);
  FUN_018ddc10(param_1,&local_50);
  FUN_018ddc74(&local_50);
  *param_1 = &PTR_FUN_045e1b70;
  param_1[4] = &PTR_LAB_045e1c40;
  param_1[5] = &DAT_045e1c90;
  param_1[0xd] = param_2;
  param_1[0xe] = param_3;
  puVar1 = PTR_DAT_047da800;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if (((*puVar1 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047da800), iVar2 != 0)) {
    FUN_00100190(PTR_LAB_047da9d0,PTR_DAT_047da808,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da800);
  }
  lVar3 = *(long *)PTR_DAT_047da808;
  *(long *)PTR_DAT_047da810 = lVar3;
  if (lVar3 != 0) {
    FUN_027bf9fc(auStack_60);
    FUN_027bfb28(param_1 + 0xf,auStack_60);
    FUN_027bfe38(auStack_60);
  }
  return;
}


